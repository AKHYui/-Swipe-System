/****************************************************************************
** Meta object code from reading C++ file 'Homepage.h'
**
** Created: Sat Oct 19 15:37:53 2019
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "Homepage.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Homepage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Homepage[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      10,    9,    9,    9, 0x08,
      28,    9,    9,    9, 0x08,
      54,    9,    9,    9, 0x08,
      80,   65,    9,    9, 0x08,
     116,  109,    9,    9, 0x08,
     157,  146,    9,    9, 0x08,
     196,  186,    9,    9, 0x08,
     218,    9,    9,    9, 0x08,
     241,  228,    9,    9, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Homepage[] = {
    "Homepage\0\0on_ctrl_clicked()\0"
    "on_pushButton_2_clicked()\0showTime()\0"
    "cmdType,result\0on_search_error(int,QString)\0"
    "cardid\0on_search_success(QByteArray)\0"
    "block,data\0on_show_data(int,QByteArray)\0"
    "tip,valid\0showTip(QString,bool)\0"
    "hideTip()\0decID,byteID\0"
    "onNewCard(qlonglong,QByteArray)\0"
};

const QMetaObject Homepage::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Homepage,
      qt_meta_data_Homepage, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Homepage::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Homepage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Homepage::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Homepage))
        return static_cast<void*>(const_cast< Homepage*>(this));
    return QWidget::qt_metacast(_clname);
}

int Homepage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_ctrl_clicked(); break;
        case 1: on_pushButton_2_clicked(); break;
        case 2: showTime(); break;
        case 3: on_search_error((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 4: on_search_success((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 5: on_show_data((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2]))); break;
        case 6: showTip((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 7: hideTip(); break;
        case 8: onNewCard((*reinterpret_cast< qlonglong(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2]))); break;
        default: ;
        }
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
