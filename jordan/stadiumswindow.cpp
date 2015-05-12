#include "stadiumswindow.h"
#include "ui_stadiumswindow.h"
#include "mainwindow.h"
#include "stadiumdetails.h"

stadiumswindow::stadiumswindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::stadiumswindow)
{
    ui->setupUi(this);
}

stadiumswindow::stadiumswindow(QWidget *parent, QVector<baseball_team*> tms) :
    QWidget(parent),
    ui(new Ui::stadiumswindow)
{
    teams   = tms;
    sorted  = tms;
    league  = MAJOR_LEAGUE;
    sort_by = TEAM_NAME;

    ui->setupUi(this);
    ui->stadiumList->setColumnCount(4);
    ui->stadiumList->setColumnWidth(0, 170);
    ui->stadiumList->setColumnWidth(1, 204);
    ui->stadiumList->setColumnWidth(2, 100);
    ui->stadiumList->setColumnWidth(3, 50);

    ui->bothLeagues->setChecked(true);
    ui->teamName->setChecked(true);

    resort();
}

stadiumswindow::~stadiumswindow()
{
    delete ui;
}

void stadiumswindow::on_americanLeague_clicked()
{
    league = AMERICAN_LEAGUE;
    resort();
}

void stadiumswindow::on_nationalLeague_clicked()
{
    league = NATIONAL_LEAGUE;
    resort();
}

void stadiumswindow::on_bothLeagues_clicked()
{
    league = MAJOR_LEAGUE;
    resort();
}

void stadiumswindow::on_teamName_clicked()
{
    sort_by = TEAM_NAME;
    resort();
}

void stadiumswindow::on_stadiumName_clicked()
{
    sort_by = STADIUM_NAME;
    resort();
}

void stadiumswindow::on_dateOpened_clicked()
{
    sort_by = DATE_OPENED;
    resort();
}

void stadiumswindow::on_grassSurface_clicked()
{
    sort_data new_sort(sorted);

    sorted = new_sort.by_grass_surface(sorted);

    resort();
}

void stadiumswindow::on_detailsButton_clicked()
{
    if(ui->stadiumList->selectedItems().length() != 0)
    {
        QString curr_team = ui->stadiumList->selectedItems().at(0)->text();
        stadiumdetails *stadiumDetails = new stadiumdetails(NULL, teams, curr_team);
        stadiumDetails->show();
    }
}

void stadiumswindow::on_exitList_clicked()
{
    MainWindow *main_window = new MainWindow(NULL);
    main_window->show();
    this->close();
}

void stadiumswindow::resort()
{
    sort_data new_sort(teams);

    sorted.clear();

    switch(sort_by)
    {
    case TEAM_NAME:
        sorted = new_sort.by_team_name(league);
        break;
    case STADIUM_NAME:
        sorted = new_sort.by_stadium_name(league);
        break;
    case DATE_OPENED:
        sorted = new_sort.by_date_opened(league);
        break;
    default:
        qDebug() << "You fucked up. Can't resort.";
    }

    ui->stadiumList->clear();

    QStringList titles;
    QString date;

    ui->stadiumList->setRowCount(sorted.size());
    titles << "Team" << "Home Stadium" << "Date Opened" << "Grass";
    ui->stadiumList->setHorizontalHeaderLabels(titles);
    ui->stadiumList->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->stadiumList->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->stadiumList->setSelectionMode(QAbstractItemView::SingleSelection);

    for(int i = 0; i < sorted.size(); i++)
    {
        ui->stadiumList->setItem(i, 0, new QTableWidgetItem(sorted.at(i)->get_team_name()));
        ui->stadiumList->setItem(i, 1, new QTableWidgetItem(sorted.at(i)->get_stadium_name()));
        ui->stadiumList->setItem(i, 3, new QTableWidgetItem("Y"));

        date = (QString::number(sorted.at(i)->get_month()) + "/"
             +  QString::number(sorted.at(i)->get_day()) + "/"
             +  QString::number(sorted.at(i)->get_year()));
        ui->stadiumList->setItem(i, 2, new QTableWidgetItem(date));
    }
}
