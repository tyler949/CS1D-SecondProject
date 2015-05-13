#include "addstadium.h"
#include "ui_addstadium.h"
#include "graph_class.h"

addstadium::addstadium(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::addstadium)
{
    ui->setupUi(this);
}

addstadium::addstadium(QWidget *parent, QVector<baseball_team*> tms) :
    QWidget(parent),
    ui(new Ui::addstadium)
{
    ui->setupUi(this);

    teams = tms;
}

addstadium::~addstadium()
{
}

void addstadium::on_cancelButton_clicked()
{
    this->close();
}

void addstadium::on_addButton_clicked()
{
    QString stadiumName, teamName, streetAddress,
            city, state, zip, boNum, des1, des2;
    int month, day, year, seat1, seat2;
    major_league majorLeague;

    stadiumName = ui->stadiumName->text();
    teamName = ui->teamName->text();

    if(ui->majorLeague->text() == "American League")
    {
        majorLeague = AMERICAN_LEAGUE;
    }
    else if(ui->majorLeague->text() == "National League")
    {
        majorLeague = NATIONAL_LEAGUE;
    }

    streetAddress = ui->streetAdd->text();
    city = ui->city->text();
    state = ui->state->text();
    zip = ui->zip->text();
    boNum = ui->boxOffice->text();
    month = ui->monthOpened->text().toInt();
    day = ui->dayOpened->text().toInt();
    year = ui->yearOpened->text().toInt();
    seat1 = ui->capacityOne->text().toInt();
    des1 = ui->capacityOneDes->text();
    seat2 = ui->capacityTwo->text().toInt();
    des2 = ui->capacityTwoDes->text();

    baseball_team *new_team = new baseball_team(teamName, majorLeague);

    new_team->set_stadium_name(stadiumName);
    new_team->set_street_address(streetAddress);
    new_team->set_city(city);
    new_team->set_state(state);
    new_team->set_zip(zip);
    new_team->set_box_office_num(boNum);
    new_team->set_description_one(des1);
    new_team->set_description_two(des2);
    new_team->set_seating_one(seat1);
    new_team->set_seating_two(seat2);

    teams.push_back(new_team);

    build new_build;
    new_build.read_out(teams);

    this->close();
}
