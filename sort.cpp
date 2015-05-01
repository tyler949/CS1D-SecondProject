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
    // MSD sort goes here
}

vector<baseball_team*> sort_data::sort_stadium_names(vector<baseball_team *> baseball_teams)
{
    // MSD sort goes here
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

