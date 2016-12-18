#-------------------------------------------------
#
# Project created by QtCreator 2016-12-17T18:23:06
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = wfmuPlayer
TEMPLATE = app


SOURCES += main.cpp\
        wfmuwindow.cpp

HEADERS  += wfmuwindow.h

FORMS    += wfmuwindow.ui

QT += core gui
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets multimedia

RESOURCES +=  resources.qrc

RC_FILE = wfmu.rc
