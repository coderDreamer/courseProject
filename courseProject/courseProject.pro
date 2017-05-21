#-------------------------------------------------
#
# Project created by QtCreator 2017-03-25T02:57:04
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = courseProject
TEMPLATE = app


SOURCES += main.cpp\
        widget.cpp \
    login_form.cpp \
    register_form.cpp \
    user_window.cpp \
    add_test.cpp

HEADERS  += widget.h \
    login_form.h \
    register_form.h \
    user_window.h \
    add_test.h

FORMS    += widget.ui \
    login_form.ui \
    register_form.ui \
    user_window.ui \
    add_test.ui
