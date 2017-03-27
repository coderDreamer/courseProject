#include "login_form.h"
#include "ui_login_form.h"
#include <QtSql>
#include <QString>

Login_Form::Login_Form(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Login_Form)
{
    ui->setupUi(this);

    /*====================================================================
    * Database stuff
    ====================================================================*/


    QSqlDatabase db;
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("/home/ben/project/course/main_database");
    if (!db.open()) {
            qDebug() << "Error. Can't open the database...";
        }


    // Making our query
    QSqlQuery query;
    query.exec("SELECT * FROM students");

    // Printing the values from the query
    while(query.next()) {
    QString id = query.value(0).toString();
    QString name = query.value(1).toString();
    QString last_name = query.value(2).toString();
    QString faculty = query.value(3).toString();
    QString group_name = query.value(4).toString();
    QString email = query.value(5).toString();
    QString login = query.value(6).toString();

    ui->textEdit->insertPlainText(id + "\n" + name + "\n" + last_name + "\n" + faculty +
                                       "\n" + group_name + "\n" + email + "\n" + login + "\n");
    }
    connect(ui->login_enter, SIGNAL(clicked(bool)),
    ui->textEdit, SLOT(clear()));

    /*====================================================================
    * ---> the end of Database stuff
    ====================================================================*/



 }

// Functions for buttons
void Login_Form::transfer_login() {
    this->close();
    emit LoginWindow();
}


Login_Form::~Login_Form()
{
    delete ui;
}

void Login_Form::on_login_button_clicked()
{
    this->close();      // Закрываем окно
    emit WelcomeWindow(); // И вызываем сигнал на открытие главного окна
}
