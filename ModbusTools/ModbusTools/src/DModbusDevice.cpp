#include "DModbusDevice.h"
#include <QDebug>
#include <QEventLoop>
#include <QModbusRtuSerialMaster>
#include <QModbusTcpClient>
#include <QSerialPort>
#include <QThread>
QMutex DModbusDevice::mutex_;
DModbusDevice::DModbusDevice(QObject* parent)
	: QObject(parent)
	, port_("")
	, baudRate_(QSerialPort::Baud9600)
	, dataBits_(QSerialPort::Data8)
	, parity_(QSerialPort::EvenParity)
	, stopBits_(QSerialPort::OneStop)
	, timeout_(1500)
	, address_(0)
	, client_(Q_NULLPTR)
	, connectType_(Serial)
	, ip_("127.0.0.1")
	, tcp_port_(8080)
{
	QObject::connect(this, SIGNAL(connectSignal(bool&)), this, SLOT(connectSlot(bool&)), Qt::BlockingQueuedConnection);
	QObject::connect(this, SIGNAL(disconnectSignal()), this, SLOT(disconnectSlot()), Qt::BlockingQueuedConnection);

	QObject::connect(this, SIGNAL(readSignal(quint16, quint16&, QModbusDevice::Error&)), this, SLOT(readSlot(quint16, quint16&, QModbusDevice::Error&)), Qt::BlockingQueuedConnection);
	QObject::connect(this, SIGNAL(readSignal(quint16, quint16, QVector<quint16>&, QModbusDevice::Error&)), this, SLOT(readSlot(quint16, quint16, QVector<quint16>&, QModbusDevice::Error&)), Qt::BlockingQueuedConnection);
	QObject::connect(this, SIGNAL(read2Signal(quint16, quint16, QVector<bool>&, QModbusDevice::Error&)), this, SLOT(read2Slot(quint16, quint16, QVector<bool>&, QModbusDevice::Error&)), Qt::BlockingQueuedConnection);
	QObject::connect(this, SIGNAL(read3Signal(quint16, quint16, QVector<bool>&, QModbusDevice::Error&)), this, SLOT(read3Slot(quint16, quint16, QVector<bool>&, QModbusDevice::Error&)), Qt::BlockingQueuedConnection);
	QObject::connect(this, SIGNAL(readSignal(QModbusDataUnit::RegisterType, quint16, quint16, QVector<quint16>&, QModbusDevice::Error&)), this, SLOT(readSlot(QModbusDataUnit::RegisterType, quint16, quint16, QVector<quint16>&, QModbusDevice::Error&)), Qt::BlockingQueuedConnection);
	QObject::connect(this, SIGNAL(read4Signal(quint16, quint16, QVector<quint16>&, QModbusDevice::Error&)), this, SLOT(read4Slot(quint16, quint16, QVector<quint16>&, QModbusDevice::Error&)), Qt::BlockingQueuedConnection);

	QObject::connect(this, SIGNAL(write2Signal(quint16, bool, QModbusDevice::Error&)), this, SLOT(write2Slot(quint16, bool, QModbusDevice::Error&)), Qt::BlockingQueuedConnection);
	QObject::connect(this, SIGNAL(writeSignal(quint16, quint16, QModbusDevice::Error&)), this, SLOT(writeSlot(quint16, quint16, QModbusDevice::Error&)), Qt::BlockingQueuedConnection);
	QObject::connect(this, SIGNAL(writeSignal(quint16, quint16, const QVector<quint16>&, QModbusDevice::Error&)), this, SLOT(writeSlot(quint16, quint16, const QVector<quint16>&, QModbusDevice::Error&)), Qt::BlockingQueuedConnection);
	QObject::connect(this, SIGNAL(writeSignal(QModbusDataUnit::RegisterType, quint16, quint16, const QVector<quint16>&, QModbusDevice::Error&)), this, SLOT(writeSlot(QModbusDataUnit::RegisterType, quint16, quint16, const QVector<quint16>&, QModbusDevice::Error&)), Qt::BlockingQueuedConnection);
}

void DModbusDevice::connectSlot(bool& result)
{


	if(connectType_ == Serial) {
		client_ = new QModbusRtuSerialMaster(/*this*/);
		if (state() == QModbusDevice::ConnectedState) {
			result = true;
			return;
		}
		client_->setConnectionParameter(QModbusDevice::SerialPortNameParameter, port_);
		client_->setConnectionParameter(QModbusDevice::SerialParityParameter, parity_);
		client_->setConnectionParameter(QModbusDevice::SerialBaudRateParameter, baudRate_);
		client_->setConnectionParameter(QModbusDevice::SerialDataBitsParameter, dataBits_);
		client_->setConnectionParameter(QModbusDevice::SerialStopBitsParameter, stopBits_);
	}
	else if(connectType_ == Tcp) {
		client_ = new QModbusTcpClient();
		if (state() == QModbusDevice::ConnectedState) {
			result = true;
			return;
		}
		client_->setConnectionParameter(QModbusDevice::NetworkAddressParameter, ip_);
		client_->setConnectionParameter(QModbusDevice::NetworkPortParameter, tcp_port_);
	}
	
	client_->setTimeout(timeout_);
	client_->setNumberOfRetries(2);

	result = client_->connectDevice();
}



void DModbusDevice::disconnectSlot()
{
	if (state() == QModbusDevice::UnconnectedState) {
		return;
	}
	client_->disconnectDevice();
	delete client_;
	client_ = Q_NULLPTR;
}

QModbusDevice::State DModbusDevice::state() const
{
	return client_->state();
}



void DModbusDevice::readSlot(quint16 start_address, quint16& value, QModbusDevice::Error& error) const
{
	QVector<quint16> values;
	readSlot(start_address, 1, values, error);
	if (error == QModbusDevice::NoError) {
		value = values[0];
	}

	//return ret;
}

void DModbusDevice::readSlot(quint16 start_address, quint16 count, QVector<quint16>& values, QModbusDevice::Error& error) const
{
	readSlot(QModbusDataUnit::HoldingRegisters, start_address, count, values, error);
}

void DModbusDevice::read2Slot(quint16 start_address, quint16 count, QVector<bool>& values, QModbusDevice::Error& error) const
{
	QVector<quint16> tmp;
	readSlot(QModbusDataUnit::DiscreteInputs, start_address, count, tmp, error);
	if (error == QModbusDevice::NoError) {
		for (int i = 0; i < count; ++i) {
			values.append(tmp.value(i));
		}
	}
	//return ret;
}




void DModbusDevice::read3Slot(quint16 start_address, quint16 count, QVector<bool>& values, QModbusDevice::Error& error) const {
	QVector<quint16> tmp;
	readSlot(QModbusDataUnit::Coils, start_address, count, tmp, error);
	if (error == QModbusDevice::NoError) {
		for (int i = 0; i < count; ++i) {
			values.append(tmp.value(i) == 1);
		}
	}
}

void DModbusDevice::read4Slot(quint16 start_address, quint16 count, QVector<quint16>& values, QModbusDevice::Error& error) const {
	readSlot(QModbusDataUnit::HoldingRegisters, start_address, count, values, error);
}

void DModbusDevice::readSlot(QModbusDataUnit::RegisterType type
                             , quint16 start_address, quint16 count, QVector<quint16>& values, QModbusDevice::Error& error) const
{
	//qInfo() << "device read enter" << QThread::currentThread();
	//QMutexLocker locker(&mutex_);
	//qInfo() << "device read leave";
	if (!client_)
	{
		error = QModbusDevice::ConnectionError;
		return;
	}
	int index = 0;
	R:
	const QModbusDataUnit read_unit(type, start_address, count);
	if (QModbusReply* reply = client_->sendReadRequest(read_unit, address_)) {
		QTimer timer;
		QEventLoop event_loop;
		QObject::connect(reply, &QModbusReply::finished, &event_loop, &QEventLoop::quit);
		QObject::connect(&timer, &QTimer::timeout, [&]() {
			event_loop.quit();
			//qCritical() << "device read timeout.";
		});
		timer.start(5000);
		event_loop.exec();
		timer.stop();
		//qInfo() << client_->error() << client_->errorString();

		if (!reply->isFinished()) {
			if(index < 3) {
				index++;
				QThread::msleep(500);
				goto R;
			}
			qCritical() << "device read timeout.";
			error = QModbusDevice::ConnectionError;
			return;
		}
		

		const auto error_code = reply->error();
		const auto error_string = reply->errorString();
		//qDebug() << error_code << error_string;

		if (error_code == QModbusDevice::NoError) {
			values.clear();
			const QModbusDataUnit unit = reply->result();
			//const auto data = reply->rawResult().data();
			for (uint i = 0; i < unit.valueCount(); i++) {
				values.append(unit.value(i));
			}
		}

		reply->deleteLater();
		error = error_code;
		return;
	}

	error = QModbusDevice::ConnectionError;
}


void DModbusDevice::write2Slot(quint16 start_address, bool on, QModbusDevice::Error& error)
{
	QVector<quint16> values;
	values << (on ? 1 : 0);
	qDebug() << "device " << start_address << " write" << on;
	writeSlot(QModbusDataUnit::Coils, start_address, 1, values, error);
}


void DModbusDevice::writeSlot(quint16 start_address, quint16 value, QModbusDevice::Error& error) const
{
	QVector<quint16> values;
	values << value;

	writeSlot(start_address, 1, values, error);
}

void DModbusDevice::writeSlot(quint16 start_address, quint16 count, const QVector<quint16>& values, QModbusDevice::Error& error) const
{
	return writeSlot(QModbusDataUnit::HoldingRegisters, start_address, count, values, error);
}


void DModbusDevice::writeSlot(QModbusDataUnit::RegisterType type
	, quint16 start_address, quint16 count, const QVector<quint16>& values, QModbusDevice::Error& error) const
{

	//qInfo() << "device write enter" << QThread::currentThread();
	//QMutexLocker locker(&mutex_);
	//qInfo() << "device write leave";
	if (!client_)
	{
		error = QModbusDevice::ConnectionError;
		return;
	}

	QModbusDataUnit write_unit(type, start_address, count);
	for (quint32 i = 0; i < write_unit.valueCount(); i++) {
		write_unit.setValue(i, values.value(i));
	}
	int index = 0;
	R:
	if (QModbusReply* reply = client_->sendWriteRequest(write_unit, address_)) {

		QTimer timer;
		QEventLoop event_loop;
		QObject::connect(reply, &QModbusReply::finished, &event_loop, &QEventLoop::quit);
		QObject::connect(&timer, &QTimer::timeout, [&]() {
			event_loop.quit();
		});
		timer.start(3000);
		event_loop.exec();
		timer.stop();

		qDebug() << "device write " << type << start_address << count << reply->isFinished() << reply->error();

		if (!reply->isFinished()) {
			if(index < 3) {
				index++;
				QThread::msleep(500);
				goto R;
			}
			qCritical() << "device write timeout.";
			error = QModbusDevice::ConnectionError;
			return;
		}

		const auto error_code = reply->error();
		const auto error_string = reply->errorString();
		qDebug() << error_code << error_string;

		if(error_code == QModbusDevice::NoError) {
			const QModbusDataUnit data = reply->result();
			qDebug() << u8"消息数据个数：" << data.valueCount() << " :" << data.values();
		}

		reply->deleteLater();
		error = error_code;
		return;
	}

	error = QModbusDevice::ConnectionError;
}


QModbusDevice::Error DModbusDevice::ping()
{
	return QModbusDevice::NoError;
}

QModbusClient* DModbusDevice::baseDevice() const
{
	return client_;
}

void DModbusDevice::setConnectType(const ConnectType type) {
	connectType_ = type;
}

ConnectType DModbusDevice::connectType() const {
	return connectType_;
}

void DModbusDevice::setIp(const QString& ip) {
	ip_ = ip;
}

QString DModbusDevice::ip() const {
	return ip_;
}

void DModbusDevice::setTcpPort(const qint32 port) {
	tcp_port_ = port;
}

qint32 DModbusDevice::tcpPort() const {
	return tcp_port_;
}


void DModbusDevice::setPort(const QString& port)
{
	port_ = port;
}

QString DModbusDevice::port() const
{
	return port_;
}

void DModbusDevice::setBaudRate(qint32 baudRate)
{
	baudRate_ = baudRate;
}

qint32 DModbusDevice::baudRate() const
{
	return baudRate_;
}

void DModbusDevice::setDataBits(QSerialPort::DataBits dataBits)
{
	dataBits_ = dataBits;
}

QSerialPort::DataBits DModbusDevice::dataBits() const
{
	return dataBits_;
}

void DModbusDevice::setParity(QSerialPort::Parity parity)
{
	parity_ = parity;
}

QSerialPort::Parity DModbusDevice::parity() const
{
	return parity_;
}

void DModbusDevice::setStopBits(QSerialPort::StopBits stopBits)
{
	stopBits_ = stopBits;
}

QSerialPort::StopBits DModbusDevice::stopBits() const
{
	return stopBits_;
}

void DModbusDevice::setTimeout(qint32 timeout)
{
	timeout_ = timeout;
}

qint32 DModbusDevice::timeout() const
{
	return timeout_;
}

void DModbusDevice::setAddress(quint8 address)
{
	address_ = address;
}
quint8 DModbusDevice::address() const
{
	return address_;
}

QModbusDevice::Error DModbusDevice::error()
{
	return baseDevice()->error();
}

QString DModbusDevice::errorString()
{
	return baseDevice()->errorString();
}

bool DModbusDevice::connect()  {
	bool result;
	if (this->thread() == QThread::currentThread()) {
		connectSlot(result);
	}
	else {
		emit connectSignal(result);
	}
	return result;
}

void DModbusDevice::disconnect()  {

	if (this->thread() == QThread::currentThread()) {
		disconnectSlot();
	}
	else {
		emit disconnectSignal();
	}
}

QModbusDevice::Error DModbusDevice::read(quint16 start_address, quint16& value) const {
	QModbusDevice::Error error;
	if (this->thread() == QThread::currentThread()) {
		readSlot(start_address, value, error);
	}
	else {
		emit readSignal(start_address, value, error);
	}
	return error;
}

QModbusDevice::Error DModbusDevice::read(quint16 start_address, quint16 count, QVector<quint16>& values) const {
	QModbusDevice::Error error;
	if (this->thread() == QThread::currentThread()) {
		readSlot(start_address, count, values, error);
	}
	else {
		emit readSignal(start_address, count, values, error);
	}
	return error;
}

QModbusDevice::Error DModbusDevice::read2(quint16 start_address, quint16 count, QVector<bool>& values) const {
	QModbusDevice::Error error;
	if (this->thread() == QThread::currentThread()) {
		read2Slot(start_address, count, values, error);
	}
	else {
		emit read2Signal(start_address, count, values, error);
	}
	return error;
}

QModbusDevice::Error DModbusDevice::read3(quint16 start_address, quint16 count, QVector<bool>& values) const {
	QModbusDevice::Error error;
	if (this->thread() == QThread::currentThread()) {
		read3Slot(start_address, count, values, error);
	}
	else {
		emit read3Signal(start_address, count, values, error);
	}
	return error;

}

QModbusDevice::Error DModbusDevice::read4(quint16 start_address, quint16 count, QVector<quint16>& values) const {
	QModbusDevice::Error error;
	if (this->thread() == QThread::currentThread()) {
		read4Slot(start_address, count, values, error);
	}
	else {
		emit read4Signal(start_address, count, values, error);
	}
	return error;
}


QModbusDevice::Error DModbusDevice::read(QModbusDataUnit::RegisterType type, quint16 start_address, quint16 count, QVector<quint16>& values) const {
	QModbusDevice::Error error;
	if (this->thread() == QThread::currentThread()) {
		readSlot(type, start_address, count, values, error);
	}
	else {
		emit readSignal(type, start_address, count, values, error);
	}
	return error;
}

QModbusDevice::Error DModbusDevice::write2(quint16  start_address, bool op) {
	QModbusDevice::Error error;
	if (this->thread() == QThread::currentThread()) {
		write2Slot(start_address, op, error);
	}
	else {
		emit write2Signal(start_address, op, error);
	}
	return error;
}

QModbusDevice::Error DModbusDevice::write(quint16 start_address, quint16 value) const {
	QModbusDevice::Error error;
	if (this->thread() == QThread::currentThread()) {
		writeSlot(start_address, value, error);
	}
	else {
		emit writeSignal(start_address, value, error);
	}
	return error;
}

QModbusDevice::Error DModbusDevice::write(quint16 start_address, quint16 count, const QVector<quint16>& values) const {
	QModbusDevice::Error error;
	if (this->thread() == QThread::currentThread()) {
		writeSlot(start_address,count, values, error);
	}
	else {
		emit writeSignal(start_address, count,  values, error);
	}
	return error;
}

QModbusDevice::Error DModbusDevice::write(QModbusDataUnit::RegisterType type, quint16 start_address, quint16 count,
	const QVector<quint16>& values) const {
	QModbusDevice::Error error;
	if (this->thread() == QThread::currentThread()) {
		writeSlot(type, start_address, count, values, error);
	}
	else {
		emit writeSignal(type, start_address, count, values, error);
	}
	return error;
}

DModbusDevice::~DModbusDevice()
{
	delete client_;
}

