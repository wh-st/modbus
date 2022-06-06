#pragma once
#include <QModbusDataUnit>
#include <QModbusDevice>
#include <QMutex>
#include <QObject>
#include <QSerialPort>
#include <QTimer>
#include "global.h"
class QModbusClient;
class DModbusDevice: public QObject
{
	Q_OBJECT

	signals:
		void connectSignal(bool&);
		void disconnectSignal();

		void readSignal(quint16, quint16&, QModbusDevice::Error&) const;
		void readSignal(quint16, quint16, QVector<quint16>&, QModbusDevice::Error&) const;
		void read2Signal(quint16, quint16, QVector<bool>&, QModbusDevice::Error&) const;
		void read3Signal(quint16, quint16, QVector<bool>&, QModbusDevice::Error&) const;
		void read4Signal(quint16, quint16, QVector<quint16>&, QModbusDevice::Error&) const;
		void readSignal(QModbusDataUnit::RegisterType, quint16, quint16, QVector<quint16>&, QModbusDevice::Error&) const;

		void write2Signal(quint16, bool, QModbusDevice::Error&);
		void writeSignal(quint16, quint16, QModbusDevice::Error&) const;
		void writeSignal(quint16, quint16, const QVector<quint16>&, QModbusDevice::Error&) const;
		void writeSignal(QModbusDataUnit::RegisterType, quint16, quint16, const QVector<quint16>&, QModbusDevice::Error&) const;


public:
	DModbusDevice(QObject* parent = Q_NULLPTR);
	~DModbusDevice();

	void setConnectType(const ConnectType type);
	ConnectType connectType() const;

	void setIp(const QString& ip);
	QString ip() const;

	void setTcpPort(const qint32 port);
	qint32 tcpPort() const;

	void setPort(const QString& port);
	QString port() const;

	void setBaudRate(qint32 baudRate);
	qint32 baudRate() const;

	void setDataBits(QSerialPort::DataBits dataBits);
	QSerialPort::DataBits dataBits() const;

	void setParity(QSerialPort::Parity parity);
	QSerialPort::Parity parity() const;

	void setStopBits(QSerialPort::StopBits stopBits);
	QSerialPort::StopBits stopBits() const;

	void setTimeout(qint32 timeout);
	qint32 timeout() const;

	void setAddress(quint8);
	quint8 address() const;

	QModbusDevice::Error error();
	QString errorString();

	bool connect();
	void disconnect();

	QModbusDevice::Error read(quint16, quint16&) const;
	QModbusDevice::Error read(quint16, quint16, QVector<quint16>&) const;
	QModbusDevice::Error read2(quint16, quint16, QVector<bool>&) const;
	QModbusDevice::Error read3(quint16, quint16, QVector<bool>&) const;
	QModbusDevice::Error read4(quint16, quint16, QVector<quint16>&) const;
	QModbusDevice::Error read(QModbusDataUnit::RegisterType, quint16, quint16, QVector<quint16>&) const;

	QModbusDevice::Error write2(quint16, bool);
	QModbusDevice::Error write(quint16, quint16) const;
	QModbusDevice::Error write(quint16, quint16, const QVector<quint16>&) const;
	QModbusDevice::Error write(QModbusDataUnit::RegisterType, quint16, quint16, const QVector<quint16>&) const;

public slots:
	//
	void connectSlot(bool&);
	void disconnectSlot();

	void readSlot(quint16, quint16&, QModbusDevice::Error&) const;
	void readSlot(quint16, quint16, QVector<quint16>&, QModbusDevice::Error&) const;
	void read2Slot(quint16, quint16, QVector<bool>&, QModbusDevice::Error&) const;
	void read3Slot(quint16, quint16, QVector<bool>&, QModbusDevice::Error&) const;
	void read4Slot(quint16, quint16, QVector<quint16>&, QModbusDevice::Error&) const;
	void readSlot(QModbusDataUnit::RegisterType, quint16, quint16, QVector<quint16>&, QModbusDevice::Error&) const;

	void write2Slot(quint16, bool, QModbusDevice::Error&);
	void writeSlot(quint16, quint16, QModbusDevice::Error&) const;
	void writeSlot(quint16, quint16, const QVector<quint16>&, QModbusDevice::Error&) const;
	void writeSlot(QModbusDataUnit::RegisterType, quint16, quint16, const QVector<quint16>&, QModbusDevice::Error&) const;
	QModbusDevice::State state() const;
	QModbusDevice::Error ping();
	QModbusClient* baseDevice() const;

private:
	static QMutex mutex_;
	ConnectType connectType_;
	QString port_;
	qint32 baudRate_;
	QSerialPort::DataBits dataBits_;
	QSerialPort::Parity parity_;
	QSerialPort::StopBits stopBits_;
	qint32 timeout_;

	QString ip_;
	qint32 tcp_port_;

	quint8 address_;
	QModbusClient* client_;
};
