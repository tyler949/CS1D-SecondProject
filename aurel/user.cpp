#include "user.h"

void Admin:: modify_stadium_name(QVector<baseball_team>::iterator
                                 stadiumModified, QString newName)
{
        stadiumModified->set_stadium_name(newName);
}
//--------------------------------------------------------------------
void Admin:: modify_stadium_address(QVector<baseball_team>::iterator
                                    stadiumModified, QString newAddress)
{
        stadiumModified->set_street_address(newAddress);
}
//--------------------------------------------------------------------
void Admin:: modify_stadium_city(QVector<baseball_team>::iterator
                                 stadiumModified, QString newCity)
{
        stadiumModified->set_city(newCity);
}
//--------------------------------------------------------------------
void Admin:: modify_stadium_state(QVector<baseball_team>::iterator
                                  stadiumModified, QString newState)
{
        stadiumModified->set_state(newState);
}
//--------------------------------------------------------------------
void modify_stadium_zip(QVector<baseball_team>::iterator
                        stadiumModified, QString newZip)
{
        stadiumModified->set_zip(newZip);
}
//--------------------------------------------------------------------
void Admin:: modify_stadium_month(QVector<baseball_team>::iterator
                                  stadiumModified, int newMonth)
{
        stadiumModified->set_month(newMonth);
}
//--------------------------------------------------------------------
void Admin:: modify_stadium_day(QVector<baseball_team>::iterator
                                stadiumModified, int newDay)
{
        stadiumModified->set_day(newDay);
}
//--------------------------------------------------------------------
void Admin:: modify_stadium_year(QVector<baseball_team>::iterator
                                stadiumModified, int newYear)
{
        stadiumModified->set_year(newYear);
}
//--------------------------------------------------------------------
void modify_stadium_box_office(QVector<baseball_team>::iterator
                               stadiumModified, QString newBoxOffice)
{
        stadiumModified->set_box_office_num(newBoxOffice);
}
//--------------------------------------------------------------------
void modify_stadium_capacity(QVector<baseball_team>::iterator
                             stadiumModified, int seatingOne, int seatingTwo)
{
        stadiumModified->set_seating_one(seatingOne);
        stadiumModified->set_seating_two(seatingTwo);
}
//--------------------------------------------------------------------
//I want to provide the ability to add a new team and corresponding stadium
void add_team(QVector<baseball_team>& passedTeamVector,
              QString teamName, QString americanOrNational,
              QString stadiumName, QString streetAddress,
              QString city, QString state, QString zip, int month,
              int day, int year, QString boxOffice, int capacity1,
              QString description1, int capacity2, QString description2)
{


    /*
     * The stadiums are stored in the following format:
     * - Stadium Name (string)
     * - Home team Name (string)
     * - Major League (string)
     * - Street Address (string)
     * - City (string)
     * - State (string)
     * - Zip code (string)
     * - Box Office # (string)
     * - month opened (int)
     * - day opened (int)
     * - year opened (int)
     * - primary Seating Capacity (int)
     * - primary seating description (string)
     * - secondry seating capacity (int)
     * - secondary seating description (string)
     */

    baseball_team tempBaseballTeam;

        tempBaseballTeam.set_team_name(teamName);
        if(americanOrNational == "American League")
        { tempBaseballTeam.set_league(AMERICAN_LEAGUE); }
        else if(americanOrNational == "National League")
        { tempBaseballTeam.set_league(NATIONAL_LEAGUE); }
        tempBaseballTeam.set_stadium_name(stadiumName);
        tempBaseballTeam.set_street_address(streetAddress);
        tempBaseballTeam.set_city(city);
        tempBaseballTeam.set_state(state);
        tempBaseballTeam.set_zip(zip);
        tempBaseballTeam.set_month(month);
        tempBaseballTeam.set_day(day);
        tempBaseballTeam.set_year(year);
        tempBaseballTeam.set_box_office_num(boxOffice);
        tempBaseballTeam.set_seating_one(capacity1);
        tempBaseballTeam.set_seating_two(capacity2);
        tempBaseballTeam.set_description_one(description1);
        tempBaseballTeam.set_description_two(description2);

    passedTeamVector.push_back(tempBaseballTeam);
}

//--------------------------------------------------------------------
void add_souvenir(QVector<souvenir_class>& passedSouvenirVector,
                  QString passedString, int passedInt)
{
        souvenir_class tempSouvenir;
        tempSouvenir.setSouvenirType(passedString);
        tempSouvenir.setSouvenirPrice(passedInt);

        passedSouvenirVector.push_back(tempSouvenir);
}
//--------------------------------------------------------------------
void delete_souvenir(QVector<souvenir_class>& passedSouvenirVector,
                     QVector<souvenir_class>::iterator souvenirToBeDeleted)
{
    passedSouvenirVector.erase(souvenirToBeDeleted);
}
//--------------------------------------------------------------------
void modify_souvenir(QVector<souvenir_class>::iterator
                     souvenirToBeChanged,
                     double priceToBeChanged)
{
    souvenirToBeChanged->setSouvenirPrice(priceToBeChanged);
}
//--------------------------------------------------------------------
//--------------------------------------------------------------------
//--------------------------------------------------------------------
