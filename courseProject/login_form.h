#ifndef LOGIN_FORM_H
#define LOGIN_FORM_H

#include <QDialog>
#include <QtSql>
#include <vector>
#include <user_window.h>
#include <dbmanager.h>

using namespace std;

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
    void WelcomeWindow();  // Сигнал для первого окна на открытие

private slots:
    void transfer_login();
    // Слот-обработчик нажатия кнопки
    void on_login_button_clicked();
    void ifLoginCorrect();
    void on_login_enter_correct_clicked(); // Нажатие на кнопку "Войти"

private:
    Ui::Login_Form *ui;
    QVector <QString> studentsDataVector = {}; // вектор, содержащий все данные из таблицы students
    int i = 0;
    bool log_pasCorrect, incorrect;
    User_Window *userWindow; // Окно пользователя
    QString login_value, pswd_value;

};

#endif // LOGIN_FORM_H
