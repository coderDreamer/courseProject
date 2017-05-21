#include "add_test.h"
#include "ui_add_test.h"
#include <QtSql>
#include <QString>
#include <iostream>

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

    if(ui->ver_check1->isChecked()) {
        checkbox1_value = 1;
        open_solution += QString::number(checkbox1_value);
    }

    if(ui->ver_check2->isChecked()) {
        checkbox2_value = 2;
        open_solution += QString::number(checkbox2_value);
    }
    if(ui->ver_check3->isChecked()) {
        checkbox3_value = 3;
        open_solution += QString::number(checkbox3_value);
    }
    if(ui->ver_check4->isChecked()) {
        checkbox4_value = 4;
        open_solution += QString::number(checkbox4_value);
    }
    qDebug() << "Solution: " << open_solution << endl;

    if(openQuestion.isEmpty() || openVersion1.isEmpty() || openVersion2.isEmpty() || openVersion3.isEmpty() ||
            openVersion4.isEmpty()) { add_label_failed(); }
    else { add_label_success(); }

    // вносим введенные значения полей в таблицу tasks_open
    databaseQuery_open.exec("INSERT INTO tasks_open (question, version1, version2, version3, version4) "
                                "VALUES ('"+openQuestion+"', '"+openVersion1+"', '"+openVersion2+"', '"+openVersion3+"', "
                                        "'"+openVersion4+"')");
    //open_solution = "";
}
// РАЗОБРАТЬСЯ С ЧЕКБОКСАМИ. БЕЗ НИХ ЗАПИСИ В БАЗУ ДАННЫХ ДОБАВЛЯЮТСЯ. ВО ВТОРУЮ НЕ ДОБАВЛЯЮТСЯ ВОВСЕ.

void Add_test::add_task_close() {
    QSqlQuery databaseQuery_close;
    // считываем с полей
    QString closeQuestion = ui->close_q1->text(),
            closeVersion = ui->close_ver->text();

    if(closeQuestion.isEmpty() || closeVersion.isEmpty()) { add_label_failed(); }
    else { add_label_success(); }

    // вносим введенные значения полей в таблицу tasks_close
    databaseQuery_close.exec("INSERT INTO tasks_close (question, solution) "
                                "VALUES ('"+closeQuestion+"', '"+closeVersion+"'");
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
}
