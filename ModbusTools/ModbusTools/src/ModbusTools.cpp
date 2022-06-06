#include "ModbusTools.h"
#include <QSerialPort>
#include "Option.h"
#include <QDebug>
#include <QStandardItemModel>

#include "WriteRegisterModel.h"

ModbusTools::ModbusTools(QWidget *parent)
    : QMainWindow(parent)
	, option_widget_(Q_NULLPTR)
	, device_(Q_NULLPTR)
{
    ui.setupUi(this);

    ui.Type->addItem(tr("Coils"), QModbusDataUnit::Coils);
    ui.Type->addItem(tr("Discrete Inputs"), QModbusDataUnit::DiscreteInputs);
    ui.Type->addItem(tr("Input Registers"), QModbusDataUnit::InputRegisters);
    ui.Type->addItem(tr("Holding Registers"), QModbusDataUnit::HoldingRegisters);

    ui.Type->setCurrentIndex(0);
    writeModel = new WriteRegisterModel(this);
    writeModel->setStartAddress(ui.start_address_write->value());
    writeModel->setNumberOfValues(ui.number_write->currentText());

    ui.treeView->setModel(writeModel);
    ui.treeView->hideColumn(2);
    connect(writeModel, &WriteRegisterModel::updateViewport, ui.treeView->viewport(),
        static_cast<void (QWidget::*)()>(&QWidget::update));


    auto model = new QStandardItemModel(10, 1, this);
    for (int i = 0; i < 10; ++i)
        model->setItem(i, new QStandardItem(QStringLiteral("%1").arg(i + 1)));

    connect(ui.number_write, &QComboBox::currentTextChanged, writeModel,
        &WriteRegisterModel::setNumberOfValues);
    ui.number_write->setModel(model);
    ui.number_write->setCurrentText("10");
   

    auto valueChanged = static_cast<void (QSpinBox::*)(int)> (&QSpinBox::valueChanged);
    connect(ui.start_address_write, valueChanged, writeModel, &WriteRegisterModel::setStartAddress);
    connect(ui.start_address_write, valueChanged, this, [this, model](int i) {
        int lastPossibleIndex = 0;
        const int currentIndex = ui.number_write->currentIndex();
        for (int ii = 0; ii < 10; ++ii) {
            if (ii < (10 - i)) {
                lastPossibleIndex = ii;
                model->item(ii)->setEnabled(true);
            }
            else {
                model->item(ii)->setEnabled(false);
            }
        }
        if (currentIndex > lastPossibleIndex)
            ui.number_write->setCurrentIndex(lastPossibleIndex);
    });
}

void ModbusTools::OnConnect() {
	if (ui.btnConnect->text() == "Connect") {
        ui.btnConnect->setText("DisConnect");
        ui.btnRead->setEnabled(true);
        ui.btnWrite->setEnabled(true);
        ui.btnReadWrite->setEnabled(true);
        device_ = new DModbusDevice;
		if (Option::config_type()->ConnectType() == Serial) {
            device_->setConnectType(Serial);
            device_->setPort(Option::serial_config()->port());
            device_->setBaudRate(Option::serial_config()->baud_rate().toInt());
            device_->setDataBits(static_cast<QSerialPort::DataBits>(Option::serial_config()->data_bits().toInt()));
            SET_COM_PARITY(device_, Option::serial_config()->parity());
            SET_COM_STOPBITS(device_, Option::serial_config()->stop_bits());
           device_->setTimeout(1500);
		}
		else if (Option::config_type()->ConnectType() == Tcp) {
            device_->setConnectType(Tcp);
            device_->setIp(Option::tcp_config()->Ip());
            device_->setTcpPort(Option::tcp_config()->Port().toInt());
		}
        device_->setAddress(ui.slave->value());
        if(!device_->connect()) {
            qDebug() << "device connect failed.";
        }
    }
    else {
        ui.btnConnect->setText("Connect");
        ui.btnRead->setEnabled(false);
        ui.btnWrite->setEnabled(false);
        ui.btnReadWrite->setEnabled(false);
        device_->disconnect();
    }
}

void ModbusTools::OptionShow() {
    if(option_widget_ == Q_NULLPTR) {
        option_widget_ = new OptionWidget;
        connect(option_widget_, &OptionWidget::closed, [&] {
            option_widget_->close();
            option_widget_ = Q_NULLPTR;
        });
    }

    option_widget_->showNormal();

}

void ModbusTools::read() {
	if (!device_)
		return;
	ui.listWidget->clear();
	statusBar()->clearMessage();
    const quint16 start_address = ui.start_address_read->value();
    const quint16 size = ui.number_read->currentText().toInt();
    QVector<quint16> values;
    QVector<bool> results;
	if(ui.Type->currentData() == QModbusDataUnit::Coils) {
        device_->read3(start_address, size, results);
	}
    else if(ui.Type->currentData() == QModbusDataUnit::DiscreteInputs) {
        device_->read2(start_address, size, results);
    }
    else if(ui.Type->currentData() == QModbusDataUnit::InputRegisters) {
        device_->read4(start_address, size, values);
    }
    else if (ui.Type->currentData() == QModbusDataUnit::HoldingRegisters) {
        device_->read(start_address, size, values);
    }

    if(!values.isEmpty()) {
        for (int i = 0;i < values.count();i++) {
            ui.listWidget->addItem(QString::number(values[i]));
        }
    }
    if(!results.isEmpty()) {
        for (int i = 0; i < results.count(); i++) {
            ui.listWidget->addItem(results[i] ? "True" : "False");
        }
    }
}

void ModbusTools::write() {

    if (!device_)
        return;
    ui.listWidget->clear();
    statusBar()->clearMessage();
    const quint16 start_address = ui.start_address_read->value();
    const quint16 size = ui.number_write->currentText().toInt();

    if (ui.Type->currentData() == QModbusDataUnit::Coils) {
        for (int i = 0;i < size;i++) {
            device_->write2(start_address + i, writeModel->m_coils[i + start_address]);
        }

    }
    else if (ui.Type->currentData() == QModbusDataUnit::HoldingRegisters) {
        for (int i = 0; i < size; i++) {
            device_->write(start_address + i, writeModel->m_holdingRegisters[i + start_address]);
        }
    }


}

void ModbusTools::readwrite() {
    if (!device_)
        return;
    ui.listWidget->clear();
    statusBar()->clearMessage();
    QVector<quint16> values;
    QVector<bool> results;
    const quint16 start_address = ui.start_address_read->value();
    const quint16 size = ui.number_write->currentText().toInt();
    const quint16 size_r = ui.number_read->currentText().toInt();
    if (ui.Type->currentData() == QModbusDataUnit::Coils) {
        for (int i = 0; i < size; i++) {
            device_->write2(start_address + i, writeModel->m_coils[i + start_address]);
        }

        device_->read3(start_address, size_r, results);
    }
    else if (ui.Type->currentData() == QModbusDataUnit::HoldingRegisters) {
        for (int i = 0; i < size; i++) {
            device_->write(start_address + i, writeModel->m_holdingRegisters[i + start_address]);
        }

        device_->read(start_address, size_r, values);
    }

    if (!values.isEmpty()) {
        for (int i = 0; i < values.count(); i++) {
            ui.listWidget->addItem(QString::number(values[i]));
        }
    }
    if (!results.isEmpty()) {
        for (int i = 0; i < results.count(); i++) {
            ui.listWidget->addItem(results[i] ? "True" : "False");
        }
    }
}

void ModbusTools::typeChanged(int index) {

    const bool coilsOrHolding = index == 0 || index == 3;
    if (coilsOrHolding) {
        ui.treeView->setColumnHidden(1, index != 0);
        ui.treeView->setColumnHidden(2, index != 3);
        ui.treeView->resizeColumnToContents(0);
    }

    ui.btnReadWrite->setEnabled(index == 0 || index == 3);
    ui.btnWrite->setEnabled(coilsOrHolding);
    ui.groupBox_write->setEnabled(coilsOrHolding);
    
}
