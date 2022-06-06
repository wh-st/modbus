#include "TcpConfig.h"

TcpConfig::TcpConfig(QObject *parent)
	: QObject(parent)
{
}


QString TcpConfig::Ip() const {
	return ip_;
}

QString TcpConfig::Port() const {
	return port_;
}

TcpConfig::~TcpConfig()
{
}