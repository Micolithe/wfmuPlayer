/****************************************************************************
** Meta object code from reading C++ file 'wfmuwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "B:/_DEV/qtspace/wfmuPlayer/wfmuwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'wfmuwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_wfmuWindow_t {
    QByteArrayData data[9];
    char stringdata0[151];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_wfmuWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_wfmuWindow_t qt_meta_stringdata_wfmuWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "wfmuWindow"
QT_MOC_LITERAL(1, 11, 21), // "on_buttonPLAY_clicked"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 21), // "on_buttonSTOP_clicked"
QT_MOC_LITERAL(4, 56, 38), // "on_boxSTREAMSELECT_currentInd..."
QT_MOC_LITERAL(5, 95, 5), // "index"
QT_MOC_LITERAL(6, 101, 32), // "on_horizontalSlider_valueChanged"
QT_MOC_LITERAL(7, 134, 5), // "value"
QT_MOC_LITERAL(8, 140, 10) // "textUpdate"

    },
    "wfmuWindow\0on_buttonPLAY_clicked\0\0"
    "on_buttonSTOP_clicked\0"
    "on_boxSTREAMSELECT_currentIndexChanged\0"
    "index\0on_horizontalSlider_valueChanged\0"
    "value\0textUpdate"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_wfmuWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x08 /* Private */,
       3,    0,   40,    2, 0x08 /* Private */,
       4,    1,   41,    2, 0x08 /* Private */,
       6,    1,   44,    2, 0x08 /* Private */,
       8,    0,   47,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void,

       0        // eod
};

void wfmuWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        wfmuWindow *_t = static_cast<wfmuWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_buttonPLAY_clicked(); break;
        case 1: _t->on_buttonSTOP_clicked(); break;
        case 2: _t->on_boxSTREAMSELECT_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->on_horizontalSlider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->textUpdate(); break;
        default: ;
        }
    }
}

const QMetaObject wfmuWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_wfmuWindow.data,
      qt_meta_data_wfmuWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *wfmuWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *wfmuWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_wfmuWindow.stringdata0))
        return static_cast<void*>(const_cast< wfmuWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int wfmuWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
