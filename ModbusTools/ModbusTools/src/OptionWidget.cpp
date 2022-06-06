#include "OptionWidget.h"
#include <QCloseEvent>
#include <QRadioButton>
#include <QSerialPortInfo>
#include <QMessageBox>
#include "Option.h"

OptionWidget::OptionWidget(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	this->setFixedSize(this->width(), this->height());
	this->setAttribute(Qt::WA_DeleteOnClose);

	initialize();
}


void OptionWidget::initialize() {
	ui.baudrate->addItems(COM_BAUDRATE);
	ui.databits->addItems(COM_DATABITS);
	ui.parity->addItems(COM_PARITY);
	ui.stopbits->addItems(COM_STOPBITS);


	for (auto port : QSerialPortInfo::availablePorts()) {
		ui.port->addItem(port.portName());
	}

	
	ui.rb_Rtu->setChecked(Option::config_type()->ConnectType() == Serial);
	ui.rb_Tcp->setChecked(Option::config_type()->ConnectType() == Tcp);
	ui.groupBox_Rtu->setEnabled(ui.rb_Rtu->isChecked());
	ui.groupBox_Tcp->setEnabled(ui.rb_Tcp->isChecked());

	ui.port->setCurrentText(Option::serial_config()->port());
	ui.baudrate->setCurrentText(Option::serial_config()->baud_rate());
	ui.databits->setCurrentText(Option::serial_config()->data_bits());
	ui.parity->setCurrentText(Option::serial_config()->parity());
	ui.stopbits->setCurrentText(Option::serial_config()->stop_bits());

	ui.ip->setText(Option::tcp_config()->Ip());
	ui.tcp_port->setValue(Option::tcp_config()->Port().toInt());
}

void OptionWidget::closeEvent(QCloseEvent* event) {
	
	if(event->isAccepted()) {
		emit closed();
	}
}

void OptionWidget::onTypeChanged() {
	auto* obj = static_cast<QRadioButton*>(sender());
	if(obj == ui.rb_Rtu) {
		ui.groupBox_Rtu->setEnabled(true);
		ui.groupBox_Tcp->setEnabled(false);
	}

	if(obj == ui.rb_Tcp) {
		ui.groupBox_Rtu->setEnabled(false);
		ui.groupBox_Tcp->setEnabled(true);
	}
}

void OptionWidget::save() {
	if(ui.rb_Rtu->isChecked()) {
		Option::config_type()->connectType_ = Serial;
	}
	else if(ui.rb_Tcp->isChecked()) {
		Option::config_type()->connectType_ = Tcp;
	}

	Option::serial_config()->port_ = ui.port->currentText();
	Option::serial_config()->baud_rate_ = ui.baudrate->currentText();
	Option::serial_config()->parity_ = ui.parity->currentText();
	Option::serial_config()->data_bits_ = ui.databits->currentText();
	Option::serial_config()->stop_bits_ = ui.stopbits->currentText();

	Option::tcp_config()->ip_ = ui.ip->text();
	Option::tcp_config()->port_ = QString::number(ui.tcp_port->value());

	Option::save();
	QMessageBox::information(this, "save", "save config successfully.");
}

OptionWidget::~OptionWidget()
= default;