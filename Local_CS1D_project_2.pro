#-------------------------------------------------
#
# Project created by QtCreator 2015-04-09T19:43:43
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Local_CS1D_project_2
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    baseball_team_class.cpp \
    baseball_stadium_class.cpp \
    read_stadiums_from_file.cpp \
    view_stadiums.cpp \
    write_stadiums_to_file.cpp

HEADERS  += mainwindow.h \
    baseball_team_class.h \
    baseball_stadium_class.h \
    headers.h \
    view_stadiums.h

FORMS    += mainwindow.ui \
    view_stadiums.ui

DISTFILES += \
    stadium_data.txt \
    write_only.txt
