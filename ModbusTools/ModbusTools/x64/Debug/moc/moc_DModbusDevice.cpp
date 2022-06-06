/****************************************************************************
** Meta object code from reading C++ file 'DModbusDevice.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../include/DModbusDevice.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DModbusDevice.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DModbusDevice_t {
    QByteArrayData data[31];
    char stringdata0[401];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DModbusDevice_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DModbusDevice_t qt_meta_stringdata_DModbusDevice = {
    {
QT_MOC_LITERAL(0, 0, 13), // "DModbusDevice"
QT_MOC_LITERAL(1, 14, 13), // "connectSignal"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 5), // "bool&"
QT_MOC_LITERAL(4, 35, 16), // "disconnectSignal"
QT_MOC_LITERAL(5, 52, 10), // "readSignal"
QT_MOC_LITERAL(6, 63, 8), // "quint16&"
QT_MOC_LITERAL(7, 72, 21), // "QModbusDevice::Error&"
QT_MOC_LITERAL(8, 94, 17), // "QVector<quint16>&"
QT_MOC_LITERAL(9, 112, 11), // "read2Signal"
QT_MOC_LITERAL(10, 124, 14), // "QVector<bool>&"
QT_MOC_LITERAL(11, 139, 11), // "read3Signal"
QT_MOC_LITERAL(12, 151, 11), // "read4Signal"
QT_MOC_LITERAL(13, 163, 29), // "QModbusDataUnit::RegisterType"
QT_MOC_LITERAL(14, 193, 12), // "write2Signal"
QT_MOC_LITERAL(15, 206, 11), // "writeSignal"
QT_MOC_LITERAL(16, 218, 16), // "QVector<quint16>"
QT_MOC_LITERAL(17, 235, 11), // "connectSlot"
QT_MOC_LITERAL(18, 247, 14), // "disconnectSlot"
QT_MOC_LITERAL(19, 262, 8), // "readSlot"
QT_MOC_LITERAL(20, 271, 9), // "read2Slot"
QT_MOC_LITERAL(21, 281, 9), // "read3Slot"
QT_MOC_LITERAL(22, 291, 9), // "read4Slot"
QT_MOC_LITERAL(23, 301, 10), // "write2Slot"
QT_MOC_LITERAL(24, 312, 9), // "writeSlot"
QT_MOC_LITERAL(25, 322, 5), // "state"
QT_MOC_LITERAL(26, 328, 20), // "QModbusDevice::State"
QT_MOC_LITERAL(27, 349, 4), // "ping"
QT_MOC_LITERAL(28, 354, 20), // "QModbusDevice::Error"
QT_MOC_LITERAL(29, 375, 10), // "baseDevice"
QT_MOC_LITERAL(30, 386, 14) // "QModbusClient*"

    },
    "DModbusDevice\0connectSignal\0\0bool&\0"
    "disconnectSignal\0readSignal\0quint16&\0"
    "QModbusDevice::Error&\0QVector<quint16>&\0"
    "read2Signal\0QVector<bool>&\0read3Signal\0"
    "read4Signal\0QModbusDataUnit::RegisterType\0"
    "write2Signal\0writeSignal\0QVector<quint16>\0"
    "connectSlot\0disconnectSlot\0readSlot\0"
    "read2Slot\0read3Slot\0read4Slot\0write2Slot\0"
    "writeSlot\0state\0QModbusDevice::State\0"
    "ping\0QModbusDevice::Error\0baseDevice\0"
    "QModbusClient*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DModbusDevice[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      27,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      12,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  149,    2, 0x06 /* Public */,
       4,    0,  152,    2, 0x06 /* Public */,
       5,    3,  153,    2, 0x06 /* Public */,
       5,    4,  160,    2, 0x06 /* Public */,
       9,    4,  169,    2, 0x06 /* Public */,
      11,    4,  178,    2, 0x06 /* Public */,
      12,    4,  187,    2, 0x06 /* Public */,
       5,    5,  196,    2, 0x06 /* Public */,
      14,    3,  207,    2, 0x06 /* Public */,
      15,    3,  214,    2, 0x06 /* Public */,
      15,    4,  221,    2, 0x06 /* Public */,
      15,    5,  230,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      17,    1,  241,    2, 0x0a /* Public */,
      18,    0,  244,    2, 0x0a /* Public */,
      19,    3,  245,    2, 0x0a /* Public */,
      19,    4,  252,    2, 0x0a /* Public */,
      20,    4,  261,    2, 0x0a /* Public */,
      21,    4,  270,    2, 0x0a /* Public */,
      22,    4,  279,    2, 0x0a /* Public */,
      19,    5,  288,    2, 0x0a /* Public */,
      23,    3,  299,    2, 0x0a /* Public */,
      24,    3,  306,    2, 0x0a /* Public */,
      24,    4,  313,    2, 0x0a /* Public */,
      24,    5,  322,    2, 0x0a /* Public */,
      25,    0,  333,    2, 0x0a /* Public */,
      27,    0,  334,    2, 0x0a /* Public */,
      29,    0,  335,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UShort, 0x80000000 | 6, 0x80000000 | 7,    2,    2,    2,
    QMetaType::Void, QMetaType::UShort, QMetaType::UShort, 0x80000000 | 8, 0x80000000 | 7,    2,    2,    2,    2,
    QMetaType::Void, QMetaType::UShort, QMetaType::UShort, 0x80000000 | 10, 0x80000000 | 7,    2,    2,    2,    2,
    QMetaType::Void, QMetaType::UShort, QMetaType::UShort, 0x80000000 | 10, 0x80000000 | 7,    2,    2,    2,    2,
    QMetaType::Void, QMetaType::UShort, QMetaType::UShort, 0x80000000 | 8, 0x80000000 | 7,    2,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 13, QMetaType::UShort, QMetaType::UShort, 0x80000000 | 8, 0x80000000 | 7,    2,    2,    2,    2,    2,
    QMetaType::Void, QMetaType::UShort, QMetaType::Bool, 0x80000000 | 7,    2,    2,    2,
    QMetaType::Void, QMetaType::UShort, QMetaType::UShort, 0x80000000 | 7,    2,    2,    2,
    QMetaType::Void, QMetaType::UShort, QMetaType::UShort, 0x80000000 | 16, 0x80000000 | 7,    2,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 13, QMetaType::UShort, QMetaType::UShort, 0x80000000 | 16, 0x80000000 | 7,    2,    2,    2,    2,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UShort, 0x80000000 | 6, 0x80000000 | 7,    2,    2,    2,
    QMetaType::Void, QMetaType::UShort, QMetaType::UShort, 0x80000000 | 8, 0x80000000 | 7,    2,    2,    2,    2,
    QMetaType::Void, QMetaType::UShort, QMetaType::UShort, 0x80000000 | 10, 0x80000000 | 7,    2,    2,    2,    2,
    QMetaType::Void, QMetaType::UShort, QMetaType::UShort, 0x80000000 | 10, 0x80000000 | 7,    2,    2,    2,    2,
    QMetaType::Void, QMetaType::UShort, QMetaType::UShort, 0x80000000 | 8, 0x80000000 | 7,    2,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 13, QMetaType::UShort, QMetaType::UShort, 0x80000000 | 8, 0x80000000 | 7,    2,    2,    2,    2,    2,
    QMetaType::Void, QMetaType::UShort, QMetaType::Bool, 0x80000000 | 7,    2,    2,    2,
    QMetaType::Void, QMetaType::UShort, QMetaType::UShort, 0x80000000 | 7,    2,    2,    2,
    QMetaType::Void, QMetaType::UShort, QMetaType::UShort, 0x80000000 | 16, 0x80000000 | 7,    2,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 13, QMetaType::UShort, QMetaType::UShort, 0x80000000 | 16, 0x80000000 | 7,    2,    2,    2,    2,    2,
    0x80000000 | 26,
    0x80000000 | 28,
    0x80000000 | 30,

       0        // eod
};

void DModbusDevice::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DModbusDevice *_t = static_cast<DModbusDevice *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->connectSignal((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->disconnectSignal(); break;
        case 2: _t->readSignal((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2])),(*reinterpret_cast< QModbusDevice::Error(*)>(_a[3]))); break;
        case 3: _t->readSignal((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2])),(*reinterpret_cast< QVector<quint16>(*)>(_a[3])),(*reinterpret_cast< QModbusDevice::Error(*)>(_a[4]))); break;
        case 4: _t->read2Signal((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2])),(*reinterpret_cast< QVector<bool>(*)>(_a[3])),(*reinterpret_cast< QModbusDevice::Error(*)>(_a[4]))); break;
        case 5: _t->read3Signal((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2])),(*reinterpret_cast< QVector<bool>(*)>(_a[3])),(*reinterpret_cast< QModbusDevice::Error(*)>(_a[4]))); break;
        case 6: _t->read4Signal((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2])),(*reinterpret_cast< QVector<quint16>(*)>(_a[3])),(*reinterpret_cast< QModbusDevice::Error(*)>(_a[4]))); break;
        case 7: _t->readSignal((*reinterpret_cast< QModbusDataUnit::RegisterType(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2])),(*reinterpret_cast< quint16(*)>(_a[3])),(*reinterpret_cast< QVector<quint16>(*)>(_a[4])),(*reinterpret_cast< QModbusDevice::Error(*)>(_a[5]))); break;
        case 8: _t->write2Signal((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< QModbusDevice::Error(*)>(_a[3]))); break;
        case 9: _t->writeSignal((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2])),(*reinterpret_cast< QModbusDevice::Error(*)>(_a[3]))); break;
        case 10: _t->writeSignal((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2])),(*reinterpret_cast< const QVector<quint16>(*)>(_a[3])),(*reinterpret_cast< QModbusDevice::Error(*)>(_a[4]))); break;
        case 11: _t->writeSignal((*reinterpret_cast< QModbusDataUnit::RegisterType(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2])),(*reinterpret_cast< quint16(*)>(_a[3])),(*reinterpret_cast< const QVector<quint16>(*)>(_a[4])),(*reinterpret_cast< QModbusDevice::Error(*)>(_a[5]))); break;
        case 12: _t->connectSlot((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->disconnectSlot(); break;
        case 14: _t->readSlot((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2])),(*reinterpret_cast< QModbusDevice::Error(*)>(_a[3]))); break;
        case 15: _t->readSlot((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2])),(*reinterpret_cast< QVector<quint16>(*)>(_a[3])),(*reinterpret_cast< QModbusDevice::Error(*)>(_a[4]))); break;
        case 16: _t->read2Slot((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2])),(*reinterpret_cast< QVector<bool>(*)>(_a[3])),(*reinterpret_cast< QModbusDevice::Error(*)>(_a[4]))); break;
        case 17: _t->read3Slot((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2])),(*reinterpret_cast< QVector<bool>(*)>(_a[3])),(*reinterpret_cast< QModbusDevice::Error(*)>(_a[4]))); break;
        case 18: _t->read4Slot((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2])),(*reinterpret_cast< QVector<quint16>(*)>(_a[3])),(*reinterpret_cast< QModbusDevice::Error(*)>(_a[4]))); break;
        case 19: _t->readSlot((*reinterpret_cast< QModbusDataUnit::RegisterType(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2])),(*reinterpret_cast< quint16(*)>(_a[3])),(*reinterpret_cast< QVector<quint16>(*)>(_a[4])),(*reinterpret_cast< QModbusDevice::Error(*)>(_a[5]))); break;
        case 20: _t->write2Slot((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< QModbusDevice::Error(*)>(_a[3]))); break;
        case 21: _t->writeSlot((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2])),(*reinterpret_cast< QModbusDevice::Error(*)>(_a[3]))); break;
        case 22: _t->writeSlot((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2])),(*reinterpret_cast< const QVector<quint16>(*)>(_a[3])),(*reinterpret_cast< QModbusDevice::Error(*)>(_a[4]))); break;
        case 23: _t->writeSlot((*reinterpret_cast< QModbusDataUnit::RegisterType(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2])),(*reinterpret_cast< quint16(*)>(_a[3])),(*reinterpret_cast< const QVector<quint16>(*)>(_a[4])),(*reinterpret_cast< QModbusDevice::Error(*)>(_a[5]))); break;
        case 24: { QModbusDevice::State _r = _t->state();
            if (_a[0]) *reinterpret_cast< QModbusDevice::State*>(_a[0]) = std::move(_r); }  break;
        case 25: { QModbusDevice::Error _r = _t->ping();
            if (_a[0]) *reinterpret_cast< QModbusDevice::Error*>(_a[0]) = std::move(_r); }  break;
        case 26: { QModbusClient* _r = _t->baseDevice();
            if (_a[0]) *reinterpret_cast< QModbusClient**>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QModbusDataUnit::RegisterType >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<quint16> >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QModbusDataUnit::RegisterType >(); break;
            case 3:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<quint16> >(); break;
            }
            break;
        case 19:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QModbusDataUnit::RegisterType >(); break;
            }
            break;
        case 22:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<quint16> >(); break;
            }
            break;
        case 23:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QModbusDataUnit::RegisterType >(); break;
            case 3:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<quint16> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (DModbusDevice::*_t)(bool & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DModbusDevice::connectSignal)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (DModbusDevice::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DModbusDevice::disconnectSignal)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (DModbusDevice::*_t)(quint16 , quint16 & , QModbusDevice::Error & ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DModbusDevice::readSignal)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (DModbusDevice::*_t)(quint16 , quint16 , QVector<quint16> & , QModbusDevice::Error & ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DModbusDevice::readSignal)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (DModbusDevice::*_t)(quint16 , quint16 , QVector<bool> & , QModbusDevice::Error & ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DModbusDevice::read2Signal)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (DModbusDevice::*_t)(quint16 , quint16 , QVector<bool> & , QModbusDevice::Error & ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DModbusDevice::read3Signal)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (DModbusDevice::*_t)(quint16 , quint16 , QVector<quint16> & , QModbusDevice::Error & ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DModbusDevice::read4Signal)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (DModbusDevice::*_t)(QModbusDataUnit::RegisterType , quint16 , quint16 , QVector<quint16> & , QModbusDevice::Error & ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DModbusDevice::readSignal)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (DModbusDevice::*_t)(quint16 , bool , QModbusDevice::Error & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DModbusDevice::write2Signal)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (DModbusDevice::*_t)(quint16 , quint16 , QModbusDevice::Error & ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DModbusDevice::writeSignal)) {
                *result = 9;
                return;
            }
        }
        {
            typedef void (DModbusDevice::*_t)(quint16 , quint16 , const QVector<quint16> & , QModbusDevice::Error & ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DModbusDevice::writeSignal)) {
                *result = 10;
                return;
            }
        }
        {
            typedef void (DModbusDevice::*_t)(QModbusDataUnit::RegisterType , quint16 , quint16 , const QVector<quint16> & , QModbusDevice::Error & ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DModbusDevice::writeSignal)) {
                *result = 11;
                return;
            }
        }
    }
}

const QMetaObject DModbusDevice::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_DModbusDevice.data,
      qt_meta_data_DModbusDevice,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *DModbusDevice::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DModbusDevice::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DModbusDevice.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int DModbusDevice::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 27)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 27;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 27)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 27;
    }
    return _id;
}

// SIGNAL 0
void DModbusDevice::connectSignal(bool & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DModbusDevice::disconnectSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void DModbusDevice::readSignal(quint16 _t1, quint16 & _t2, QModbusDevice::Error & _t3)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(const_cast< DModbusDevice *>(this), &staticMetaObject, 2, _a);
}

// SIGNAL 3
void DModbusDevice::readSignal(quint16 _t1, quint16 _t2, QVector<quint16> & _t3, QModbusDevice::Error & _t4)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(const_cast< DModbusDevice *>(this), &staticMetaObject, 3, _a);
}

// SIGNAL 4
void DModbusDevice::read2Signal(quint16 _t1, quint16 _t2, QVector<bool> & _t3, QModbusDevice::Error & _t4)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(const_cast< DModbusDevice *>(this), &staticMetaObject, 4, _a);
}

// SIGNAL 5
void DModbusDevice::read3Signal(quint16 _t1, quint16 _t2, QVector<bool> & _t3, QModbusDevice::Error & _t4)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(const_cast< DModbusDevice *>(this), &staticMetaObject, 5, _a);
}

// SIGNAL 6
void DModbusDevice::read4Signal(quint16 _t1, quint16 _t2, QVector<quint16> & _t3, QModbusDevice::Error & _t4)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(const_cast< DModbusDevice *>(this), &staticMetaObject, 6, _a);
}

// SIGNAL 7
void DModbusDevice::readSignal(QModbusDataUnit::RegisterType _t1, quint16 _t2, quint16 _t3, QVector<quint16> & _t4, QModbusDevice::Error & _t5)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(const_cast< DModbusDevice *>(this), &staticMetaObject, 7, _a);
}

// SIGNAL 8
void DModbusDevice::write2Signal(quint16 _t1, bool _t2, QModbusDevice::Error & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void DModbusDevice::writeSignal(quint16 _t1, quint16 _t2, QModbusDevice::Error & _t3)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(const_cast< DModbusDevice *>(this), &staticMetaObject, 9, _a);
}

// SIGNAL 10
void DModbusDevice::writeSignal(quint16 _t1, quint16 _t2, const QVector<quint16> & _t3, QModbusDevice::Error & _t4)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(const_cast< DModbusDevice *>(this), &staticMetaObject, 10, _a);
}

// SIGNAL 11
void DModbusDevice::writeSignal(QModbusDataUnit::RegisterType _t1, quint16 _t2, quint16 _t3, const QVector<quint16> & _t4, QModbusDevice::Error & _t5)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(const_cast< DModbusDevice *>(this), &staticMetaObject, 11, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
