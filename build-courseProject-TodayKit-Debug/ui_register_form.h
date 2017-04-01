/********************************************************************************
** Form generated from reading UI file 'register_form.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTER_FORM_H
#define UI_REGISTER_FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Register_Form
{
public:
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *nameLine;
    QLineEdit *lastnameLine;
    QLineEdit *facultyLine;
    QLineEdit *groupLine;
    QLineEdit *emailLine;
    QLineEdit *loginLine;
    QLineEdit *passwordLine;
    QSpacerItem *spacer_del;
    QLabel *register_label;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *register_button;
    QPushButton *enter_button;

    void setupUi(QDialog *Register_Form)
    {
        if (Register_Form->objectName().isEmpty())
            Register_Form->setObjectName(QStringLiteral("Register_Form"));
        Register_Form->resize(320, 394);
        verticalLayout_3 = new QVBoxLayout(Register_Form);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(-1, -1, -1, 25);
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(-1, -1, 25, -1);
        label = new QLabel(Register_Form);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        label_2 = new QLabel(Register_Form);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(Register_Form);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout->addWidget(label_3);

        label_4 = new QLabel(Register_Form);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout->addWidget(label_4);

        label_5 = new QLabel(Register_Form);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout->addWidget(label_5);

        label_6 = new QLabel(Register_Form);
        label_6->setObjectName(QStringLiteral("label_6"));

        verticalLayout->addWidget(label_6);

        label_7 = new QLabel(Register_Form);
        label_7->setObjectName(QStringLiteral("label_7"));

        verticalLayout->addWidget(label_7);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        nameLine = new QLineEdit(Register_Form);
        nameLine->setObjectName(QStringLiteral("nameLine"));

        verticalLayout_2->addWidget(nameLine);

        lastnameLine = new QLineEdit(Register_Form);
        lastnameLine->setObjectName(QStringLiteral("lastnameLine"));

        verticalLayout_2->addWidget(lastnameLine);

        facultyLine = new QLineEdit(Register_Form);
        facultyLine->setObjectName(QStringLiteral("facultyLine"));

        verticalLayout_2->addWidget(facultyLine);

        groupLine = new QLineEdit(Register_Form);
        groupLine->setObjectName(QStringLiteral("groupLine"));

        verticalLayout_2->addWidget(groupLine);

        emailLine = new QLineEdit(Register_Form);
        emailLine->setObjectName(QStringLiteral("emailLine"));

        verticalLayout_2->addWidget(emailLine);

        loginLine = new QLineEdit(Register_Form);
        loginLine->setObjectName(QStringLiteral("loginLine"));

        verticalLayout_2->addWidget(loginLine);

        passwordLine = new QLineEdit(Register_Form);
        passwordLine->setObjectName(QStringLiteral("passwordLine"));
        passwordLine->setEchoMode(QLineEdit::Password);

        verticalLayout_2->addWidget(passwordLine);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout);

        spacer_del = new QSpacerItem(20, 50, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(spacer_del);

        register_label = new QLabel(Register_Form);
        register_label->setObjectName(QStringLiteral("register_label"));
        register_label->setEnabled(false);
        register_label->setStyleSheet(QLatin1String("color: red;\n"
"font-weight: bold;\n"
"font-size: 13px;\n"
"margin-bottom: 20px;"));
        register_label->setAlignment(Qt::AlignCenter);
        register_label->setMargin(0);

        verticalLayout_3->addWidget(register_label);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        register_button = new QPushButton(Register_Form);
        register_button->setObjectName(QStringLiteral("register_button"));

        horizontalLayout_2->addWidget(register_button);

        enter_button = new QPushButton(Register_Form);
        enter_button->setObjectName(QStringLiteral("enter_button"));

        horizontalLayout_2->addWidget(enter_button);


        verticalLayout_3->addLayout(horizontalLayout_2);

        register_label->raise();

        retranslateUi(Register_Form);

        QMetaObject::connectSlotsByName(Register_Form);
    } // setupUi

    void retranslateUi(QDialog *Register_Form)
    {
        Register_Form->setWindowTitle(QApplication::translate("Register_Form", "Dialog", 0));
        label->setText(QApplication::translate("Register_Form", "\320\230\320\274\321\217*:", 0));
        label_2->setText(QApplication::translate("Register_Form", "\320\244\320\260\320\274\320\270\320\273\320\270\321\217*:", 0));
        label_3->setText(QApplication::translate("Register_Form", "\320\244\320\260\320\272\321\203\320\273\321\214\321\202\320\265\321\202*:", 0));
        label_4->setText(QApplication::translate("Register_Form", "\320\223\321\200\321\203\320\277\320\277\320\260*:", 0));
        label_5->setText(QApplication::translate("Register_Form", "\320\255\320\273. \320\277\320\276\321\207\321\202\320\260*:", 0));
        label_6->setText(QApplication::translate("Register_Form", "\320\233\320\276\320\263\320\270\320\275*:", 0));
        label_7->setText(QApplication::translate("Register_Form", "\320\237\320\260\321\200\320\276\320\273\321\214*:", 0));
        register_label->setText(QApplication::translate("Register_Form", "\320\240\320\265\320\263\320\270\321\201\321\202\321\200\320\260\321\206\320\270\321\217 \320\277\321\200\320\276\321\210\320\273\320\260 \321\203\321\201\320\277\320\265\321\210\320\275\320\276.", 0));
        register_button->setText(QApplication::translate("Register_Form", "\320\235\320\260\320\267\320\260\320\264", 0));
        enter_button->setText(QApplication::translate("Register_Form", "\320\227\320\260\321\200\320\265\320\263\320\270\321\201\321\202\321\200\320\270\321\200\320\276\320\262\320\260\321\202\321\214", 0));
    } // retranslateUi

};

namespace Ui {
    class Register_Form: public Ui_Register_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTER_FORM_H
