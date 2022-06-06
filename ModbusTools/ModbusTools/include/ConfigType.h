#pragma once

#include <QObject>
#include "../global.h"
class ConfigType : public QObject
{
	Q_OBJECT

public:
	ConfigType(QObject *parent = Q_NULLPTR);
	~ConfigType();

private:
	ConnectType connectType_;

public:
	ConnectType ConnectType();
	friend class Option;
	friend class OptionWidget;
};
