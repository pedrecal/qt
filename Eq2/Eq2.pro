#-------------------------------------------------
#
# Project created by QtCreator 2015-10-25T17:31:05
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets printsupport

TARGET = Eq2
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    qcustomplot.cpp \
    loadimg.cpp

HEADERS  += mainwindow.h \
    qcustomplot.h \
    loadimg.h

FORMS    += mainwindow.ui
