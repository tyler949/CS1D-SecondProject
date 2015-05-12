#include "plantrip.h"
#include "ui_plantrip.h"

plantrip::plantrip(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::plantrip)
{
    ui->setupUi(this);
}

plantrip::plantrip(QWidget *parent, QVector<baseball_team*> tms, QVector<baseball_team*> des) :
    QWidget(parent),
    ui(new Ui::plantrip)
{
    teams = tms;
    destinations = des;

    graph new_graph(tms);
    display = new_graph.prims();

    ui->setupUi(this);

    ui->visitAll->setChecked(true);

    redisplay();

}

plantrip::~plantrip()
{
    delete ui;
}

void plantrip::on_visitAll_clicked()
{

}

void plantrip::on_visitSome_clicked()
{

}

void plantrip::on_returnButton_clicked()
{
    this->close();
}

void plantrip::on_startButton_clicked()
{

}

void plantrip::redisplay()
{
    ui->tripTable->clear();

    QStringList titles;
    titles << "From" << "To" << "Distance";

    ui->tripTable->setColumnCount(3);
    ui->tripTable->setColumnWidth(0, 200);
    ui->tripTable->setColumnWidth(1, 200);
    ui->tripTable->setColumnWidth(2, 80);
    ui->tripTable->setRowCount(display.size() + 1);
    ui->tripTable->setHorizontalHeaderLabels(titles);
    ui->tripTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tripTable->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tripTable->setSelectionMode(QAbstractItemView::SingleSelection);

    for(int i = 0; i < display.size(); i++)
    {
        ui->tripTable->setItem(i, 0, new QTableWidgetItem(display.at(i)->get_origin()->get_team()->get_stadium_name()));
        ui->tripTable->setItem(i, 1, new QTableWidgetItem(display.at(i)->get_destination()->get_team()->get_stadium_name()));
        ui->tripTable->setItem(i, 2, new QTableWidgetItem(QString::number(display.at(i)->get_weight()) + " mi."));
    }

    int i;
    long total = 0;

    for(i = 0; i < display.size(); i++)
    {
        total = total + display.at(i)->get_weight();
    }

    qDebug() << total;

    ui->tripTable->setItem(i, 0, new QTableWidgetItem("Total Distance:"));
    ui->tripTable->setItem(i, 1, new QTableWidgetItem(""));
    ui->tripTable->setItem(i, 2, new QTableWidgetItem(QString::number(total) + " mi."));

}
