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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_User_Window
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;

    void setupUi(QDialog *User_Window)
    {
        if (User_Window->objectName().isEmpty())
            User_Window->setObjectName(QStringLiteral("User_Window"));
        User_Window->resize(400, 300);
        User_Window->setStyleSheet(QStringLiteral(""));
        gridLayout = new QGridLayout(User_Window);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(User_Window);
        label->setObjectName(QStringLiteral("label"));
        label->setEnabled(true);
        label->setStyleSheet(QLatin1String("font-weight: bold;\n"
"font-size: 16px;"));
        label->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        label->setMargin(20);

        verticalLayout->addWidget(label);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        retranslateUi(User_Window);

        QMetaObject::connectSlotsByName(User_Window);
    } // setupUi

    void retranslateUi(QDialog *User_Window)
    {
        User_Window->setWindowTitle(QApplication::translate("User_Window", "Smarter", 0));
        label->setText(QApplication::translate("User_Window", "\320\224\320\276\321\201\321\202\321\203\320\277\320\275\321\213\320\265 \320\277\321\200\320\265\320\264\320\274\320\265\321\202\321\213", 0));
    } // retranslateUi

};

namespace Ui {
    class User_Window: public Ui_User_Window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USER_WINDOW_H
