#ifndef ADD_TEST_H
#define ADD_TEST_H

#include <QDialog>
#include <QtSql>
#include <QString>
#include <string>
#include <sstream>
/*
// SSTR macro для перевода int в string(используется для чекбоксов)
#define SSTR( x ) static_cast< std::ostringstream & >( \
      ( std::ostringstream() << std::dec << x ) ).str()
*/
namespace Ui {
class Add_test;
}

class Add_test : public QDialog
{
    Q_OBJECT

public:
    explicit Add_test(QWidget *parent = 0);
    ~Add_test();
    void database_connect() {
        QSqlDatabase db;
        db = QSqlDatabase::addDatabase("QSQLITE");
        db.setDatabaseName("/home/ben/project/course/main_database");
        if (!db.open()) {
                qDebug() << "Error. Can't open the database...";
            }
    }


signals:
    void menuWindow();

private slots:
    void on_edit_mode_clicked();
    void add_task_open();
    void add_task_close();

private:
    Ui::Add_test *ui;
    void add_label_success();
    void add_label_failed();
    QString open_solut;
    int checkbox_value;
};

#endif // ADD_TEST_H
