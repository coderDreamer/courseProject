/********************************************************************************
** Form generated from reading UI file 'login_form.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_FORM_H
#define UI_LOGIN_FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Login_Form
{
public:
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_2;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *login_field;
    QLabel *label_2;
    QLineEdit *password_field;
    QTextEdit *textEdit;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QPushButton *login_button;
    QPushButton *login_enter;

    void setupUi(QDialog *Login_Form)
    {
        if (Login_Form->objectName().isEmpty())
            Login_Form->setObjectName(QStringLiteral("Login_Form"));
        Login_Form->resize(400, 300);
        verticalLayout = new QVBoxLayout(Login_Form);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(-1, -1, -1, 40);
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        formLayout->setHorizontalSpacing(10);
        formLayout->setVerticalSpacing(5);
        formLayout->setContentsMargins(70, 0, 70, -1);
        label = new QLabel(Login_Form);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        login_field = new QLineEdit(Login_Form);
        login_field->setObjectName(QStringLiteral("login_field"));

        formLayout->setWidget(0, QFormLayout::FieldRole, login_field);

        label_2 = new QLabel(Login_Form);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        password_field = new QLineEdit(Login_Form);
        password_field->setObjectName(QStringLiteral("password_field"));

        formLayout->setWidget(1, QFormLayout::FieldRole, password_field);


        verticalLayout->addLayout(formLayout);

        textEdit = new QTextEdit(Login_Form);
        textEdit->setObjectName(QStringLiteral("textEdit"));

        verticalLayout->addWidget(textEdit);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        login_button = new QPushButton(Login_Form);
        login_button->setObjectName(QStringLiteral("login_button"));

        horizontalLayout->addWidget(login_button);

        login_enter = new QPushButton(Login_Form);
        login_enter->setObjectName(QStringLiteral("login_enter"));

        horizontalLayout->addWidget(login_enter);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(Login_Form);

        QMetaObject::connectSlotsByName(Login_Form);
    } // setupUi

    void retranslateUi(QDialog *Login_Form)
    {
        Login_Form->setWindowTitle(QApplication::translate("Login_Form", "Dialog", 0));
        label->setText(QApplication::translate("Login_Form", "\320\233\320\276\320\263\320\270\320\275:", 0));
        label_2->setText(QApplication::translate("Login_Form", "\320\237\320\260\321\200\320\276\320\273\321\214:", 0));
        login_button->setText(QApplication::translate("Login_Form", "\320\235\320\260\320\267\320\260\320\264", 0));
        login_enter->setText(QApplication::translate("Login_Form", "\320\222\320\276\320\271\321\202\320\270", 0));
    } // retranslateUi

};

namespace Ui {
    class Login_Form: public Ui_Login_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_FORM_H
