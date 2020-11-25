/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../bank_automat/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[17];
    char stringdata0[283];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 10), // "digitClick"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 9), // "stopClick"
QT_MOC_LITERAL(4, 33, 7), // "okClick"
QT_MOC_LITERAL(5, 41, 10), // "loginClick"
QT_MOC_LITERAL(6, 52, 14), // "netWorkRequest"
QT_MOC_LITERAL(7, 67, 7), // "request"
QT_MOC_LITERAL(8, 75, 24), // "on_label_4_linkActivated"
QT_MOC_LITERAL(9, 100, 4), // "link"
QT_MOC_LITERAL(10, 105, 20), // "on_Btn_login_clicked"
QT_MOC_LITERAL(11, 126, 20), // "on_btn_NOSTO_clicked"
QT_MOC_LITERAL(12, 147, 25), // "on_btn_back_nosto_clicked"
QT_MOC_LITERAL(13, 173, 26), // "on_btn_back_tapaht_clicked"
QT_MOC_LITERAL(14, 200, 25), // "on_btn_back_saldo_clicked"
QT_MOC_LITERAL(15, 226, 27), // "on_btn_back_creditP_clicked"
QT_MOC_LITERAL(16, 254, 28) // "on_btn_back_toiminto_clicked"

    },
    "MainWindow\0digitClick\0\0stopClick\0"
    "okClick\0loginClick\0netWorkRequest\0"
    "request\0on_label_4_linkActivated\0link\0"
    "on_Btn_login_clicked\0on_btn_NOSTO_clicked\0"
    "on_btn_back_nosto_clicked\0"
    "on_btn_back_tapaht_clicked\0"
    "on_btn_back_saldo_clicked\0"
    "on_btn_back_creditP_clicked\0"
    "on_btn_back_toiminto_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x08 /* Private */,
       3,    0,   80,    2, 0x08 /* Private */,
       4,    0,   81,    2, 0x08 /* Private */,
       5,    0,   82,    2, 0x08 /* Private */,
       6,    1,   83,    2, 0x08 /* Private */,
       8,    1,   86,    2, 0x08 /* Private */,
      10,    0,   89,    2, 0x08 /* Private */,
      11,    0,   90,    2, 0x08 /* Private */,
      12,    0,   91,    2, 0x08 /* Private */,
      13,    0,   92,    2, 0x08 /* Private */,
      14,    0,   93,    2, 0x08 /* Private */,
      15,    0,   94,    2, 0x08 /* Private */,
      16,    0,   95,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->digitClick(); break;
        case 1: _t->stopClick(); break;
        case 2: _t->okClick(); break;
        case 3: _t->loginClick(); break;
        case 4: _t->netWorkRequest((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->on_label_4_linkActivated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->on_Btn_login_clicked(); break;
        case 7: _t->on_btn_NOSTO_clicked(); break;
        case 8: _t->on_btn_back_nosto_clicked(); break;
        case 9: _t->on_btn_back_tapaht_clicked(); break;
        case 10: _t->on_btn_back_saldo_clicked(); break;
        case 11: _t->on_btn_back_creditP_clicked(); break;
        case 12: _t->on_btn_back_toiminto_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
