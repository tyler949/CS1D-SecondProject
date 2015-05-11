#ifndef SORT_DATA_H
#define SORT_DATA_H

#include "baseball_team_class.h"
#include <QVector>

class sort_data
{
private:
    QVector<baseball_team*> teams;

    QVector<baseball_team*> of_this_league    (major_league league);
    QVector<baseball_team*> sort_team_names   (QVector<baseball_team*> baseball_teams);
    QVector<baseball_team*> sort_stadium_names(QVector<baseball_team*> baseball_teams);
    QVector<baseball_team*> sort_dates        (QVector<baseball_team*> baseball_teams);
public:
     sort_data(QVector<baseball_team*> baseball_teams);
    ~sort_data();

    QVector<baseball_team*> by_team_name    (major_league league);
    QVector<baseball_team*> by_stadium_name (major_league league);
    QVector<baseball_team*> by_grass_surface(major_league league);
    QVector<baseball_team*> by_date_opened  (major_league league);
};

#endif
