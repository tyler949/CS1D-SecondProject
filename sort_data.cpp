#include "sort.h"

sort_data::sort_data(vector<baseball_team*> baseball_teams)
{
    for(int i = 0; i < baseball_teams.size(); i++)
    {
        teams.push_back(baseball_teams.at(i));
    }
}

sort_data::~sort_data() { }

vector<baseball_team*> sort_data::of_this_league(major_league league)
{
    if(league == MAJOR_LEAGUE)
    {
        return teams;
    }

    vector<baseball_team*> temp;

    for(int i = 0; i < teams.size(); i++)
    {
        if(teams.at(i)->get_league() == league)
        {
            temp.push_back(teams.at(i));
        }
    }

    return temp;
}

vector<baseball_team*> sort_data::sort_team_names(vector<baseball_team*> baseball_teams)
{
    sort(baseball_teams.begin(), baseball_teams.end(), [] (const baseball_team& x, const baseball_team& y) { return x.get_team_name() < y.get_team_name();});

    return baseball_teams;
}

vector<baseball_team*> sort_data::sort_stadium_names(vector<baseball_team *> baseball_teams)
{
    sort(baseball_teams.begin(), baseball_teams.end(), [] (const baseball_team& x, const baseball_team& y) { return x.get_stadium_name() < y.get_stadium_name();});

    return baseball_teams;
}

vector<baseball_team*> sort_data::sort_dates(vector<baseball_team*> baseball_teams)
{
    int i, j, key, len = baseball_teams.length();

    for(j = 1; j < len; j++)
    {
        key = baseball_teams.at(j)->get_day();

        for(i = j - 1; (i >= 0) && (baseball_teams.at(i)->get_day() < key); i--)
        {
            baseball_teams.at(i + 1) = baseball_teams.at(i);
        }

        baseball_teams.at(i + 1)->get_day() = key;
    }

    i, j, key, len = baseball_teams.length();

    for(j = 1; j < len; j++)
    {
        key = baseball_teams.at(j)->get_month();

        for(i = j - 1; (i >= 0) && (baseball_teams.at(i)->get_month() < key); i--)
        {
            baseball_teams.at(i + 1) = baseball_teams.at(i);
        }

        baseball_teams.at(i + 1)->get_month() = key;
    }

    i, j, key, len = baseball_teams.length();

    for(j = 1; j < len; j++)
    {
        key = baseball_teams.at(j)->get_year();

        for(i = j - 1; (i >= 0) && (baseball_teams.at(i)->get_year() < key); i--)
        {
            baseball_teams.at(i + 1) = baseball_teams.at(i);
        }

        baseball_teams.at(i + 1)->get_year() = key;
    }

    return baseball_teams;
}

vector<baseball_team*> sort_data::by_team_name(major_league league)
{
    vector<baseball_team*> temp = of_this_league(league);

    return sort_team_names(temp);
}

vector<baseball_team*> sort_data::by_stadium_name(major_league league)
{
    vector<baseball_team*> temp = of_this_league(league);

    return sort_stadium_names(temp);
}

vector<baseball_team*> sort_data::by_grass_surface(major_league league)
{
    vector<baseball_team*> temp1 = of_this_league(league);
    vector<baseball_team*> temp2;

    for(int i = 0; i < temp1.size(); i++)
    {
        if(temp1.at(i)->get_grass() == true)
        {
            temp2.push_back(temp1.at(i));
        }
    }

    return sort_team_names(temp2);
}

vector<baseball_team*> sort_data::by_date_opened(major_league league)
{
    vector<baseball_team*> temp = of_this_league(league);

    return sort_dates(temp);
}
