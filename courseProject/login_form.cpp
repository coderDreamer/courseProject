#include "login_form.h"
#include "ui_login_form.h"
#include <QtSql>
#include <QString>
#include <vector>
#include <iterator>
#include <string>

using namespace std;

Login_Form::Login_Form(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Login_Form)
{
    //setMinimumSize(250,205);

    ui->setupUi(this);

    ui->login_label->hide();
    ui->login_enter_correct->hide();
    userWindow = new User_Window();



    /*====================================================================
                                База Данных
    ====================================================================*/
//    static const QString path = "/home/ben/project/course/main_database";
//        DbManager db(path);
    //QSqlDatabase db = QSqlDatabase::database("my_db_connection");
        //QSqlQuery databaseQuery(db);

//    QSqlQuery databaseQuery;
//    databaseQuery.prepare("SELECT * FROM students");

//        //if (db.isOpen())
//        //{
//           // QSqlQuery databaseQuery;
//            //databaseQuery.exec("SELECT * FROM students");

//            // обход всей таблицы
//            while(databaseQuery.next()) {
//            QString login = databaseQuery.value(6).toString();
//            QString password = databaseQuery.value(7).toString();

//            // заполняем вектор значениями из таблицы
//            studentsDataVector.push_back(login);
//            studentsDataVector.push_back(password);
//            }
//            // вызываем ifLoginCorrect при нажатии на кнопку входа
//            connect(ui->login_enter, SIGNAL (released()), this, SLOT (ifLoginCorrect()));
//        //}


}

    /*====================================================================
                               конец Базы Данных
    ====================================================================*/

// функция для авторизации(на этом этапе просто проверка)
void Login_Form::ifLoginCorrect() {


    login_value = ui->login_field->text(); // переменные с введенными логином и паролем
    pswd_value = ui->password_field->text();

    // если поля пустые...
    if(login_value == "" || pswd_value == "") {
        ui->login_label->setStyleSheet("font-weight: bold; color: red;");
        ui->login_label->setText("Заполните поля");
        ui->login_label->show();
    }
    else {
        // сверяем введенные данные с данными из вектора
        for(i = 0; i < studentsDataVector.size(); i++) {
            if(studentsDataVector.at(i) == login_value) {
                for(int g = 0; g < studentsDataVector.size(); g++) {
                    if(studentsDataVector.at(g) == pswd_value) {
                         log_pasCorrect = true;
                         break;
                    }
                }
                break;
            }
        }
    }
    // в зависимости от результата проверки выводим соответствующую надпись
    if(log_pasCorrect == true) {
            ui->login_enter->hide();
            ui->login_enter_correct->show();
            ui->login_label->setStyleSheet("font-weight: bold; color: green;");
            ui->login_label->setText("Пользователь найден");
            ui->login_label->show();
            connect(userWindow, &User_Window::LoginWindow, this, &Login_Form::show);
     }
     // если неверная пара логин/пароль
     if((log_pasCorrect != true) && (login_value != "" && pswd_value != "")) {
            ui->login_label->setStyleSheet("font-weight: bold; color: red;");
            ui->login_label->setText("Неверный логин/пароль");
            ui->login_field->clear();
            ui->password_field->clear();
           ui->login_label->show();
     }


     qDebug() << "Login: " << login_value << "\t" << "Password: " << pswd_value << endl; // some Debug

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
void Login_Form::on_login_enter_correct_clicked() {
    userWindow->show();
    this->close();
}
