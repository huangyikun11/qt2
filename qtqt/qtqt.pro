#-------------------------------------------------
#
# Project created by QtCreator 2024-05-19T00:40:09
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = qtqt
TEMPLATE = app

CONFIG += resources_big

SOURCES += main.cpp\
        mainwindow.cpp \
    fitplan.cpp \
    fitplansp.cpp \
    dongzuoku.cpp \
    tianjiadongzuo.cpp

HEADERS  += mainwindow.h \
    fitplan.h \
    fitplansp.h \
    dongzuoku.h \
    tianjiadongzuo.h


FORMS    += mainwindow.ui \
    fitplan.ui \
    fitplansp.ui \
    dongzuoku.ui \
    tianjiadongzuo.ui

RESOURCES += \
    res.qrc
