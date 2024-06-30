#-------------------------------------------------
#
# Project created by QtCreator 2024-05-28T16:50:34
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = recipe
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += main.cpp\
    menu3.cpp \
    menu4.cpp \
        widget.cpp \
    menu1.cpp \
    menu2.cpp \
    record.cpp \
    check.cpp

HEADERS  += widget.h \
    menu1.h \
    menu2.h \
    menu3.h \
    menu4.h \
    record.h \
    check.h

FORMS    += widget.ui \
    menu1.ui \
    menu2.ui \
    menu3.ui \
    menu4.ui \
    record.ui \
    check.ui

RESOURCES += \
    资源文件.qrc \
    resource.qrc

DISTFILES +=
