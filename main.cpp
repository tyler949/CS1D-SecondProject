#include "mainwindow.h"
#include "baseball_stadium_class.h"
#include "baseball_team_class.h"
#include "headers.h"
#include <QApplication>

int main(int argc, char *argv[])
{   
    QApplication a(argc, argv);
    MainWindow w;

    w.show();

    return a.exec();
}
