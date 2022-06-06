#pragma once

#include <QObject>

class TcpConfig : public QObject
{
	Q_OBJECT

public:
	TcpConfig(QObject *parent = Q_NULLPTR);
	~TcpConfig();

private:
	QString ip_;
	QString port_;

public:
	QString Ip() const;
	QString Port() const;

	friend class Option;
	friend class OptionWidget;
};
