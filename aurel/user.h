#ifndef USER_H
#define USER_H

#include <iostream>
#include <QString>
#include <QVector>
#include "baseball_team_class.h"
#include "baseball_stadium_class.h"
#include "souvenir.h"

class User
{
public:
    //default constructor
    User(): userName("username"), passWord("password"), admin(false){}

    User(QString passedUserName, QString passedPassWord,
         bool passedAdmin) : userName(passedUserName),
    passWord(passedPassWord), admin(passedAdmin){}

    bool isAdmin(){return admin;}
    void buyItNow(souvenir_class passedSouvenir)
    {shoppingCart.push_back(passedSouvenir);}

private:
    QString userName;
    QString passWord;
    bool admin;
    QVector<souvenir_class> shoppingCart;

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
                            stadiumModified, QString newZip);
    void modify_stadium_month(QVector<baseball_team>::iterator
                              stadiumModified, int newMonth);
    void modify_stadium_day(QVector<baseball_team>::iterator
                            stadiumModified, int newDay);
    void modify_stadium_year(QVector<baseball_team>::iterator
                             stadiumModified, int newYear);
    void modify_stadium_box_office(QVector<baseball_team>::iterator
                                   stadiumModified, QString newBoxOffice);
    void modify_stadium_capacity_one(QVector<baseball_team>::iterator
                                 stadiumModified, int seatingOne, int seatingTwo);
    void modify_stadium_capacity_two(QVector<baseball_team>::iterator
                                 stadiumModified, int seatingOne, int seatingTwo);


    void add_team(QVector<baseball_team>& passedTeamVector,
                  QString teamName, QString americanOrNational,
                  QString stadiumName, QString streetAddress,
                  QString city, QString state, QString zip, int month,
                  int day, int year, QString boxOffice, int capacity1,
                  QString description1, int capacity2, QString description2);

    void add_souvenir(QVector<souvenir_class>& passedSouvenirVector,
                      QString passedString, int passedInt);
    void delete_souvenir(QVector<souvenir_class>& passedSouvenirVector,
                         QVector<souvenir_class>::iterator souvenirToBeDeleted);
    void modify_souvenir(QVector<souvenir_class>::iterator
                         souvenirToBeChanged,
                         int priceToBeChanged);

private:

};


#endif // USER_H
