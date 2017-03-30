#include "login_form.h"
#include "ui_login_form.h"
#include <QtSql>
#include <QString>
#include <vector>
#include <iostream> // delete later
#include <string>
//#include <iterator>

using namespace std;

Login_Form::Login_Form(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Login_Form)
{
    ui->setupUi(this);

    // Создаем обработчик для кнопки входа
    login_value = ui->login_field->text(); // переменные с введенными логином и паролем
    pswd_value = ui->password_field->text();

    /*====================================================================
    * База Данных
    ====================================================================*/


    DataBaseConnection(); // соединение с базой данных


    QSqlQuery databaseQuery, countTableStrings;
    databaseQuery.exec("SELECT * FROM students");
    countTableStrings.exec("SELECT COUNT(*) FROM students"); // количество записей в таблице БД




    //vector <QString> studentsDataVector = {};

    while(countTableStrings.next()) {

    QString tempRecordsNumber = countTableStrings.value(0).toString(); // the count of strings in the table
    recordsNumber = tempRecordsNumber.toInt(); // количество строк(записей) в таблице

    //ui->textEdit->setPlainText(tempRecordsNumber);

    //cout << "ISSSS: " << recordsNumber * db_columns;
    }


    // обход всей таблицы
    while(databaseQuery.next()) {
    //QString id = databaseQuery.value(0).toString();
    QString name = databaseQuery.value(1).toString();
    QString last_name = databaseQuery.value(2).toString();
    QString faculty = databaseQuery.value(3).toString();
    QString group_name = databaseQuery.value(4).toString();
    QString email = databaseQuery.value(5).toString();
    QString login = databaseQuery.value(6).toString();
    QString password = databaseQuery.value(7).toString();

    // заполняем массив значениями из таблицы
    studentsDataVector.push_back(name);
    studentsDataVector.push_back(last_name);
    studentsDataVector.push_back(faculty);
    studentsDataVector.push_back(group_name);
    studentsDataVector.push_back(email);
    studentsDataVector.push_back(login);
    studentsDataVector.push_back(password);



    // выводим всю таблицу
    //ui->textEdit->insertPlainText("\n" + name + " " + last_name + " " + faculty +
                            // " " + group_name + " " + email + " " + login + " " + password + "\n");

    }
    // проверка авторизации при нажатии на кнопку входа
    connect(ui->login_enter, SIGNAL (released()), this, SLOT (ifLoginCorrect()));



}
    /*====================================================================
    * ---> конец Базы Данных
    ====================================================================*/

// надо подумать над условием проверки, над всей функцией
void Login_Form::ifLoginCorrect() {
    //vector<QString>::iterator it = studentsDataVector.begin();
//    for(i = 0; i < recordsNumber * db_columns; i++) { if(studentsDataVector[i] == login_value) { loginRight == true; break; }}
//    for(i = 0; i < recordsNumber * db_columns; i++) { if(studentsDataVector[i] == pswd_value) { pswdRight == true; break; } }


//    if(loginRight == true && pswdRight == true ) {
//        ui->textEdit->insertPlainText("Everything is ok");
//    }
//    else { ui->textEdit->insertPlainText("Incorrect condition probably"); }

//   for(i = 0; i < recordsNumber * db_columns; i++) {
//       QString newStr = studentsDataVector[i];
//       ui->textEdit->insertPlainText(newStr + "\n");
//   }

//    if(studentsDataVector.empty()) { ui->textEdit->insertPlainText("Vector is empty"); }
//    else { ui->textEdit->insertPlainText("Vector is FULL"); }

    //if(studentsDataVector[1] == "Sergey") {ui->textEdit->insertPlainText("YES!");}


    // ВЕКТОР ЗАПОЛНЕН РАЗРОЗНЕННО. ОТТАЛКИВАЙСЯ ОТ ЭТОГО. ВЫВЕДИ ЕГО НА КОНСОЛЬ.

}



// функции для навигации по кнопкам
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
