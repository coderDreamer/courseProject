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

    QSqlDatabase db;
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("/home/ben/project/course/main_database");
    if (!db.open()) {
            qDebug() << "Error. Can't open the database...";
        }

    QSqlQuery databaseQuery;
    databaseQuery.exec("SELECT * FROM subjects");

    while(databaseQuery.next()) {
    QString subjectName = databaseQuery.value(1).toString();
    ui->verticalLayout->addWidget(new QCommandLinkButton(subjectName, this));
    }





    }




User_Window::~User_Window()
{
    delete ui;
}
