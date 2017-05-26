#include "user_window.h"
#include "ui_user_window.h"
#include <QtSql>
#include <QString>
#include <QCommandLinkButton>

User_Window::User_Window(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::User_Window)
{
    ui->setupUi(this);
    setMinimumSize(350,505);


    /*====================================================================
                                База Данных
    ====================================================================*/
//    static const QString path = "/home/ben/project/course/main_database";
//        DbManager db(path);

    QSqlDatabase db = QSqlDatabase::database("my_db_connection");
        QSqlQuery databaseQuery(db);

//        if (db.isOpen())
//        {
            //QSqlQuery databaseQuery;
            databaseQuery.exec("SELECT * FROM subjects");


            while(databaseQuery.next()) {
            QString subjectName = databaseQuery.value(1).toString();
            ui->verticalLayout->addWidget(new QCommandLinkButton(subjectName, this));
            }
        //}
        //else { qDebug() << "User_Window: DB error!"; }

    /*====================================================================
                               конец Базы Данных
    ====================================================================*/
}









User_Window::~User_Window()
{
    delete ui;
}
