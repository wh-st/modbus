#include "SerialConfig.h"

SerialConfig::SerialConfig(QObject *parent)
	: QObject(parent)
{
}


QString SerialConfig::port() const {
	return port_;
}

QString SerialConfig::baud_rate() const {
	return baud_rate_;
}

QString SerialConfig::data_bits() const {
	return data_bits_;
}

QString SerialConfig::stop_bits() const {
	return stop_bits_;
}

QString SerialConfig::parity() const {
	return parity_;
}

SerialConfig::~SerialConfig()
= default;