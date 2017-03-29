#ifndef REGISTER_FORM_H
#define REGISTER_FORM_H

#include <QDialog>
#include <login_form.h>

namespace Ui {
class Register_Form;
}

class Register_Form : public QDialog
{
    Q_OBJECT

public:
    explicit Register_Form(QWidget *parent = 0);
    ~Register_Form();


signals:
    void WelcomeWindow();

private slots:
    void on_register_button_clicked();
    void Registration();

private:
    Ui::Register_Form *ui;
    //QString *lineName;
    Login_Form loginFormObject;
};

#endif // REGISTER_FORM_H
