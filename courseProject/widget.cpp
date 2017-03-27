#include "widget.h"
#include "ui_widget.h"

//Here I'm gonna start my course project.

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    //LoginWindow = new Login_Form();
    RegisterWindow = new Register_Form();

    //connect(ui->login_button, SIGNAL (released()), this, SLOT (transfer_login()));
    connect(ui->exit_button, SIGNAL (released()), this, SLOT (close()));
    connect(ui->registration_button, SIGNAL (released()), this, SLOT (transfer_register()));


    // Инициализируем второе окно
        loginWindow = new Login_Form();
        // подключаем к слоту запуска главного окна по кнопке во втором окне
        connect(loginWindow, &Login_Form::WelcomeWindow, this, &Widget::show);

        // Инициализируем третье окно
        //thirdWindow = new Login_Form();
        // подключаем к слоту запуска главного окна по кнопке в третьем окне
        //connect(thirdWindow, &Login_Form::firstWindow, this, &Widget::show);

}

//void Widget::transfer_login() {
//    LoginWindow->show();
//    this->close();
//}

void Widget::transfer_register() {
    RegisterWindow->show();
    this->close();
}
void Widget::on_login_button_clicked()
{
    loginWindow->show();  // Показываем второе окно
    this->close();    // Закрываем основное окно
}

//void Widget::on_pushButton_2_clicked()
//{
//    thirdWindow->show();  // Показываем третье окно
//    this->close();    // Закрываем основное окно
//}

Widget::~Widget()
{
    delete ui;
}
