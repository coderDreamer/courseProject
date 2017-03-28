#include "login_form.h"
#include "ui_login_form.h"
#include <QtSql>
#include <QString>
#include <vector>
#include <iostream> // delete later

using namespace std;

Login_Form::Login_Form(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Login_Form)
{
    ui->setupUi(this);

    /*====================================================================
    * Database stuff
    ====================================================================*/


    DataBaseConnection(); // connect to out database


    // Making our queries
    QSqlQuery databaseQuery, countTableStrings;
    databaseQuery.exec("SELECT * FROM students");
    countTableStrings.exec("SELECT COUNT(*) FROM students"); // the count of strings in the table



    int db_columns = 8, i = 0, recordsNumber = 0;

    vector <char> studentsDataVector = {};

    while(countTableStrings.next()) {
    QString tempRecordsNumber = countTableStrings.value(0).toString();
    ui->textEdit->setPlainText( tempRecordsNumber + "\n" );
    recordsNumber = tempRecordsNumber;
    }


    // Printing the values from the query
    while(databaseQuery.next()) {
    char id = databaseQuery.value(0).toChar();
    QString name = databaseQuery.value(1).toString();
    QString last_name = databaseQuery.value(2).toString();
    QString faculty = databaseQuery.value(3).toString();
    QString group_name = databaseQuery.value(4).toString();
    QString email = databaseQuery.value(5).toString();
    QString login = databaseQuery.value(6).toString();
    QString password = databaseQuery.value(7).toString();

    studentsDataVector.push_back(id);
//    studentsDataVector.push_back(name);
//    studentsDataVector.push_back(last_name);
//    studentsDataVector.push_back(faculty);
//    studentsDataVector.push_back(group_name);
//    studentsDataVector.push_back(email);
//    studentsDataVector.push_back(login);
//    studentsDataVector.push_back(password);

    for(i = 0; i < recordsNumber * db_columns; i++) ui->textEdit->setPlainText(studentsDataVector[i]);

    }






    /*====================================================================
    * ---> the end of Database stuff
    ====================================================================*/
 }

void Login_Form::DataBaseConnection() {
    QSqlDatabase db;
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("/home/ben/project/course/main_database");
    if (!db.open()) {
            qDebug() << "Error. Can't open the database...";
        }
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
    this->close();
    emit WelcomeWindow();
}
