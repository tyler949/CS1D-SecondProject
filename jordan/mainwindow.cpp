#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "stadiumswindow.h"
#include "trip.h"
#include "adminlogin.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    build new_build;
    new_build.read_in();

    teams = new_build.get_built();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_viewStadiums_clicked()
{
    stadiumswindow *stadiumsList = new stadiumswindow(NULL, teams);
    stadiumsList->show();
    this->close();
}

void MainWindow::on_planTrip_clicked()
{
    trip *newTrip = new trip(NULL, teams);
    newTrip->show();
    this->close();
}

void MainWindow::on_adminLogin_clicked()
{
    adminlogin *newLogin = new adminlogin(NULL, teams);
    newLogin->show();
}

void MainWindow::on_quitMain_clicked()
{
    this->close();
}
