#include "studentdb.h"
#include "ui_studentdb.h"

#include <QDir>
#include <QMessageBox>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlRecord>


StudentDB::StudentDB(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::StudentDB)
{
    ui->setupUi(this);

    QDir file;
    QString filename = file.path() + QDir::separator() + "student.db";

    if(!createDB(filename))
    {
        QMessageBox::critical(this,
                              tr("Database not found."),
                              tr("Database not found. The application will be closed."),
                              QMessageBox::Ok);
        qApp->exit();
    }
}

void StudentDB::changeEvent(QEvent *e)
{
    QMainWindow::changeEvent(e);

    switch (e->type())
    {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}

bool StudentDB::createDB(QString dbName)
{
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName(dbName);

    if(db.open())
    {
        bool found = false;
        foreach (QString table, db.tables())
        {
            if(table == "student")
            {
                found = true;
                break;
            }
        }

        if(!found)
        {
            QSqlQuery query(db);
            query.exec("CREATE TABLE student (name VARCHAR(32), number VARCHAR(16))");
        }

        tableModel = new QSqlTableModel(this, db);
        tableModel->setTable("student");
        tableModel->setEditStrategy(QSqlTableModel::OnFieldChange);
        tableModel->select();
    }
    else return false;

    return true;
}

void StudentDB::on_pushButtonAdd_clicked()
{
    QString name = ui->textName->toPlainText();
    QString number = ui->textRollNo->toPlainText();

    addNewStudent(name, number);
}

void StudentDB::addNewStudent(QString name, QString number)
{
    QSqlRecord rec = tableModel->record();
    rec.setValue("name", name);
    rec.setValue("number", number);

    tableModel->insertRecord(-1, rec);
    ui->textName->setText("");
    ui->textRollNo->setText("");
}

void StudentDB::on_pushButtonDelete_clicked()
{
    QModelIndex sample = ui->treeView->currentIndex();
    if( sample.row() >= 0 )
    {
        QMessageBox::StandardButton dlg;
        dlg = QMessageBox::question(this, tr("Remove Student"),
                                    QString(tr("Remove Student? ")),
                                    QMessageBox::Yes | QMessageBox::No);

        if(dlg == QMessageBox::Yes)
        {
            tableModel->removeRow(sample.row());
        }
    }
}

void StudentDB::on_pushButtonView_clicked()
{
    viewDetails();
}

void StudentDB::viewDetails()
{
    QTreeView *view = ui->treeView;
    view->setModel(tableModel);
}

StudentDB::~StudentDB()
{
    delete ui;
    delete tableModel;
}
