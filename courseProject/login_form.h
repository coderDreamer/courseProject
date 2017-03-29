#ifndef LOGIN_FORM_H
#define LOGIN_FORM_H

#include <QDialog>
#include <QtSql>
#include <vector>

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

    void DataBaseConnection() {
        QSqlDatabase db;
        db = QSqlDatabase::addDatabase("QSQLITE");
        db.setDatabaseName("/home/ben/project/course/main_database");
        if (!db.open()) {
                qDebug() << "Error. Can't open the database...";
            }
    }



signals:
    void LoginWindow();
    void WelcomeWindow();  // Сигнал для первого окна на открытие

private slots:
    void transfer_login();
    // Слот-обработчик нажатия кнопки
    void on_login_button_clicked();
    //void ifLoginCorrect();

private:
    Ui::Login_Form *ui;
    QString login_value, pswd_value; // переменные с введенными логином и паролем
    // формируем запросы к БД
    //QSqlQuery *databaseQuery, *countTableStrings;
    vector <QString> studentsDataVector = {}; // вектор, содержащий все данные из таблицы students
    int db_columns = 8, i = 0, recordsNumber = 0;




};

#endif // LOGIN_FORM_H
