#pragma once

#include <QObject>

class SerialConfig : public QObject
{
	Q_OBJECT

public:
	SerialConfig(QObject *parent = Q_NULLPTR);
	~SerialConfig();

public:
	QString port() const;
	QString baud_rate() const;
	QString data_bits() const;
	QString stop_bits() const;
	QString parity() const;
private:
	QString port_;
	QString baud_rate_;
	QString data_bits_;
	QString stop_bits_;
	QString parity_;

	friend class Option;
	friend class OptionWidget;
};
