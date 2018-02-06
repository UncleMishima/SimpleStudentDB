/****************************************************************************
** Meta object code from reading C++ file 'studentdb.h'
**
** Created: Wed Jun 11 12:31:42 2014
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "studentdb.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'studentdb.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_StudentDB[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      11,   10,   10,   10, 0x08,
      39,   10,   10,   10, 0x08,
      69,   10,   10,   10, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_StudentDB[] = {
    "StudentDB\0\0on_pushButtonView_clicked()\0"
    "on_pushButtonDelete_clicked()\0"
    "on_pushButtonAdd_clicked()\0"
};

const QMetaObject StudentDB::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_StudentDB,
      qt_meta_data_StudentDB, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &StudentDB::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *StudentDB::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *StudentDB::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_StudentDB))
        return static_cast<void*>(const_cast< StudentDB*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int StudentDB::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_pushButtonView_clicked(); break;
        case 1: on_pushButtonDelete_clicked(); break;
        case 2: on_pushButtonAdd_clicked(); break;
        default: ;
        }
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
