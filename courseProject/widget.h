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
    void transfer_login();
    void transfer_register();

private:
    Ui::Widget *ui;
    Login_Form *LoginWindow;
    Register_Form *RegisterWindow;
};

#endif // WIDGET_H
