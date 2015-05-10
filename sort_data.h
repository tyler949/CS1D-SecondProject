#ifndef SORT
#define SORT

#include "baseball_team_class.h"
#include <vector>

class sort_data
{
private:
    vector<baseball_team*> teams;

    vector<baseball_team*> of_this_league    (major_league league);
    vector<baseball_team*> sort_team_names   (vector<baseball_team*> baseball_teams);
    vector<baseball_team*> sort_stadium_names(vector<baseball_team*> baseball_teams);
    vector<baseball_team*> sort_dates        (vector<baseball_team*> baseball_teams);
public:
     sort_data(vector<baseball_team*> baseball_teams);
    ~sort_data();

    vector<baseball_team*> by_team_name    (major_league league);
    vector<baseball_team*> by_stadium_name (major_league league);
    vector<baseball_team*> by_grass_surface(major_league league);
    vector<baseball_team*> by_date_opened  (major_league league);
};

#endif
