

#ifndef __CS1D_Second_Project_Baseball__User__
#define __CS1D_Second_Project_Baseball__User__

#include <iostream>
#include <QString>
#include <QVector>
#include "baseball_team_class.h"
#include "baseball_stadium_class.h"
#include "souvenir_class.h"

class User
{
public:
    //default constructor
    User(): userName("username"), passWord("password"), admin(false){}
    
    User(QString passedUserName, QString passedPassWord,
         bool passedAdmin) : userName(passedUserName),
    passWord(passedPassWord), admin(passedAdmin){}
    
    bool isAdmin(){return admin;};
    void buyItNow(souvenirs passedSouvenir)
    {shoppingCart.push_back(passedSouvenir);};
    
private:
    QString userName;
    QString passWord;
    bool admin;
    QVector<souvenirs> shoppingCart;

};

class Admin: public User
{
public:
    //As an administrator, I want to be able to modify stadium information
    void modify_stadium_name(QVector<baseball_team>::iterator stadiumModified,
                             QString newName);
    void modify_stadium_address(QVector<baseball_team>::iterator stadiumModified,
                                QString newAddress);
    void modify_stadium_city(QVector<baseball_team>::iterator stadiumModified,
                             QString newCity);
    void modify_stadium_state(QVector<baseball_team>::iterator stadiumModified,
                              QString newState);
    void modify_stadium_zip(QVector<baseball_team>::iterator
                            stadiumModified, int newZip);
    void modify_stadium_month(QVector<baseball_team>::iterator
                              stadiumModified, int newMonth);
    void modify_stadium_day(QVector<baseball_team>::iterator
                            stadiumModified, int newDay);
    void modify_stadium_year(QVector<baseball_team>::iterator
                             stadiumModified, int newYear);
    void modify_stadium_box_office(QVector<baseball_team>::iterator
                                   stadiumModified, int newBoxOffice);
    void modify_stadium_capacity(QVector<baseball_team>::iterator
                                 stadiumModified, int newCapacity);

    void add_team(QVector<baseball_team>& passedTeamVector,
                  Qstring teamName, int americanOrNational,
                  QString stadiumName, QString streetAddress,
                  QString city, QString state, int zip, int month,
                  int day, int year, int boxOffice, int capacity);
    
    void add_souvenir(QVector<souvenirs> passedSouvenirVector,
                      QString passedString, int passedInt);
    void delete_souvenir(QVector<souvenirs> passedSouvenirVector,
                         QVector<souvenirs>::iterator souvenirToBeDeleted);
    void modify_souvenir(QVector<souvenirs>::iterator
                         souvenirToBeChanged,
                         int priceToBeChanged);
    
private:

    
};

#endif






