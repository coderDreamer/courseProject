#include "register_form.h"
#include "ui_register_form.h"
#include <iostream>
#include <QString>
#include <string>
#include <QtSql>
#include <QLineEdit>
#include <QCheckBox>
#include <QSqlQuery>
#include <QSqlError>
#include <QSqlRecord>
#include <QDebug>

using namespace std;

Register_Form::Register_Form(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Register_Form)
{
    ui->setupUi(this);
    ui->register_label->hide();

    /*====================================================================
                                База Данных
    ====================================================================*/
//    static const QString path = "/home/ben/project/course/main_database";
//        DbManager db(path);
    //QSqlDatabase db = QSqlDatabase::database();

    //QSqlDatabase addUser = QSqlDatabase::database("my_db_connection");


    connect(ui->enter_button, SIGNAL (released()), this, SLOT (Registration()));
//    QSqlDatabase::removeDatabase("QSQLITE");
    //db.close_db();
    /*====================================================================
                                конец Базы Данных
    ====================================================================*/
}

Register_Form::~Register_Form()
{
    delete ui;
}

void Register_Form::on_register_button_clicked()
{
    this->close();
    emit WelcomeWindow();
}
    // Функция для создания новой записи в таблице students
    void Register_Form::Registration() {

    QSqlQuery newUser_query, createTable;
    // введеные в полях значения
    QString nameValue = ui->nameLine->text(),
            last_nameValue = ui->lastnameLine->text(),
            facultyValue = ui->facultyLine->text(),
            groupValue = ui->groupLine->text(),
            emailValue = ui->emailLine->text(),
            loginValue = ui->loginLine->text(),
            passwordValue = ui->passwordLine->text();

    // вносим введенные значения полей в таблицу students
    newUser_query.exec("INSERT INTO students (name, last_name, faculty, group_name, email, login, password) "
                                "VALUES ('"+nameValue+"', '"+last_nameValue+"', '"+facultyValue+"', '"+groupValue+"', "
                                        "'"+emailValue+"', '"+loginValue+"', '"+passwordValue+"')");

    // проверяем, все ли поля заполнены...
    if(nameValue.isEmpty() || last_nameValue.isEmpty() || facultyValue.isEmpty() || groupValue.isEmpty() ||
            emailValue.isEmpty() || loginValue.isEmpty() || passwordValue.isEmpty()) { // хотя бы одно пустое
        ui->register_label->setText("Заполните все поля");
        ui->register_label->show();
    }
    else { // иначе - регистрация прошла успешно
        ui->register_label->setText("Регистрация прошла успешно");
        ui->register_label->setStyleSheet("color: green; font-weight: bold; font-size: 13px;");
        // появляется кнопка входа
        ui->enter_button->setText("Войти");
        ui->register_label->show();
    }
    QString _USER_ = "_USER_"; // переменная для запроса
    // создаем отдельную таблицу в БД для студента с названием _USER_ЛОГИН
    createTable.exec("CREATE TABLE '"+_USER_ + loginValue+"' ( 'id' INTEGER PRIMARY KEY "
                                                         "AUTOINCREMENT, 'pswd' TEXT, 'subjects' TEXT)");
    createTable.exec("INSERT INTO '"+_USER_ + loginValue+"' (pswd, login) VALUES ('"+passwordValue+"', '"+loginValue+"')");

    // (!) Нужно обработать случай, когда пользователь с таким логином уже существует


}
