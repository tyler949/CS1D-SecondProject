#include "sort.h"

// P R I V A T E

QVector<baseball_team*> sort_data::of_this_league(major_league league)
{
    QVector<baseball_team*> temp;

    if(league == MAJOR_LEAGUE)
    {
        temp = teams;
        return temp;
    }

    for(int i = 0; i < teams.size(); i++)
    {
        if(teams.at(i)->get_league() == league)
        {
            temp.push_back(teams[i]);
        }
    }

    return temp;
}

void sort_data::insertion_m(QVector<baseball_team*> &tms)
{
    // Insertion sort months.
    int i, j;
    baseball_team* key;

    for(j = 1; j < tms.size(); j++)
    {
        key = tms.at(j)->get_this();

        for(i = j - 1; (i >= 0) && (tms.at(i)->get_month() < key->get_month()); i--)
        {
            tms[i + 1] = tms.at(i);
        }
        tms[i + 1] = key;
    }
}

void sort_data::insertion_d(QVector<baseball_team*> &tms)
{
    // Insertion sort days.
    int i, j;
    baseball_team* key;

    for(j = 1; j < tms.size(); j++)
    {
        key = tms.at(j)->get_this();

        for(i = j - 1; (i >= 0) && (tms.at(i)->get_day() < key->get_day()); i--)
        {
            tms[i + 1] = tms.at(i);
        }
        tms[i + 1] = key;
    }
}

void sort_data::insertion_y(QVector<baseball_team*> &tms)
{
    // Insertion sort years.
    int i, j;
    baseball_team* key;

    for(j = 1; j < tms.size(); j++)
    {
        key = tms.at(j)->get_this();

        for(i = j - 1; (i >= 0) && (tms.at(i)->get_year() < key->get_year()); i--)
        {
            tms[i + 1] = tms.at(i);
        }
        tms[i + 1] = key;
    }

}

int sort_data::partition_t(QVector<baseball_team*> &tms, int left, int right, QString who)
{
    // Partition by team name.
    for(int i = left; i < right; ++i)
    {
        if(tms.at(i)->get_team_name() <= who)
        {
            swap(tms[i], tms[left]);
            left++;
        }
    }
    return left - 1;
}

int sort_data::partition_s(QVector<baseball_team*> &tms, int left, int right, QString who)
{
    // Partition by stadium name.
    for(int i = left; i < right; ++i)
    {
        if(tms.at(i)->get_stadium_name() <= who)
        {
            swap(tms[i], tms[left]);
            left++;
        }
    }
    return left - 1;
}

void sort_data::quicksort_t(QVector<baseball_team*> &tms, int left, int right)
{
    // Quicksort by team name.
    if(left >= right) return;

    int middle = left + (right - left) / 2;
    swap(tms[middle], tms[left]);
    int midpoint = partition_t(tms, left + 1, right, tms.at(left)->get_team_name());
    swap(tms[left], tms[midpoint]);
    quicksort_t(tms, left, midpoint);
    quicksort_t(tms, midpoint + 1, right);
}

void sort_data::quicksort_s(QVector<baseball_team*> &tms, int left, int right)
{
    // Quicksort by stadium name.
    if(left >= right) return;

    int middle = left + (right - left) / 2;
    swap(tms[middle], tms[left]);
    int midpoint = partition_s(tms, left + 1, right, tms.at(left)->get_stadium_name());
    swap(tms[left], tms[midpoint]);
    quicksort_s(tms, left, midpoint);
    quicksort_s(tms, midpoint + 1, right);
}

// P U B L I C

QVector<baseball_team*> sort_data::by_team_name(major_league league)
{
    QVector<baseball_team*> temp = of_this_league(league);
    quicksort_t(temp, 0, temp.size());
    return temp;
}

QVector<baseball_team*> sort_data::by_stadium_name(major_league league)
{
    QVector<baseball_team*> temp = of_this_league(league);
    quicksort_s(temp, 0, temp.size());
    return temp;
}

QVector<baseball_team*> sort_data::by_date_opened(major_league league)
{
    QVector<baseball_team*> temp = of_this_league(league);

    insertion_d(temp);
    insertion_m(temp);
    insertion_y(temp);

    return temp;
}

QVector<baseball_team*> sort_data::by_grass_surface(QVector<baseball_team*> tms)
{
    QVector<baseball_team*> temp;

    for(int i = 0; i < tms.size(); i++)
    {
        if(tms.at(i)->get_grass() == true)
        {
            temp.push_back(tms.at(i));
        }
    }

    return temp;
}
