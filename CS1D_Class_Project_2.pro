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
    baseball_team_class.cpp \
    baseball_stadium_class.cpp \
    souvenir_class.cpp \
    user_class.cpp \
    sort_data.cpp \
    undirected_graph_class.cpp \
    write_stadiums_to_file.cpp \
    read_stadiums_from_file.cpp


HEADERS  += mainwindow.h \
    baseball_team_class.h \
    baseball_stadium_class.h \
    souvenir_class.h \
    user_class.h \
    sort_data.h \
    undirected_graph_class.h

FORMS    += mainwindow.ui

DISTFILES += \
    stadium_data.txt
