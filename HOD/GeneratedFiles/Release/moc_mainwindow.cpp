/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created: Wed Nov 11 16:07:44 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../mainwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
      37,   11,   11,   11, 0x08,
      56,   11,   11,   11, 0x08,
      94,   11,   11,   11, 0x08,
     121,   11,   11,   11, 0x08,
     143,   11,   11,   11, 0x08,
     172,   11,   11,   11, 0x08,
     210,   11,   11,   11, 0x08,
     248,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MainWindow[] = {
    "MainWindow\0\0ready2ReadVideo(QString)\0"
    "readVideo(QString)\0"
    "on_acReadContinuousFrames_triggered()\0"
    "on_acReadVideo_triggered()\0"
    "on_acExit_triggered()\0"
    "on_acStartDetect_triggered()\0"
    "on_comboDenoise_currentIndexChanged()\0"
    "on_comboSegment_currentIndexChanged()\0"
    "totalProcess()\0"
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MainWindow *_t = static_cast<MainWindow *>(_o);
        switch (_id) {
        case 0: _t->ready2ReadVideo((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->readVideo((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->on_acReadContinuousFrames_triggered(); break;
        case 3: _t->on_acReadVideo_triggered(); break;
        case 4: _t->on_acExit_triggered(); break;
        case 5: _t->on_acStartDetect_triggered(); break;
        case 6: _t->on_comboDenoise_currentIndexChanged(); break;
        case 7: _t->on_comboSegment_currentIndexChanged(); break;
        case 8: _t->totalProcess(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MainWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow,
      qt_meta_data_MainWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::ready2ReadVideo(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
