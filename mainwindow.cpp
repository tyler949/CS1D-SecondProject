#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->page_main_window->show();


    userType = 'n';
}

void MainWindow::setUser(char type)
{
    userType = type;
}

char MainWindow::getUser()
{
    return userType;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_planTrip_clicked()
{
    ui->page_main_window->hide();
    ui->page_plan_trip->show();
}

void MainWindow::on_backToMain_clicked()
{
    ui->page_view_stadiums->hide();
    ui->page_main_window->show();
}

void MainWindow::on_viewTheList_clicked()
{
    ui->page_main_window->hide();
    ui->page_view_stadiums->show();

}

void MainWindow::on_backToMain2_clicked()
{
    ui->page_plan_trip->hide();
    ui->page_main_window->show();
}

void MainWindow::on_adminLogin_clicked()
{
    ui->page_main_window->hide();

    if(userType == 'n')
    {
        ui->page_admin_login->show();
    }
    else if (userType == 'a')
    {
        ui->page_admin_login->show();
    }

    ui->userNameLine->setFocus();
}

void MainWindow::on_quit_clicked()
{
     this->close();
}



void MainWindow::on_backToMain_2_clicked()
{
//    ui->page_admin_login_success_2->hide();
//    ui->page_main_window->show();
}

void MainWindow::on_login_clicked()
{
        // admin credentials!!
        if (ui->userNameLine->text() == "admin" &&    (ui->passwordLine->text() == "password"
                                                    || ui->passwordLine->text() == "admin"))
        {
            qDebug() << "login success";
            userType = 'a'; //set user to admin

            //restore to previous state
            ui->passwordLine->clear();
            ui->userNameLine->clear();
            ui->userNameLine->setFocus();


            // GRANT ACCESS TO ADMIN WIDGET
//            ui->page_admin_login->hide();
            QMessageBox::information(this, "Log-in was successful", "success!");
        }
        else
        {
            QMessageBox::information(this, "Log-in Failed", "invalid username or password");
        }
}

void MainWindow::on_cancel_clicked()
{
     ui->page_admin_login->hide();
     ui->page_main_window->show();
}
