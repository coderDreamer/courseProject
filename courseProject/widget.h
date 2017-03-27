#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <login_form.h>
#include <register_form.h>
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
    void transfer_register();
    void on_login_button_clicked(); // Slot for LogIn button on the Welcome Window

private:
    Ui::Widget *ui;
    Register_Form *RegisterWindow;
    Login_Form *loginWindow; //LogIn Window
};

#endif // WIDGET_H
