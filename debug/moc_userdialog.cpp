/****************************************************************************
** Meta object code from reading C++ file 'userdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../userdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'userdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_UserDialog_t {
    QByteArrayData data[14];
    char stringdata[280];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_UserDialog_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_UserDialog_t qt_meta_stringdata_UserDialog = {
    {
QT_MOC_LITERAL(0, 0, 10),
QT_MOC_LITERAL(1, 11, 23),
QT_MOC_LITERAL(2, 35, 0),
QT_MOC_LITERAL(3, 36, 21),
QT_MOC_LITERAL(4, 58, 22),
QT_MOC_LITERAL(5, 81, 5),
QT_MOC_LITERAL(6, 87, 19),
QT_MOC_LITERAL(7, 107, 21),
QT_MOC_LITERAL(8, 129, 20),
QT_MOC_LITERAL(9, 150, 24),
QT_MOC_LITERAL(10, 175, 27),
QT_MOC_LITERAL(11, 203, 21),
QT_MOC_LITERAL(12, 225, 22),
QT_MOC_LITERAL(13, 248, 30)
    },
    "UserDialog\0on_SearchButton_clicked\0\0"
    "on_InitButton_clicked\0on_tableView_activated\0"
    "index\0on_treeView_clicked\0"
    "on_treeView_activated\0on_treeView_expanded\0"
    "on_commandButton_clicked\0"
    "on_Commander_button_clicked\0"
    "on_pushButton_clicked\0on_button_stat_clicked\0"
    "on_tabWidget_tabCloseRequested\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UserDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x08,
       3,    0,   70,    2, 0x08,
       4,    1,   71,    2, 0x08,
       6,    1,   74,    2, 0x08,
       7,    1,   77,    2, 0x08,
       8,    1,   80,    2, 0x08,
       9,    0,   83,    2, 0x08,
      10,    0,   84,    2, 0x08,
      11,    0,   85,    2, 0x08,
      12,    0,   86,    2, 0x08,
      13,    1,   87,    2, 0x08,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,    5,
    QMetaType::Void, QMetaType::QModelIndex,    5,
    QMetaType::Void, QMetaType::QModelIndex,    5,
    QMetaType::Void, QMetaType::QModelIndex,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    5,

       0        // eod
};

void UserDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        UserDialog *_t = static_cast<UserDialog *>(_o);
        switch (_id) {
        case 0: _t->on_SearchButton_clicked(); break;
        case 1: _t->on_InitButton_clicked(); break;
        case 2: _t->on_tableView_activated((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 3: _t->on_treeView_clicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 4: _t->on_treeView_activated((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 5: _t->on_treeView_expanded((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 6: _t->on_commandButton_clicked(); break;
        case 7: _t->on_Commander_button_clicked(); break;
        case 8: _t->on_pushButton_clicked(); break;
        case 9: _t->on_button_stat_clicked(); break;
        case 10: _t->on_tabWidget_tabCloseRequested((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject UserDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_UserDialog.data,
      qt_meta_data_UserDialog,  qt_static_metacall, 0, 0}
};


const QMetaObject *UserDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UserDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UserDialog.stringdata))
        return static_cast<void*>(const_cast< UserDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int UserDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
