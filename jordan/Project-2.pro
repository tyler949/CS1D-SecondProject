#-------------------------------------------------
#
# Project created by QtCreator 2015-05-10T19:39:16
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Project-2
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    sort_class.cpp \
    graph_class.cpp \
    header.cpp \
    stadiumswindow.cpp \
    stadiumdetails.cpp \
    trip.cpp \
    purchasesouvenirs.cpp \
    checkout.cpp \
    plantrip.cpp \
    adminlogin.cpp \
    adminmain.cpp \
    addstadium.cpp

HEADERS  += mainwindow.h \
    baseball_stadium_class.h \
    baseball_team_class.h \
    souvenir_class.h \
    user_class.h \
    sort_class.h \
    header.h \
    graph_class.h \
    stadiumswindow.h \
    stadiumdetails.h \
    trip.h \
    purchasesouvenirs.h \
    checkout.h \
    plantrip.h \
    adminlogin.h \
    adminmain.h \
    addstadium.h

FORMS    += mainwindow.ui \
    stadiumswindow.ui \
    stadiumdetails.ui \
    trip.ui \
    purchasesouvenirs.ui \
    checkout.ui \
    plantrip.ui \
    adminlogin.ui \
    adminmain.ui \
    addstadium.ui

DISTFILES += \
    stadium_data.txt \
    map_data.txt \
    souvenir_data.txt
