/****************************************************************************
** Meta object code from reading C++ file 'RFIDChannelMan.h'
**
** Created: Mon Sep 23 19:50:44 2019
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../QRFID/ChannelMan/RFIDChannelMan.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'RFIDChannelMan.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_RFIDChannelMan[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      16,   15,   15,   15, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_RFIDChannelMan[] = {
    "RFIDChannelMan\0\0onTimeout()\0"
};

const QMetaObject RFIDChannelMan::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_RFIDChannelMan,
      qt_meta_data_RFIDChannelMan, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &RFIDChannelMan::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *RFIDChannelMan::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *RFIDChannelMan::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_RFIDChannelMan))
        return static_cast<void*>(const_cast< RFIDChannelMan*>(this));
    return QObject::qt_metacast(_clname);
}

int RFIDChannelMan::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: onTimeout(); break;
        default: ;
        }
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
