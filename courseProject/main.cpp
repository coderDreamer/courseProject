#include "widget.h"
#include <QApplication>
#include <QSqlQuery>
#include <QSqlError>
#include <QSqlRecord>
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);


    Widget w;
    w.show();


    // Change to any path you wish
//    static const QString path = "/home/ben/project/course/main_database";
//    QSqlDatabase m_db;


//        m_db = QSqlDatabase::addDatabase("QSQLITE");
//        m_db.setDatabaseName(path);


//                if (!m_db.open())
//                {
//                    qDebug() << "DB Error: Ошибка соединения с базой данных";
//                }
//                else
//                {
//                    qDebug() << "БД: соединение с базой данных установлено";
//                }

//                QSqlDatabase defaultDB = QSqlDatabase::database();


//        if (db.isOpen())
//        {
//            db.createTable();   // Creates a table if it doens't exist. Otherwise, it will use existing table.
//            db.addPerson("A");
//            db.addPerson("B");
//            db.addPerson("C");
//            db.printAllPersons();
//            db.removePerson("C");
//            db.printAllPersons();
//            db.removeAllPersons();
//            qDebug() << "End";
//        }
//        else
//        {
//            qDebug() << "Database is not open!";
//        }

    return a.exec();
}
