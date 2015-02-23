/****************************************************************************
** Meta object code from reading C++ file 'qjrmeter.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qjrmeter.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qjrmeter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QJRMeter[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       7,   59, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      10,    9,    9,    9, 0x05,
      32,    9,    9,    9, 0x05,

 // slots: signature, parameters, type, tag, flags
      54,    9,    9,    9, 0x0a,
      75,    9,    9,    9, 0x0a,
      97,    9,    9,    9, 0x0a,
     118,    9,    9,    9, 0x0a,
     138,    9,    9,    9, 0x0a,
     159,    9,    9,    9, 0x0a,
     181,    9,    9,    9, 0x0a,

 // properties: name, type, flags
     209,  202, 0x43095103,
     219,  202, 0x43095103,
     230,  202, 0x43095103,
     239,  202, 0x43095103,
     256,  249, 0x06095103,
     266,  249, 0x06095103,
     277,  249, 0x06095103,

       0        // eod
};

static const char qt_meta_stringdata_QJRMeter[] = {
    "QJRMeter\0\0valueLChanged(double)\0"
    "valueRChanged(double)\0setColorBack(QColor)\0"
    "setColorLevel(QColor)\0setColorHigh(QColor)\0"
    "setColorLow(QColor)\0setLeftLevel(double)\0"
    "setRightLevel(double)\0setCompLevel(double)\0"
    "QColor\0colorBack\0colorLevel\0colorLow\0"
    "colorHigh\0double\0leftLevel\0rightLevel\0"
    "compLevel\0"
};

void QJRMeter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QJRMeter *_t = static_cast<QJRMeter *>(_o);
        switch (_id) {
        case 0: _t->valueLChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 1: _t->valueRChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: _t->setColorBack((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 3: _t->setColorLevel((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 4: _t->setColorHigh((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 5: _t->setColorLow((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 6: _t->setLeftLevel((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 7: _t->setRightLevel((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 8: _t->setCompLevel((*reinterpret_cast< double(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QJRMeter::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QJRMeter::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QJRMeter,
      qt_meta_data_QJRMeter, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QJRMeter::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QJRMeter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QJRMeter::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QJRMeter))
        return static_cast<void*>(const_cast< QJRMeter*>(this));
    return QWidget::qt_metacast(_clname);
}

int QJRMeter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QColor*>(_v) = getColorBack(); break;
        case 1: *reinterpret_cast< QColor*>(_v) = getColorLevel(); break;
        case 2: *reinterpret_cast< QColor*>(_v) = getColorLow(); break;
        case 3: *reinterpret_cast< QColor*>(_v) = getColorHigh(); break;
        case 4: *reinterpret_cast< double*>(_v) = getLeftLevel(); break;
        case 5: *reinterpret_cast< double*>(_v) = getRightLevel(); break;
        case 6: *reinterpret_cast< double*>(_v) = getCompLevel(); break;
        }
        _id -= 7;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setColorBack(*reinterpret_cast< QColor*>(_v)); break;
        case 1: setColorLevel(*reinterpret_cast< QColor*>(_v)); break;
        case 2: setColorLow(*reinterpret_cast< QColor*>(_v)); break;
        case 3: setColorHigh(*reinterpret_cast< QColor*>(_v)); break;
        case 4: setLeftLevel(*reinterpret_cast< double*>(_v)); break;
        case 5: setRightLevel(*reinterpret_cast< double*>(_v)); break;
        case 6: setCompLevel(*reinterpret_cast< double*>(_v)); break;
        }
        _id -= 7;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 7;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QJRMeter::valueLChanged(double _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QJRMeter::valueRChanged(double _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
