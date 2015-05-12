#include "mainwindow.h"
#include "graph_class.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    QVector<baseball_team*> teams;
    build new_build;

    new_build.read_in();
    teams = new_build.get_built();

    graph new_graph(teams);

    return a.exec();
}
