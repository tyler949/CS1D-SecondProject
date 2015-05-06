#include "view_stadiums.h"
#include "headers.h"
#include "ui_view_stadiums.h"

view_stadiums::view_stadiums(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::view_stadiums)
{
    ui->setupUi(this);
    read_stadiums_from_file(stadiums);
}

view_stadiums::~view_stadiums()
{
    delete ui;
}
