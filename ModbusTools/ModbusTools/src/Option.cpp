#include "Option.h"

#include <qcoreapplication.h>
#include <qfileinfo.h>
SerialConfig Option:: serial_config_;
TcpConfig Option::tcp_config_;
ConfigType Option::config_type_;
QSettings* Option::config = Q_NULLPTR;

const QString Option::PARAM_FILENAME = "Config.ini";

const QString Option::COM_PORT = "Serial/Port";
const QString Option::BAUD_RATE = "Serial/Baud_Rate";
const QString Option::DATA_BITS = "Serial/Data_Bits";
const QString Option::PARITY = "Serial/Parity";
const QString Option::STOP_BITS = "Serial/Stop_Bits";


const QString Option::IP = "TCP/Ip";
const QString Option::Port = "TCP/Port";

const QString Option::Type = "Connect/Type";

Option::Option(QObject *parent)
	: QObject(parent)
{
}


void Option::initialize() {
	if(config == Q_NULLPTR) {
		const QString filepath = QCoreApplication::applicationDirPath()
		.append("/")
		.append(PARAM_FILENAME);
		const QFileInfo info(filepath);
		config = new QSettings(filepath,QSettings::IniFormat);
		info.exists() ? sync() : save();
	}
}

void Option::sync() {
	serial_config()->port_ = config->value(COM_PORT).toString();
	serial_config()->baud_rate_ = config->value(BAUD_RATE).toString();
	serial_config()->data_bits_ = config->value(DATA_BITS).toString();
	serial_config()->stop_bits_ = config->value(STOP_BITS).toString();
	serial_config()->parity_ = config->value(PARITY).toString();

	tcp_config()->ip_ = config->value(IP).toString();
	tcp_config()->port_ = config->value(Port).toString();

	config_type()->connectType_ = static_cast<ConnectType>(config->value(Type).toInt());
}

void Option::save() {
	config->setValue(COM_PORT, serial_config()->port());
	config->setValue(BAUD_RATE, serial_config()->baud_rate());
	config->setValue(DATA_BITS, serial_config()->data_bits());
	config->setValue(STOP_BITS, serial_config()->stop_bits());
	config->setValue(PARITY, serial_config()->parity());

	config->setValue(IP, tcp_config()->Ip());
	config->setValue(Port, tcp_config()->Port());

	config->setValue(Type, static_cast<const QVariant>(config_type()->ConnectType()));
	config->sync();
}

SerialConfig* Option::serial_config() {
	return &serial_config_;
}

TcpConfig* Option::tcp_config() {
	return &tcp_config_;
}

ConfigType* Option::config_type() {
	return &config_type_;
}


Option::~Option()
= default;
