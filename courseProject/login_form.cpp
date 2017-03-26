#include "login_form.h"
#include "ui_login_form.h"

Login_Form::Login_Form(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Login_Form)
{
    ui->setupUi(this);



}

void Login_Form::transfer_login() {
    this->close();
    emit LoginWindow();
}


Login_Form::~Login_Form()
{
    delete ui;
}



