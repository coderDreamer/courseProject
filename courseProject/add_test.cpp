#include "add_test.h"
#include "ui_add_test.h"
#include <QtSql>
#include <QString>
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

Add_test::Add_test(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Add_test)
{
    ui->setupUi(this);

    //connect(ui->enter_button, SIGNAL (released()), this, SLOT (Registration())); // the function below
    ui->add_condition->hide();
    database_connect(); // подключение к бд

    connect(ui->add_open, SIGNAL (released()), this, SLOT (add_task_open()));
    connect(ui->add_close, SIGNAL (released()), this, SLOT (add_task_close()));

}

Add_test::~Add_test()
{
    delete ui;
}

void Add_test::on_edit_mode_clicked() {
    this->close();
    emit menuWindow();
}
void Add_test::add_task_open() {
    QSqlQuery databaseQuery_open;
    // введеные в полях значения
    QString openQuestion = ui->open_q1->text(),
            openVersion1 = ui->open_ver1->text(),
            openVersion2 = ui->open_ver2->text(),
            openVersion3 = ui->open_ver3->text(),
            openVersion4 = ui->open_ver4->text();

    // here is gonna be checkboxes stuff

    if(ui->ver_check1->isChecked()) { checkbox_value = 1; }
    if(ui->ver_check2->isChecked()) { checkbox_value = 2; }
    if(ui->ver_check3->isChecked()) { checkbox_value = 3; }
    if(ui->ver_check4->isChecked()) { checkbox_value = 4; }
    if(ui->ver_check1->isChecked() && ui->ver_check2->isChecked()) { checkbox_value = 12; }
    if(ui->ver_check1->isChecked() && ui->ver_check3->isChecked()) { checkbox_value = 13; }
    if(ui->ver_check1->isChecked() && ui->ver_check4->isChecked()) { checkbox_value = 14; }
    if(ui->ver_check2->isChecked() && ui->ver_check3->isChecked()) { checkbox_value = 23; }
    if(ui->ver_check2->isChecked() && ui->ver_check4->isChecked()) { checkbox_value = 12; }
    if(ui->ver_check3->isChecked() && ui->ver_check4->isChecked()) { checkbox_value = 34; }
    if(ui->ver_check1->isChecked() && ui->ver_check2->isChecked() && ui->ver_check3->isChecked()) { checkbox_value = 123; }
    if(ui->ver_check1->isChecked() && ui->ver_check2->isChecked() && ui->ver_check4->isChecked()) { checkbox_value = 124; }
    if(ui->ver_check2->isChecked() && ui->ver_check3->isChecked() && ui->ver_check4->isChecked()) { checkbox_value = 234; }
    if(ui->ver_check1->isChecked() && ui->ver_check2->isChecked() &&
       ui->ver_check3->isChecked() && ui->ver_check4->isChecked()) { checkbox_value = 1234; }

    open_solut = QString::number(checkbox_value);
    cout << "Smarter(system): Добавлено новое задание(откр. форма):" << endl;
    cout << "Вопрос:" << openQuestion.toUtf8().constData() << endl;
    cout << "Ответ 1:" << openVersion1.toUtf8().constData() << endl;
    cout << "Ответ 2:" << openVersion2.toUtf8().constData() << endl;
    cout << "Ответ 3:" << openVersion3.toUtf8().constData() << endl;
    cout << "Ответ 4:" << openVersion4.toUtf8().constData() << endl;
    cout << "Правильный ответ:" << checkbox_value << endl;
    cout << "---------------------------------------------------------------------------------" << endl;

    if(openQuestion.isEmpty() || openVersion1.isEmpty() || openVersion2.isEmpty() || openVersion3.isEmpty() ||
            openVersion4.isEmpty()) { add_label_failed(); }
    else { add_label_success(); }

    databaseQuery_open.exec("INSERT INTO tasks_open (question, version1, version2, version3, version4, solution) "
                                "VALUES ('"+openQuestion+"', '"+openVersion1+"', '"+openVersion2+"', '"+openVersion3+"', "
                                        "'"+openVersion4+"', '"+open_solut+"')");

}

void Add_test::add_task_close() {

    QSqlQuery databaseQuery_close;
    // считываем с полей
    QString closeQuestion = ui->close_q1->text(),
            closeVersion = ui->close_ver->text();

    if(closeQuestion.isEmpty() || closeVersion.isEmpty()) { add_label_failed(); }
    else { add_label_success(); }

    // вносим введенные значения полей в таблицу tasks_close
    databaseQuery_close.exec("INSERT INTO tasks_close (question, solution) "
                                "VALUES ('"+closeQuestion+"', '"+closeVersion+"')");

    cout << "Smarter(system): Добавлено новое задание(закр. форма):" << endl;
    cout << "Вопрос:" << closeQuestion.toUtf8().constData() << endl;
    cout << "Правильный ответ:" << closeVersion.toUtf8().constData() << endl;
    cout << "------------------------------------------------------" << endl;
}
void Add_test::add_label_success() {
    ui->add_condition->setText("Вопрос успешно добавлен");
    ui->add_condition->setStyleSheet("color: green; font-weight: bold; font-size: 13px;");
    ui->add_condition->show();
    ui->open_q1->clear();
    ui->open_ver1->clear();
    ui->open_ver2->clear();
    ui->open_ver3->clear();
    ui->open_ver4->clear();
    ui->close_q1->clear();
    ui->close_ver->clear();
}
void Add_test::add_label_failed() {
    ui->add_condition->setText("Заполните все поля");
    ui->add_condition->setStyleSheet("color: red; font-weight: bold; font-size: 13px;");
    ui->add_condition->show();
    cout << "Eror: Smarter(system): Новое задание не добавлено:" << endl;
    cout << "Reason: поля не заполнены" << endl;
    cout << "---------------------------------------------------------------------------------" << endl;
}
