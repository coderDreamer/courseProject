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
    register_form.cpp

HEADERS  += widget.h \
    login_form.h \
    register_form.h

FORMS    += widget.ui \
    login_form.ui \
    register_form.ui
