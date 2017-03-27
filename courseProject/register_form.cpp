#include "register_form.h"
#include "ui_register_form.h"
#include <login_form.h>
#include <iostream>
#include <QString>
#include <string>

using namespace std;

Register_Form::Register_Form(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Register_Form)
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
    connect(ui->enter_button, SIGNAL (released()), this, SLOT (Registration()));




    /*====================================================================
    * ---> the end of Database stuff
    ====================================================================*/
}

Register_Form::~Register_Form()
{
    delete ui;
}
//toPlainText();

void Register_Form::on_register_button_clicked()
{
    this->close();
    emit WelcomeWindow();
}

 void Register_Form::Registration() {

    QSqlQuery newUser_query;
    // Read from the EditLine Widgets
    QString nameValue = ui->nameLine->text(),
            last_nameValue = ui->lastnameLine->text(),
            facultyValue = ui->facultyLine->text(),
            emailValue = ui->emailLine->text(),
            loginValue = ui->loginLine->text(),
            passwordValue = ui->passwordLine->text();

    // Insert new student's data into out database
    newUser_query.exec("INSERT INTO students (name, last_name, faculty, email, login, password) "
                                "VALUES ('"+nameValue+"', '"+last_nameValue+"', '"+facultyValue+"', "
                                        "'"+emailValue+"', '"+loginValue+"', '"+passwordValue+"')");

}
