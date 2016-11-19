/****************************************************************************
** Meta object code from reading C++ file 'colourcontroller.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../DiscoDistroV2/colourcontroller.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'colourcontroller.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_colourController_t {
    QByteArrayData data[11];
    char stringdata0[158];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_colourController_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_colourController_t qt_meta_stringdata_colourController = {
    {
QT_MOC_LITERAL(0, 0, 16), // "colourController"
QT_MOC_LITERAL(1, 17, 15), // "redValueChanged"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 17), // "greenValueChanged"
QT_MOC_LITERAL(4, 52, 16), // "blueValueChanged"
QT_MOC_LITERAL(5, 69, 15), // "allValueChanged"
QT_MOC_LITERAL(6, 85, 15), // "redTitleChanged"
QT_MOC_LITERAL(7, 101, 5), // "value"
QT_MOC_LITERAL(8, 107, 17), // "greenTitleChanged"
QT_MOC_LITERAL(9, 125, 16), // "blueTitleChanged"
QT_MOC_LITERAL(10, 142, 15) // "allTitleChanged"

    },
    "colourController\0redValueChanged\0\0"
    "greenValueChanged\0blueValueChanged\0"
    "allValueChanged\0redTitleChanged\0value\0"
    "greenTitleChanged\0blueTitleChanged\0"
    "allTitleChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_colourController[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x08 /* Private */,
       3,    1,   57,    2, 0x08 /* Private */,
       4,    1,   60,    2, 0x08 /* Private */,
       5,    1,   63,    2, 0x08 /* Private */,
       6,    1,   66,    2, 0x08 /* Private */,
       8,    1,   69,    2, 0x08 /* Private */,
       9,    1,   72,    2, 0x08 /* Private */,
      10,    1,   75,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Bool,    7,

       0        // eod
};

void colourController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        colourController *_t = static_cast<colourController *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->redValueChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->greenValueChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->blueValueChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->allValueChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->redTitleChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->greenTitleChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->blueTitleChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->allTitleChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject colourController::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_colourController.data,
      qt_meta_data_colourController,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *colourController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *colourController::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_colourController.stringdata0))
        return static_cast<void*>(const_cast< colourController*>(this));
    return QWidget::qt_metacast(_clname);
}

int colourController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
