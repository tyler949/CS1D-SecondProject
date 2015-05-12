#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "graph_class.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_viewStadiums_clicked();
    void on_planTrip_clicked    ();
    void on_adminLogin_clicked  ();
    void on_quitMain_clicked    ();

private:
    Ui::MainWindow *ui;
    QVector<baseball_team*> teams;
};

#endif
