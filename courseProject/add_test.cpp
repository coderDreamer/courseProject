#include "add_test.h"
#include "ui_add_test.h"

Add_test::Add_test(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Add_test)
{
    ui->setupUi(this);

    //connect(ui->enter_button, SIGNAL (released()), this, SLOT (Registration())); // the function below

}

Add_test::~Add_test()
{
    delete ui;
}

void Add_test::on_edit_mode_clicked() {
    this->close();
    emit menuWindow();
}
