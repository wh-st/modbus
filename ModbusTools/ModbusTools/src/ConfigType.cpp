#include "ConfigType.h"

ConfigType::ConfigType(QObject *parent)
	: QObject(parent)
{
}

ConnectType ConfigType::ConnectType() {
	return connectType_;
}

ConfigType::~ConfigType()
= default;
