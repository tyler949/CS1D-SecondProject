

#include "user_class.h"

void Admin:: modify_stadium_name(QVector<baseball_team>::iterator
                                 stadiumModified, QString newName)
{
    if (isAdmin){
        stadiumModified->set_name(newName);
    }
}
//--------------------------------------------------------------------
void Admin:: modify_stadium_address(QVector<baseball_team>::iterator
                                    stadiumModified, QString newAddress)
{
    if (isAdmin){
        stadiumModified->set_address(newAddress);
    }
}
//--------------------------------------------------------------------
void Admin:: modify_stadium_city(QVector<baseball_team>::iterator
                                 stadiumModified, QString newCity)
{
    if (isAdmin){
        stadiumModified->set_city(newCity);
    }
}
//--------------------------------------------------------------------
void Admin:: modify_stadium_state(QVector<baseball_team>::iterator
                                  stadiumModified, QString newState)
{
    if (isAdmin){
        stadiumModified->set_state(newState);
    }
}
//--------------------------------------------------------------------
void Admin:: modify_stadium_zip(QVector<baseball_team>::iterator
                                  stadiumModified, int newZip)
{
    if (isAdmin){
        stadiumModified->set_zip(newZip);
    }
}
//--------------------------------------------------------------------
void Admin:: modify_stadium_month(QVector<baseball_team>::iterator
                                  stadiumModified, int newMonth)
{
    if (isAdmin){
        stadiumModified->set_month(newMonth);
    }
}
//--------------------------------------------------------------------
void Admin:: modify_stadium_day(QVector<baseball_team>::iterator
                                stadiumModified, int newDay)
{
    if (isAdmin){
        stadiumModified->set_day(newDay);
    }
}
//--------------------------------------------------------------------
void Admin:: modify_stadium_year(QVector<baseball_team>::iterator
                                stadiumModified, int newYear)
{
    if (isAdmin){
        stadiumModified->set_year(newYear);
    }
}
//--------------------------------------------------------------------
void Admin:: modify_stadium_box_office(QVector<baseball_team>::iterator
                                stadiumModified, int newBoxOffice)
{
    if (isAdmin){
        stadiumModified->set_box_office(newBoxOffice);
    }
}
//--------------------------------------------------------------------
void Admin:: modify_stadium_capacity(QVector<baseball_team>::iterator
                                       stadiumModified, int newCapacity)
{
    if (isAdmin){
        stadiumModified->set_capacity(newCapacity);
    }
}
//--------------------------------------------------------------------
//I want to provide the ability to add a new team and corresponding stadium
void add_team(QVector<baseball_team>& passedTeamVector,
              Qstring teamName, int americanOrNational,
              QString stadiumName, QString streetAddress,
              QString city, QString state, int zip, int month,
              int day, int year, int boxOffice, int capacity)
{
    baseball_team tempBaseballTeam;
    
    if (isAdmin()) {
        tempBaseballTeam.set_team_name(teamName);
        tempBaseballTeam.set_league(americanOrNational);
        tempBaseballTeam.set_name(stadiumName);
        tempBaseballTeam.set_address(streetAddress);
        tempBaseballTeam.set_city(city);
        tempBaseballTeam.set_state(state);
        tempBaseballTeam.set_zip(zip);
        tempBaseballTeam.set_month(month);
        tempBaseballTeam.set_day(day);
        tempBaseballTeam.set_year(year);
        tempBaseballTeam.set_box_office(boxOffice);
        tempBaseballTeam.set_capacity(capacity);
    }
    
    passedTeamVector.push_back(tempBaseballTeam);
}

//--------------------------------------------------------------------
 //I want to be able to modify (add/delete/change) the souvenirs list,


//--------------------------------------------------------------------
//--------------------------------------------------------------------