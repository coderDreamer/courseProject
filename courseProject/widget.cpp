#include "widget.h"
#include "ui_widget.h"

//Here I'm gonna start my course project.

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);


        // Initializing LogIn Window
        loginWindow = new Login_Form();
        // подключаем к слоту запуска главного окна по кнопке во втором окне
        connect(loginWindow, &Login_Form::WelcomeWindow, this, &Widget::show);

        // Initializing Registration Window
        registerWindow = new Register_Form();
        connect(registerWindow, &Register_Form::WelcomeWindow, this, &Widget::show);

        // Exit Button closes the Welcome Window
        connect(ui->exit_button, SIGNAL (released()), this, SLOT (close()));

}


void Widget::on_login_button_clicked()
{
    loginWindow->show();  // Show LogIn Window
    this->close();    // Close current Window
}
void Widget::on_register_button_clicked() {
    registerWindow->show();
    this->close();
}



Widget::~Widget()
{
    delete ui;
}
