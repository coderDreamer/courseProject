#include "register_form.h"
#include "ui_register_form.h"
//#include <login_form.h>
#include <iostream>
#include <QString>
#include <string>
#include <QtSql>

using namespace std;

Register_Form::Register_Form(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Register_Form)
{
    ui->setupUi(this);

    ui->register_label->hide();

    /*====================================================================
    * Database stuff
    ====================================================================*/

    // I need to exchange this DB connection stuff by one function which is common for the whole app
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
    // Method for adding a new User into the Database
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

    // Checking out if all of our fields are not empty.

    if(nameValue.isEmpty() || last_nameValue.isEmpty() || facultyValue.isEmpty() || emailValue.isEmpty() ||
                                loginValue.isEmpty() || passwordValue.isEmpty()) {
        ui->register_label->setText("Заполните все поля");
        ui->register_label->show();
    }
    else {
        ui->register_label->setText("Регистрация прошла успешно");
        ui->register_label->setStyleSheet("color: green; font-weight: bold; font-size: 13px;");
        ui->enter_button->setText("Войти");
        ui->register_label->show();
    }



}
