#ifndef ADD_TEST_H
#define ADD_TEST_H

#include <QDialog>
namespace Ui {
class Add_test;
}

class Add_test : public QDialog
{
    Q_OBJECT

public:
    explicit Add_test(QWidget *parent = 0);
    ~Add_test();


signals:
    void menuWindow();

private slots:
    void on_edit_mode_clicked();

private:
    Ui::Add_test *ui;
};

#endif // ADD_TEST_H
