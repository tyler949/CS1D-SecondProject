#include "user_class.h"


void Admin:: modify_stadium_name(QVector<baseball_team>::iterator
                                 stadiumModified, QString newName)
{
    if (isAdmin()){
        stadiumModified->set_stadium_name(newName);
    }
}
//--------------------------------------------------------------------
void Admin:: modify_stadium_address(QVector<baseball_team>::iterator
                                    stadiumModified, QString newAddress)
{
    if (isAdmin()){
        stadiumModified->set_address(newAddress);
    }
}
//--------------------------------------------------------------------
void Admin:: modify_stadium_city(QVector<baseball_team>::iterator
                                 stadiumModified, QString newCity)
{
    if (isAdmin()){
        stadiumModified->set_city(newCity);
    }
}
//--------------------------------------------------------------------
void Admin:: modify_stadium_state(QVector<baseball_team>::iterator
                                  stadiumModified, QString newState)
{
    if (isAdmin()){
        stadiumModified->set_state(newState);
    }
}
//--------------------------------------------------------------------
void Admin:: modify_stadium_zip(QVector<baseball_team>::iterator
                                  stadiumModified, QString newZip)
{
    if (isAdmin()){
        stadiumModified->set_zip(newZip);
    }
}
//--------------------------------------------------------------------
void Admin:: modify_stadium_month(QVector<baseball_team>::iterator
                                  stadiumModified, int newMonth)
{
    if (isAdmin()){
        stadiumModified->set_month(newMonth);
    }
}
//--------------------------------------------------------------------
void Admin:: modify_stadium_day(QVector<baseball_team>::iterator
                                stadiumModified, int newDay)
{
    if (isAdmin()){
        stadiumModified->set_day(newDay);
    }
}
//--------------------------------------------------------------------
void Admin:: modify_stadium_year(QVector<baseball_team>::iterator
                                stadiumModified, int newYear)
{
    if (isAdmin()){
        stadiumModified->set_year(newYear);
    }
}
//--------------------------------------------------------------------
void Admin:: modify_stadium_box_office(QVector<baseball_team>::iterator
                                stadiumModified, QString newBoxOffice)
{
    if (isAdmin()){
        stadiumModified->set_box_office(newBoxOffice);
    }
}
//--------------------------------------------------------------------
void Admin:: modify_stadium_capacity(QVector<baseball_team>::iterator
                                       stadiumModified, int seatingOne, int seatingTwo)
{
    if (isAdmin()){
        stadiumModified->set_seating_one(seatingOne);
        stadiumModified->set_seating_two(seatingTwo);
    }
}
//--------------------------------------------------------------------
//I want to provide the ability to add a new team and corresponding stadium
void Admin::add_team(QVector<baseball_team>& passedTeamVector,
              QString teamName, major_league league,
              QString stadiumName, QString streetAddress,
              QString city, QString state, QString zip, int month,
              int day, int year, QString boxOffice, int seatingOne, int seatingTwo)
{
    baseball_team tempBaseballTeam;

    if (isAdmin()) {
        tempBaseballTeam.set_team_name(teamName);
        tempBaseballTeam.set_league(league);
        tempBaseballTeam.set_stadium_name(stadiumName);
        tempBaseballTeam.set_address(streetAddress);
        tempBaseballTeam.set_city(city);
        tempBaseballTeam.set_state(state);
        tempBaseballTeam.set_zip(zip);
        tempBaseballTeam.set_month(month);
        tempBaseballTeam.set_day(day);
        tempBaseballTeam.set_year(year);
        tempBaseballTeam.set_box_office(boxOffice);
        tempBaseballTeam.set_seating_one(seatingOne);
        tempBaseballTeam.set_seating_two(seatingTwo);
    }

    passedTeamVector.push_back(tempBaseballTeam);
}

//--------------------------------------------------------------------
void Admin::add_souvenir(QVector<souvenir_class> passedSouvenirVector,
                         QString passedString, int passedInt)
{
    if (isAdmin()){
        souvenir_class tempSouvenir;
        tempSouvenir.setSouvenirType(passedString);
        tempSouvenir.setSouvenirPrice(passedInt);

        passedSouvenirVector.push_back(tempSouvenir);
    }
}
//--------------------------------------------------------------------
void Admin::delete_souvenir(QVector<souvenir_class> passedSouvenirVector,
                            QVector<souvenir_class>::iterator souvenirToBeDeleted)
{
    passedSouvenirVector.erase(souvenirToBeDeleted);
}
//--------------------------------------------------------------------
void Admin::modify_souvenir(QVector<souvenir_class>::iterator
                            souvenirToBeChanged,
                            int priceToBeChanged)
{
    souvenirToBeChanged->setSouvenirPrice(priceToBeChanged);
}
//--------------------------------------------------------------------
//--------------------------------------------------------------------
//--------------------------------------------------------------------
