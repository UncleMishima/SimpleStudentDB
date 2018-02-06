/********************************************************************************
** Form generated from reading UI file 'studentdb.ui'
**
** Created: Thu Jun 12 06:32:36 2014
**      by: Qt User Interface Compiler version 4.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDENTDB_H
#define UI_STUDENTDB_H

#include <QVariant>
#include <QAction>
#include <QApplication>
#include <QButtonGroup>
#include <QGroupBox>
#include <QHeaderView>
#include <QLabel>
#include <QMainWindow>
#include <QMenuBar>
#include <QPushButton>
#include <QStatusBar>
#include <QTextEdit>
#include <QToolBar>
#include <QTreeView>
#include <QWidget>

QT_BEGIN_NAMESPACE

class Ui_StudentDB
{
public:
    QWidget *centralWidget;
    QGroupBox *groupBox;
    QLabel *label;
    QTextEdit *textName;
    QLabel *label_2;
    QTextEdit *textRollNo;
    QPushButton *pushButtonAdd;
    QPushButton *pushButtonDelete;
    QPushButton *pushButtonView;
    QGroupBox *groupBox_2;
    QTreeView *treeView;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *StudentDB)
    {
        if (StudentDB->objectName().isEmpty())
            StudentDB->setObjectName(QString::fromUtf8("StudentDB"));
        StudentDB->resize(600, 400);
        centralWidget = new QWidget(StudentDB);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(0, 0, 601, 151));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 20, 61, 21));
        textName = new QTextEdit(groupBox);
        textName->setObjectName(QString::fromUtf8("textName"));
        textName->setGeometry(QRect(80, 20, 361, 31));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 70, 56, 15));
        textRollNo = new QTextEdit(groupBox);
        textRollNo->setObjectName(QString::fromUtf8("textRollNo"));
        textRollNo->setGeometry(QRect(80, 60, 361, 31));
        pushButtonAdd = new QPushButton(groupBox);
        pushButtonAdd->setObjectName(QString::fromUtf8("pushButtonAdd"));
        pushButtonAdd->setGeometry(QRect(100, 110, 80, 26));
        pushButtonDelete = new QPushButton(groupBox);
        pushButtonDelete->setObjectName(QString::fromUtf8("pushButtonDelete"));
        pushButtonDelete->setGeometry(QRect(190, 110, 80, 26));
        pushButtonView = new QPushButton(groupBox);
        pushButtonView->setObjectName(QString::fromUtf8("pushButtonView"));
        pushButtonView->setGeometry(QRect(290, 110, 80, 26));
        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(0, 150, 601, 201));
        treeView = new QTreeView(groupBox_2);
        treeView->setObjectName(QString::fromUtf8("treeView"));
        treeView->setGeometry(QRect(80, 20, 361, 171));
        treeView->setRootIsDecorated(false);
        StudentDB->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(StudentDB);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 23));
        StudentDB->setMenuBar(menuBar);
        mainToolBar = new QToolBar(StudentDB);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        StudentDB->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(StudentDB);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        StudentDB->setStatusBar(statusBar);

        retranslateUi(StudentDB);

        QMetaObject::connectSlotsByName(StudentDB);
    } // setupUi

    void retranslateUi(QMainWindow *StudentDB)
    {

        StudentDB->setWindowTitle(QApplication::translate("StudentDB", "StudentDB", 0));
        groupBox->setTitle(QApplication::translate("StudentDB", "Student Info", 0));
        label->setText(QApplication::translate("StudentDB", "Name   :", 0));
        label_2->setText(QApplication::translate("StudentDB", "Number :", 0));
        pushButtonAdd->setText(QApplication::translate("StudentDB", "Add", 0));
        pushButtonDelete->setText(QApplication::translate("StudentDB", "Delete", 0));
        pushButtonView->setText(QApplication::translate("StudentDB", "View", 0));
        groupBox_2->setTitle(QApplication::translate("StudentDB", "Details", 0));
        /*
        StudentDB->setWindowTitle(QApplication::translate("StudentDB", "StudentDB", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("StudentDB", "Student Info", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("StudentDB", "Name   :", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("StudentDB", "Roll No :", 0, QApplication::UnicodeUTF8));
        pushButtonAdd->setText(QApplication::translate("StudentDB", "Add", 0, QApplication::UnicodeUTF8));
        pushButtonDelete->setText(QApplication::translate("StudentDB", "Delete", 0, QApplication::UnicodeUTF8));
        pushButtonView->setText(QApplication::translate("StudentDB", "View", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("StudentDB", "Details", 0, QApplication::UnicodeUTF8));
        */
    } // retranslateUi

};

namespace Ui {
    class StudentDB: public Ui_StudentDB {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENTDB_H
