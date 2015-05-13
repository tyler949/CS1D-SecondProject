#include "adminlogin.h"
#include "ui_adminlogin.h"
#include "graph_class.h"
#include "adminmain.h"

adminlogin::adminlogin(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::adminlogin)
{
    ui->setupUi(this);
}

adminlogin::adminlogin(QWidget *parent, QVector<baseball_team*> tms) :
    QWidget(parent),
    ui(new Ui::adminlogin)
{
    ui->setupUi(this);

    teams = tms;
}

adminlogin::~adminlogin()
{
    delete ui;
}

void adminlogin::on_cancelButton_clicked()
{
    this->close();
}

void adminlogin::on_loginButton_clicked()
{
    if(ui->enterUser->text() == "username" && ui->enterPass->text() == "password")
    {
        adminMain *newAdmin = new adminMain;
        newAdmin->show();
        this->close();
    }
}
