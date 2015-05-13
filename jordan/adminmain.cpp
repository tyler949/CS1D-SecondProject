#include "adminmain.h"
#include "ui_adminmain.h"
#include "addstadium.h"

adminMain::adminMain(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::adminMain)
{
    ui->setupUi(this);
}

adminMain::~adminMain()
{
    delete ui;
}

void adminMain::on_addStadium_clicked()
{
    addstadium *addStadium = new addstadium;
    addStadium->show();
}
