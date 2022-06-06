#pragma once

#include <qabstractitemmodel.h>
#include <QObject>
#include <QBitArray>

class WriteRegisterModel : public QAbstractTableModel
{
	Q_OBJECT

public:
	WriteRegisterModel(QObject *parent = Q_NULLPTR);
	~WriteRegisterModel();
    int rowCount(const QModelIndex& parent = QModelIndex()) const Q_DECL_OVERRIDE;
    int columnCount(const QModelIndex& parent = QModelIndex()) const Q_DECL_OVERRIDE;

    QVariant data(const QModelIndex& index, int role = Qt::DisplayRole) const Q_DECL_OVERRIDE;
    QVariant headerData(int section, Qt::Orientation orientation, int role) const Q_DECL_OVERRIDE;
    bool setData(const QModelIndex& index, const QVariant& value, int role) Q_DECL_OVERRIDE;

    Qt::ItemFlags flags(const QModelIndex& index) const Q_DECL_OVERRIDE;

public slots:
    void setStartAddress(int address);
    void setNumberOfValues(const QString& number);

signals:
    void updateViewport();

public:
    int m_number;
    int m_address;
    QBitArray m_coils;
    QVector<quint16> m_holdingRegisters;
};
