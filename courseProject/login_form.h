#ifndef LOGIN_FORM_H
#define LOGIN_FORM_H

#include <QDialog>

namespace Ui {
class Login_Form;
}

class Login_Form : public QDialog
{
    Q_OBJECT

public:
    explicit Login_Form(QWidget *parent = 0);
    ~Login_Form();

signals:
    void LoginWindow();

private slots:
    void transfer_login();

private:
    Ui::Login_Form *ui;
};

#endif // LOGIN_FORM_H
