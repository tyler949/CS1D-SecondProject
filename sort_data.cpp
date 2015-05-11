#include "sort_data.h"
#include <algorithm>

sort_data::sort_data(QVector<baseball_team*> baseball_teams)
{
    for(int i = 0; i < baseball_teams.size(); i++)
    {
        teams.push_back(baseball_teams.at(i));
    }
}

sort_data::~sort_data() { }

QVector<baseball_team*> sort_data::of_this_league(major_league league)
{
    if(league == MAJOR_LEAGUE)
    {
        return teams;
    }

    QVector<baseball_team*> temp;

    for(int i = 0; i < teams.size(); i++)
    {
        if(teams.at(i)->get_league() == league)
        {
            temp.push_back(teams.at(i));
        }
    }

    return temp;
}

QVector<baseball_team*> sort_data::sort_team_names(QVector<baseball_team*> baseball_teams)
{
    //sort(baseball_teams.begin(), baseball_teams.end(), [] (const baseball_team& x, const baseball_team& y) { return x.get_team_name() < y.get_team_name();});

    return baseball_teams;
}

QVector<baseball_team*> sort_data::sort_stadium_names(QVector<baseball_team *> baseball_teams)
{
    //sort(baseball_teams.begin(), baseball_teams.end(), [] (const baseball_team& x, const baseball_team& y) { return x.get_stadium_name() < y.get_stadium_name();});

    return baseball_teams;
}

QVector<baseball_team*> sort_data::sort_dates(QVector<baseball_team*> baseball_teams)
{
    //redo
}

QVector<baseball_team*> sort_data::by_team_name(major_league league)
{
    QVector<baseball_team*> temp = of_this_league(league);

    return sort_team_names(temp);
}

QVector<baseball_team*> sort_data::by_stadium_name(major_league league)
{
    QVector<baseball_team*> temp = of_this_league(league);

    return sort_stadium_names(temp);
}

QVector<baseball_team*> sort_data::by_grass_surface(major_league league)
{
    QVector<baseball_team*> temp1 = of_this_league(league);
    QVector<baseball_team*> temp2;

    for(int i = 0; i < temp1.size(); i++)
    {
        if(temp1.at(i)->get_grass() == true)
        {
            temp2.push_back(temp1.at(i));
        }
    }

    return sort_team_names(temp2);
}

QVector<baseball_team*> sort_data::by_date_opened(major_league league)
{
    QVector<baseball_team*> temp = of_this_league(league);

    return sort_dates(temp);
}
