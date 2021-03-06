#ifndef USER_WINDOW_H
#define USER_WINDOW_H

#include <QDialog>
#include <QtSql>
#include <QString>
#include <dbmanager.h>


namespace Ui {
class User_Window;
}

class User_Window : public QDialog
{
    Q_OBJECT

public:
    explicit User_Window(QWidget *parent = 0);
    ~User_Window();


signals:
    void LoginWindow();

private:
    Ui::User_Window *ui;

};

#endif // USER_WINDOW_H
