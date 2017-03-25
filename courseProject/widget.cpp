#include "widget.h"
#include "ui_widget.h"

//Here I'm gonna start my course project.

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

}

Widget::~Widget()
{
    delete ui;
}
