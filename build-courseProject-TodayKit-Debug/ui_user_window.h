/********************************************************************************
** Form generated from reading UI file 'user_window.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USER_WINDOW_H
#define UI_USER_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_User_Window
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QTextEdit *textEdit;

    void setupUi(QDialog *User_Window)
    {
        if (User_Window->objectName().isEmpty())
            User_Window->setObjectName(QStringLiteral("User_Window"));
        User_Window->resize(400, 300);
        User_Window->setStyleSheet(QStringLiteral("background: #dedefe;"));
        verticalLayout_2 = new QVBoxLayout(User_Window);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(15, 15, 15, 15);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(User_Window);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        textEdit = new QTextEdit(User_Window);
        textEdit->setObjectName(QStringLiteral("textEdit"));

        verticalLayout->addWidget(textEdit);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(User_Window);

        QMetaObject::connectSlotsByName(User_Window);
    } // setupUi

    void retranslateUi(QDialog *User_Window)
    {
        User_Window->setWindowTitle(QApplication::translate("User_Window", "Dialog", 0));
        label->setText(QApplication::translate("User_Window", "TextLabel", 0));
    } // retranslateUi

};

namespace Ui {
    class User_Window: public Ui_User_Window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USER_WINDOW_H
