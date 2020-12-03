/****************************************************************************
** Meta object code from reading C++ file 'loginpage.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../bank_automat/loginpage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'loginpage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_LoginPage_t {
    QByteArrayData data[12];
    char stringdata0[97];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LoginPage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LoginPage_t qt_meta_stringdata_LoginPage = {
    {
QT_MOC_LITERAL(0, 0, 9), // "LoginPage"
QT_MOC_LITERAL(1, 10, 10), // "changePage"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 4), // "page"
QT_MOC_LITERAL(4, 27, 8), // "sendData"
QT_MOC_LITERAL(5, 36, 4), // "data"
QT_MOC_LITERAL(6, 41, 10), // "digitClick"
QT_MOC_LITERAL(7, 52, 5), // "digit"
QT_MOC_LITERAL(8, 58, 9), // "stopClick"
QT_MOC_LITERAL(9, 68, 7), // "okClick"
QT_MOC_LITERAL(10, 76, 10), // "loginClick"
QT_MOC_LITERAL(11, 87, 9) // "hideError"

    },
    "LoginPage\0changePage\0\0page\0sendData\0"
    "data\0digitClick\0digit\0stopClick\0okClick\0"
    "loginClick\0hideError"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LoginPage[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,
       4,    1,   52,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   55,    2, 0x08 /* Private */,
       8,    0,   58,    2, 0x08 /* Private */,
       9,    0,   59,    2, 0x08 /* Private */,
      10,    0,   60,    2, 0x08 /* Private */,
      11,    0,   61,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::UInt,    3,
    QMetaType::Void, QMetaType::QVariantMap,    5,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void LoginPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LoginPage *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->changePage((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 1: _t->sendData((*reinterpret_cast< const QVariantMap(*)>(_a[1]))); break;
        case 2: _t->digitClick((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->stopClick(); break;
        case 4: _t->okClick(); break;
        case 5: _t->loginClick(); break;
        case 6: _t->hideError(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (LoginPage::*)(quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LoginPage::changePage)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (LoginPage::*)(const QVariantMap & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LoginPage::sendData)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject LoginPage::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_LoginPage.data,
    qt_meta_data_LoginPage,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *LoginPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LoginPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LoginPage.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int LoginPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void LoginPage::changePage(quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void LoginPage::sendData(const QVariantMap & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
