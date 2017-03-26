#include "widget.h"
#include "ui_widget.h"

//Here I'm gonna start my course project.

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    LoginWindow = new Login_Form();
    RegisterWindow = new Register_Form();

    connect(ui->login_button, SIGNAL (released()), this, SLOT (transfer_login()));
    connect(ui->exit_button, SIGNAL (released()), this, SLOT (close()));
    connect(ui->registration_button, SIGNAL (released()), this, SLOT (transfer_register()));

}

void Widget::transfer_login() {
    LoginWindow->show();
    this->close();
}

void Widget::transfer_register() {
    RegisterWindow->show();
    this->close();
}

Widget::~Widget()
{
    delete ui;
}
