#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <login_form.h>
#include <register_form.h>
#include <add_test.h>
#include <QPushButton>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();  

private slots:
    void on_login_button_clicked(); // Slot for LogIn button on the Welcome Window
    void on_register_button_clicked(); // Slot for Register button on the Welcome Window
    void on_edit_mode_clicked(); //Slot for Edit Window

private:
    Ui::Widget *ui;
    Login_Form *loginWindow; //LogIn Window
    Register_Form *registerWindow; // Registration Window
    Add_test *menuWindow; // Edit Window
};

#endif // WIDGET_H
