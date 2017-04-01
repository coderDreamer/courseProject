#include "user_window.h"
#include "ui_user_window.h"

User_Window::User_Window(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::User_Window)
{
    ui->setupUi(this);
    setMinimumSize(350,505);

    // Database Stuff
   // loginFormObject.DataBaseConnection();














}

User_Window::~User_Window()
{
    delete ui;
}


//void User_Window::on_login_enter_clicked() {
//    this->close();
//    emit LoginWindow();
//}
