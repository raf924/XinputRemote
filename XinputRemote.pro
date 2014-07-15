#-------------------------------------------------
#
# Project created by QtCreator 2014-07-15T21:19:13
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = XinputRemote
TEMPLATE = app


SOURCES += main.cpp\
        widget.cpp \
    xboxcontroller.cpp

HEADERS  += widget.h \
    xboxcontroller.h

FORMS    += widget.ui
