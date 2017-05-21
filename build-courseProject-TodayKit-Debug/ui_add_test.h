/********************************************************************************
** Form generated from reading UI file 'add_test.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_TEST_H
#define UI_ADD_TEST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Add_test
{
public:
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QCommandLinkButton *open_button;
    QCommandLinkButton *close_button;
    QWidget *open_form_a;
    QVBoxLayout *open_form_area;
    QLabel *label_3;
    QLabel *label_11;
    QHBoxLayout *horizontalLayout;
    QLineEdit *open_q1;
    QLabel *label_8;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QLineEdit *open_ver1;
    QCheckBox *ver_check1;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_5;
    QLineEdit *open_ver2;
    QCheckBox *ver_check2;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QLineEdit *open_ver3;
    QCheckBox *ver_check3;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_7;
    QLineEdit *open_ver4;
    QCheckBox *ver_check4;
    QCommandLinkButton *add_open;
    QLabel *add_condition;
    QWidget *close_form_a;
    QVBoxLayout *close_form_area;
    QLabel *label_9;
    QLineEdit *close_q1;
    QLabel *label_10;
    QLineEdit *close_ver;
    QCommandLinkButton *add_close;

    void setupUi(QDialog *Add_test)
    {
        if (Add_test->objectName().isEmpty())
            Add_test->setObjectName(QStringLiteral("Add_test"));
        Add_test->setWindowModality(Qt::NonModal);
        Add_test->setEnabled(true);
        Add_test->resize(402, 704);
        Add_test->setSizeIncrement(QSize(0, 0));
        Add_test->setStyleSheet(QStringLiteral(""));
        verticalLayout_5 = new QVBoxLayout(Add_test);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(-1, -1, -1, 25);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label = new QLabel(Add_test);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QLatin1String("font-weight: bold;\n"
"font-size: 16px;\n"
""));
        label->setAlignment(Qt::AlignCenter);
        label->setMargin(0);

        verticalLayout_2->addWidget(label);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(-1, 25, -1, 10);
        label_2 = new QLabel(Add_test);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setStyleSheet(QLatin1String("font-weight: bold;\n"
"font-size: 13px;"));

        verticalLayout->addWidget(label_2);

        open_button = new QCommandLinkButton(Add_test);
        open_button->setObjectName(QStringLiteral("open_button"));
        open_button->setStyleSheet(QStringLiteral("color: green;"));

        verticalLayout->addWidget(open_button);

        close_button = new QCommandLinkButton(Add_test);
        close_button->setObjectName(QStringLiteral("close_button"));
        close_button->setStyleSheet(QStringLiteral("color: brown;"));

        verticalLayout->addWidget(close_button);


        verticalLayout_2->addLayout(verticalLayout);

        open_form_a = new QWidget(Add_test);
        open_form_a->setObjectName(QStringLiteral("open_form_a"));
        open_form_a->setEnabled(true);
        open_form_a->setStyleSheet(QStringLiteral(""));
        open_form_area = new QVBoxLayout(open_form_a);
        open_form_area->setObjectName(QStringLiteral("open_form_area"));
        label_3 = new QLabel(open_form_a);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setStyleSheet(QLatin1String("font-weight: bold;\n"
"font-size: 12px;"));

        open_form_area->addWidget(label_3);

        label_11 = new QLabel(open_form_a);
        label_11->setObjectName(QStringLiteral("label_11"));

        open_form_area->addWidget(label_11);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        open_q1 = new QLineEdit(open_form_a);
        open_q1->setObjectName(QStringLiteral("open_q1"));

        horizontalLayout->addWidget(open_q1);


        open_form_area->addLayout(horizontalLayout);

        label_8 = new QLabel(open_form_a);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setStyleSheet(QLatin1String("font-weight: bold;\n"
"font-size: 12px;"));

        open_form_area->addWidget(label_8);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_4 = new QLabel(open_form_a);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setStyleSheet(QLatin1String("font-weight: bold;\n"
"font-size: 13px;"));

        horizontalLayout_2->addWidget(label_4);

        open_ver1 = new QLineEdit(open_form_a);
        open_ver1->setObjectName(QStringLiteral("open_ver1"));

        horizontalLayout_2->addWidget(open_ver1);

        ver_check1 = new QCheckBox(open_form_a);
        ver_check1->setObjectName(QStringLiteral("ver_check1"));

        horizontalLayout_2->addWidget(ver_check1);


        open_form_area->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_5 = new QLabel(open_form_a);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setStyleSheet(QLatin1String("font-weight: bold;\n"
"font-size: 13px;"));

        horizontalLayout_3->addWidget(label_5);

        open_ver2 = new QLineEdit(open_form_a);
        open_ver2->setObjectName(QStringLiteral("open_ver2"));

        horizontalLayout_3->addWidget(open_ver2);

        ver_check2 = new QCheckBox(open_form_a);
        ver_check2->setObjectName(QStringLiteral("ver_check2"));

        horizontalLayout_3->addWidget(ver_check2);


        open_form_area->addLayout(horizontalLayout_3);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_6 = new QLabel(open_form_a);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setStyleSheet(QLatin1String("font-weight: bold;\n"
"font-size: 13px;"));

        horizontalLayout_6->addWidget(label_6);

        open_ver3 = new QLineEdit(open_form_a);
        open_ver3->setObjectName(QStringLiteral("open_ver3"));

        horizontalLayout_6->addWidget(open_ver3);

        ver_check3 = new QCheckBox(open_form_a);
        ver_check3->setObjectName(QStringLiteral("ver_check3"));

        horizontalLayout_6->addWidget(ver_check3);


        open_form_area->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_7 = new QLabel(open_form_a);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setStyleSheet(QLatin1String("font-weight: bold;\n"
"font-size: 13px;"));

        horizontalLayout_7->addWidget(label_7);

        open_ver4 = new QLineEdit(open_form_a);
        open_ver4->setObjectName(QStringLiteral("open_ver4"));

        horizontalLayout_7->addWidget(open_ver4);

        ver_check4 = new QCheckBox(open_form_a);
        ver_check4->setObjectName(QStringLiteral("ver_check4"));

        horizontalLayout_7->addWidget(ver_check4);


        open_form_area->addLayout(horizontalLayout_7);

        add_open = new QCommandLinkButton(open_form_a);
        add_open->setObjectName(QStringLiteral("add_open"));
        add_open->setLayoutDirection(Qt::LeftToRight);
        add_open->setStyleSheet(QLatin1String("font-weight: bold;\n"
"font-size: 12px;"));
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../../\320\227\320\260\320\263\321\200\321\203\320\267\320\272\320\270/tick.png"), QSize(), QIcon::Normal, QIcon::Off);
        add_open->setIcon(icon);
        add_open->setCheckable(false);

        open_form_area->addWidget(add_open);

        add_condition = new QLabel(open_form_a);
        add_condition->setObjectName(QStringLiteral("add_condition"));
        add_condition->setAlignment(Qt::AlignCenter);

        open_form_area->addWidget(add_condition);


        verticalLayout_2->addWidget(open_form_a);

        close_form_a = new QWidget(Add_test);
        close_form_a->setObjectName(QStringLiteral("close_form_a"));
        close_form_area = new QVBoxLayout(close_form_a);
        close_form_area->setObjectName(QStringLiteral("close_form_area"));
        label_9 = new QLabel(close_form_a);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setStyleSheet(QLatin1String("font-weight: bold;\n"
"font-size: 12px;"));

        close_form_area->addWidget(label_9);

        close_q1 = new QLineEdit(close_form_a);
        close_q1->setObjectName(QStringLiteral("close_q1"));

        close_form_area->addWidget(close_q1);

        label_10 = new QLabel(close_form_a);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setStyleSheet(QLatin1String("font-weight: bold;\n"
"font-size: 12px;"));

        close_form_area->addWidget(label_10);

        close_ver = new QLineEdit(close_form_a);
        close_ver->setObjectName(QStringLiteral("close_ver"));

        close_form_area->addWidget(close_ver);

        add_close = new QCommandLinkButton(close_form_a);
        add_close->setObjectName(QStringLiteral("add_close"));
        add_close->setIcon(icon);

        close_form_area->addWidget(add_close);


        verticalLayout_2->addWidget(close_form_a);


        verticalLayout_5->addLayout(verticalLayout_2);


        retranslateUi(Add_test);

        QMetaObject::connectSlotsByName(Add_test);
    } // setupUi

    void retranslateUi(QDialog *Add_test)
    {
        Add_test->setWindowTitle(QApplication::translate("Add_test", "\320\240\320\265\320\266\320\270\320\274 \321\200\320\265\320\264\320\260\320\272\321\202\320\270\321\200\320\276\320\262\320\260\320\275\320\270\321\217", 0));
        label->setText(QApplication::translate("Add_test", "\320\240\320\265\320\266\320\270\320\274 \321\200\320\265\320\264\320\260\320\272\321\202\320\270\321\200\320\276\320\262\320\260\320\275\320\270\321\217", 0));
        label_2->setText(QApplication::translate("Add_test", "    \320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\262\320\276\320\277\321\200\320\276\321\201:", 0));
        open_button->setText(QApplication::translate("Add_test", "\320\262 \320\276\321\202\320\272\321\200\321\213\321\202\320\276\320\271 \321\204\320\276\321\200\320\274\320\265", 0));
        close_button->setText(QApplication::translate("Add_test", "\320\262 \320\267\320\260\320\272\321\200\321\213\321\202\320\276\320\271 \321\204\320\276\321\200\320\274\320\265", 0));
        label_3->setText(QApplication::translate("Add_test", "\320\222\320\276\320\277\321\200\320\276\321\201:", 0));
        label_11->setText(QApplication::translate("Add_test", "*\320\277\321\200\320\260\320\262\320\270\320\273\321\214\320\275\321\213\320\271 \320\276\321\202\320\262\320\265\321\202 \320\276\321\202\320\274\320\265\321\207\320\260\320\265\321\202\321\201\321\217 \321\207\320\265\320\272\320\261\320\276\320\272\321\201\320\276\320\274", 0));
        label_8->setText(QApplication::translate("Add_test", "\320\222\320\260\321\200\320\270\320\260\320\275\321\202\321\213 \320\276\321\202\320\262\320\265\321\202\320\276\320\262:", 0));
        label_4->setText(QApplication::translate("Add_test", "1.", 0));
        ver_check1->setText(QString());
        label_5->setText(QApplication::translate("Add_test", "2.", 0));
        ver_check2->setText(QString());
        label_6->setText(QApplication::translate("Add_test", "3.", 0));
        ver_check3->setText(QString());
        label_7->setText(QApplication::translate("Add_test", "4.", 0));
        ver_check4->setText(QString());
        add_open->setText(QApplication::translate("Add_test", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", 0));
        add_open->setDescription(QString());
        add_condition->setText(QApplication::translate("Add_test", "\320\222\320\276\320\277\321\200\320\276\321\201 \321\203\321\201\320\277\320\265\321\210\320\275\320\276 \320\264\320\276\320\261\320\260\320\262\320\273\320\265\320\275 ", 0));
        label_9->setText(QApplication::translate("Add_test", "\320\222\320\276\320\277\321\200\320\276\321\201:", 0));
        label_10->setText(QApplication::translate("Add_test", "\320\236\321\202\320\262\320\265\321\202:", 0));
        add_close->setText(QApplication::translate("Add_test", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", 0));
    } // retranslateUi

};

namespace Ui {
    class Add_test: public Ui_Add_test {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_TEST_H
