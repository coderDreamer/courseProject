#include "register_form.h"
#include "ui_register_form.h"

Register_Form::Register_Form(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Register_Form)
{
    ui->setupUi(this);
}

void Register_Form::transfer_register() {
    this->close();
    emit RegisterWindow();
}


Register_Form::~Register_Form()
{
    delete ui;
}
