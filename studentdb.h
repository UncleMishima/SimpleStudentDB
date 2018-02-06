#ifndef STUDENTDB_H
#define STUDENTDB_H

#include <QMainWindow>
#include <QSqlDatabase>
#include <QSqlTableModel>

namespace Ui {
class StudentDB;
}

class StudentDB : public QMainWindow
{
    Q_OBJECT
public:
    StudentDB(QWidget *parent = 0);
    ~StudentDB();
    bool createDB(QString dbName);
    void setName(const QString name);
    void setNumber(const QString number);
    void addNewStudent(QString studentName, QString number);
    void viewDetails();

protected:
    void changeEvent(QEvent *e);

private:
    Ui::StudentDB *ui;
    QSqlDatabase db;
    QSqlTableModel *tableModel;

private slots:
    void on_pushButtonView_clicked();
    void on_pushButtonDelete_clicked();
    void on_pushButtonAdd_clicked();
};

#endif // STUDENTDB_H
