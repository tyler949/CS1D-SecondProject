
#ifndef BASEBALL_TEAM_CLASS_H
#define BASEBALL_TEAM_CLASS_H

#include <iostream>
#include <QString>
#include <QVector>
#include "baseball_stadium_class.h"
#include "souvenir_class.h"

enum major_league
{
    AMERICAN_LEAGUE,
    NATIONAL_LEAGUE
};

class baseball_team : public baseball_stadium
{
private:
    QString team_name;    // name of the baseball team
    major_league league;  // which of the two major leagues the team is in
    QVector<souvenirs> souvenirsList;
    
public:
    QString get_team_name() const;             // returns the team_name
    major_league get_league() const;           // returns the league
    
    void set_team_name(QString& new_name);     // changes the name of the team
    void set_league(major_league new_league);  // changes the league the team is in
    
    baseball_team(QString& t, major_league l); // initialization constructor
    baseball_team(const baseball_team& o);     // copy constructor
    baseball_team();                           // default constructor
    ~baseball_team();                          // destructor
};

#endif
