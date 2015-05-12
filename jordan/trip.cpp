#include "trip.h"
#include "ui_trip.h"
#include "mainwindow.h"
#include "stadiumdetails.h"
#include "purchasesouvenirs.h"
#include "plantrip.h"

trip::trip(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::trip)
{
    ui->setupUi(this);
}

trip::trip(QWidget *parent, QVector<baseball_team*> tms) :
    QWidget(parent),
    ui(new Ui::trip)
{
    teams.clear();
    destinations.clear();
    leftover.clear();
    teams = tms;
    leftover = tms;

    league = MAJOR_LEAGUE;
    sort_by = TEAM_NAME;

    ui->setupUi(this);
    ui->majorLeague->setChecked(true);
    ui->teamName->setChecked(true);

    QStringList titles;

    titles << "Team" << "Home Stadium";

    ui->unadded->setRowCount(teams.size());
    ui->added->setRowCount(teams.size());

    ui->unadded->setColumnCount(2);
    ui->added->setColumnCount(2);

    ui->unadded->setColumnWidth(0, 160);
    ui->unadded->setColumnWidth(1, 160);

    ui->added->setColumnWidth(0, 160);
    ui->added->setColumnWidth(1, 160);

    ui->unadded->setHorizontalHeaderLabels(titles);
    ui->added->setHorizontalHeaderLabels(titles);

    ui->unadded->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->added->setSelectionBehavior(QAbstractItemView::SelectRows);

    ui->unadded->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->added->setSelectionMode(QAbstractItemView::SingleSelection);

    ui->unadded->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->added->setEditTriggers(QAbstractItemView::NoEditTriggers);

    for(int i = 0; i < teams.size(); i++)
    {
        ui->unadded->setItem(i, 0, new QTableWidgetItem(teams.at(i)->get_team_name()));
        ui->unadded->setItem(i, 1, new QTableWidgetItem(teams.at(i)->get_stadium_name()));
    }

    resort();
}

trip::~trip()
{
    delete ui;
}

void trip::on_addButton_clicked()
{
    if(ui->unadded->selectedItems().length() != 0)
    {
        QString curr_team = ui->unadded->selectedItems().at(0)->text();
        baseball_team *to_add = new baseball_team;
        to_add = with_team(curr_team);
        destinations.push_back(to_add);
        delete_in(curr_team, leftover);
        resort();
    }
}

void trip::on_removeButton_clicked()
{
    if(ui->added->selectedItems().length() != 0)
    {
        QString curr_team = ui->added->selectedItems().at(0)->text();
        baseball_team *to_add = new baseball_team;
        to_add = with_team(curr_team);
        leftover.push_back(to_add);
        delete_in(curr_team, destinations);
        resort();
    }
}

void trip::on_detailsButton_clicked()
{
    if(ui->unadded->selectedItems().length() != 0)
    {
        QString curr_team = ui->unadded->selectedItems().at(0)->text();
        stadiumdetails *stadiumDetails = new stadiumdetails(NULL, teams, curr_team);
        stadiumDetails->show();
    }

    if(ui->added->selectedItems().length() != 0)
    {
        QString curr_team = ui->added->selectedItems().at(0)->text();
        stadiumdetails *stadiumDetails = new stadiumdetails(NULL, teams, curr_team);
        stadiumDetails->show();
    }
}

void trip::on_americanLeague_clicked()
{
    league = AMERICAN_LEAGUE;
    resort();
}

void trip::on_nationalLeague_clicked()
{
    league = NATIONAL_LEAGUE;
    resort();
}

void trip::on_majorLeague_clicked()
{
    league = MAJOR_LEAGUE;
    resort();
}

void trip::on_teamName_clicked()
{
    sort_by = TEAM_NAME;
    resort();
}

void trip::on_stadiumName_clicked()
{
    sort_by = STADIUM_NAME;
    resort();
}

void trip::on_dateOpened_clicked()
{
    sort_by = DATE_OPENED;
    resort();
}

void trip::on_finishButton_clicked()
{
    purchasesouvenirs *newSouvenirs = new purchasesouvenirs(NULL, teams, destinations);
    newSouvenirs->show();
    this->close();
}

void trip::on_cancelButton_clicked()
{
    MainWindow *main_window = new MainWindow(NULL);
    main_window->show();
    this->close();
}

void trip::resort()
{
    sort_data new_sort(leftover);

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
        return;
    }

    ui->unadded->clear();
    ui->added->clear();
    QStringList titles;
    titles << "Team" << "Home Stadium";

    ui->unadded->setRowCount(sorted.size());
    ui->unadded->setColumnCount(2);
    ui->unadded->setColumnWidth(0, 160);
    ui->unadded->setHorizontalHeaderLabels(titles);
    ui->unadded->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->unadded->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->unadded->setEditTriggers(QAbstractItemView::NoEditTriggers);

    ui->added->setColumnCount(2);
    ui->added->setColumnWidth(0, 160);
    ui->added->setHorizontalHeaderLabels(titles);
    ui->added->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->added->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->added->setEditTriggers(QAbstractItemView::NoEditTriggers);

    for(int i = 0; i < sorted.size(); i++)
    {
        ui->unadded->setItem(i, 0, new QTableWidgetItem(sorted.at(i)->get_team_name()));
        ui->unadded->setItem(i, 1, new QTableWidgetItem(sorted.at(i)->get_stadium_name()));
    }

    ui->added->setRowCount(destinations.size());

    for(int i = 0; i < destinations.size(); i++)
    {
        ui->added->setItem(i, 0, new QTableWidgetItem(destinations.at(i)->get_team_name()));
        ui->added->setItem(i, 1, new QTableWidgetItem(destinations.at(i)->get_stadium_name()));
    }
}

baseball_team* trip::with_team(QString name)
{
    for(int i = 0; i < teams.size(); i++)
    {
        if(teams.at(i)->get_team_name() == name)
        {
            return teams.at(i);
        }
    }

    return teams.at(0);
}

void trip::delete_in(QString name, QVector<baseball_team*> &tms)
{
    for(int i = 0; i < tms.size(); i++)
    {
        if(tms.at(i)->get_team_name() == name)
        {
            tms.erase(tms.begin() + i);
        }
    }
}

void trip::on_shortestTrip_clicked()
{
    plantrip *newPlan = new plantrip(NULL, teams, destinations);
    newPlan->show();
}
