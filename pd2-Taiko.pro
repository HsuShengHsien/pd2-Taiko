#-------------------------------------------------
#
# Project created by QtCreator 2016-05-11T17:39:23
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = pd2-Taiko
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    game.cpp \
    score.cpp \
    dkgen.cpp \
    time.cpp \
    dialog.cpp \
    finalscore.cpp \
    generator.cpp \
    target.cpp

HEADERS  += mainwindow.h \
    game.h \
    score.h \
    dkgen.h \
    time.h \
    dialog.h \
    finalscore.h \
    generator.h \
    target.h

FORMS    += mainwindow.ui

RESOURCES += \
    resource.qrc
