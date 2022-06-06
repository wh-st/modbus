#pragma once

#include <QWidget>
#include "ui_OptionWidget.h"
#define COM_BAUDRATE {"110", "300", "600", "1200", "2400", "4800", "9600", "14400", "19200", "38400", "57600", "115200", "230400", "380400", "460800", "921600"}
#define COM_DATABITS {"5", "6", "7", "8"}
#define COM_PARITY   {"None", "Odd", "Even", "Mark", "Space"}
#define COM_STOPBITS {"1", "1.5", "2"}

#define SET_COM_PARITY(d, o) \
if((o) == "None") {\
	(d)->setParity(QSerialPort::Parity::NoParity);\
}\
else if((o) == "Odd") {\
	(d)->setParity(QSerialPort::Parity::OddParity);\
}\
else if((o) == "Even") {\
	(d)->setParity(QSerialPort::Parity::EvenParity);\
}\
else if((o) == "Mark") {\
	(d)->setParity(QSerialPort::Parity::MarkParity);\
}\
else if((o) == "Space") {\
	(d)->setParity(QSerialPort::Parity::SpaceParity);\
}\
else {\
	(d)->setParity(QSerialPort::Parity::UnknownParity);\
}\

#define SET_COM_STOPBITS(d, o) \
if((o) == "1.5") {\
	(d)->setStopBits(QSerialPort::StopBits::OneAndHalfStop);\
}\
else {\
	(d)->setStopBits(static_cast<QSerialPort::StopBits>((o).toInt()));\
}\

class OptionWidget : public QWidget
{
	Q_OBJECT

public:
	OptionWidget(QWidget *parent = Q_NULLPTR);
	~OptionWidget();

signals:
	void closed();
private:
	Ui::OptionWidget ui;

	void initialize();
protected:
	void closeEvent(QCloseEvent* event) override;

private slots:
	void onTypeChanged();
	void save();
};
