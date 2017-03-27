#include "register_form.h"
#include "ui_register_form.h"

Register_Form::Register_Form(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Register_Form)
{
    ui->setupUi(this);
}

Register_Form::~Register_Form()
{
    delete ui;
}


void Register_Form::on_register_button_clicked()
{
    this->close();      // Закрываем окно
    emit WelcomeWindow(); // И вызываем сигнал на открытие главного окна
}
