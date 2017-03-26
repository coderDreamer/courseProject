#ifndef REGISTER_FORM_H
#define REGISTER_FORM_H

#include <QDialog>

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
    void RegisterWindow();

private slots:
    void transfer_register();

private:
    Ui::Register_Form *ui;
};

#endif // REGISTER_FORM_H
