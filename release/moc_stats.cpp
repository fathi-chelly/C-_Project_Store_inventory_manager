/****************************************************************************
** Meta object code from reading C++ file 'stats.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../stats.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'stats.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Stats_t {
    QByteArrayData data[6];
    char stringdata[68];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_Stats_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_Stats_t qt_meta_stringdata_Stats = {
    {
QT_MOC_LITERAL(0, 0, 5),
QT_MOC_LITERAL(1, 6, 4),
QT_MOC_LITERAL(2, 11, 0),
QT_MOC_LITERAL(3, 12, 12),
QT_MOC_LITERAL(4, 25, 17),
QT_MOC_LITERAL(5, 43, 23)
    },
    "Stats\0plot\0\0QCustomPlot*\0QMap<QString,int>\0"
    "ProduitsLesPlusDemandes\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Stats[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   24,    2, 0x08,
       5,    0,   29,    2, 0x08,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 4,    2,    2,
    0x80000000 | 4,

       0        // eod
};

void Stats::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Stats *_t = static_cast<Stats *>(_o);
        switch (_id) {
        case 0: _t->plot((*reinterpret_cast< QCustomPlot*(*)>(_a[1])),(*reinterpret_cast< QMap<QString,int>(*)>(_a[2]))); break;
        case 1: { QMap<QString,int> _r = _t->ProduitsLesPlusDemandes();
            if (_a[0]) *reinterpret_cast< QMap<QString,int>*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QCustomPlot* >(); break;
            }
            break;
        }
    }
}

const QMetaObject Stats::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Stats.data,
      qt_meta_data_Stats,  qt_static_metacall, 0, 0}
};


const QMetaObject *Stats::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Stats::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Stats.stringdata))
        return static_cast<void*>(const_cast< Stats*>(this));
    return QWidget::qt_metacast(_clname);
}

int Stats::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
