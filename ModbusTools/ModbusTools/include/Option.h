#pragma once

#include <QObject>

#include "SerialConfig.h"
#include "TcpConfig.h"
#include <qsettings.h>

#include "ConfigType.h"

class Option : public QObject
{
	Q_OBJECT

public:
	Option(QObject *parent = Q_NULLPTR);
	~Option();

public:
	static void initialize();
	static void sync();
	static void save();

	static SerialConfig* serial_config();
	static TcpConfig* tcp_config();
	static ConfigType* config_type();
private:
	static SerialConfig serial_config_;
	static TcpConfig tcp_config_;
	static ConfigType config_type_;
private:
	static QSettings* config;

	static const QString PARAM_FILENAME;

	static const QString COM_PORT;
	static const QString BAUD_RATE;
	static const QString DATA_BITS;
	static const QString PARITY;
	static const QString STOP_BITS;


	static const QString IP;
	static const QString Port;

	static const QString Type;

};
