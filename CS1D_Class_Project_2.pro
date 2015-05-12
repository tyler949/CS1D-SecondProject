#-------------------------------------------------
#
# Project created by QtCreator 2015-04-28T14:25:53
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = CS1D_Class_Project_2
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    baseball_stadium_class.cpp \
    baseball_team_class.cpp \
    read_stadiums_from_file.cpp \
    view_stadiums.cpp \
    write_stadiums_to_file.cpp \
    sort.cpp \
    souvenir.cpp \
    user.cpp

HEADERS  += mainwindow.h \
    baseball_stadium_class.h \
    baseball_team_class.h \
    headers.h \
    view_stadiums.h \
    sort.h \
    souvenir.h \
    user.h

FORMS    += mainwindow.ui
