#ifndef SORT_CLASS_H
#define SORT_CLASS_H

#include "baseball_team_class.h"
#include <QVector>
#include <algorithm>
using namespace std;

enum sorted_by
{
    TEAM_NAME,
    STADIUM_NAME,
    DATE_OPENED
};

class sort_data
{
    private:
        QVector<baseball_team*> teams;

        // G E T T E R S
        QVector<baseball_team*> of_this_league (major_league league);

        // I N S E R T I O N   S O R T S
        void insertion_m(QVector<baseball_team*> &tms);
        void insertion_d(QVector<baseball_team*> &tms);
        void insertion_y(QVector<baseball_team*> &tms);

        // Q U I C K S O R T S
        void quicksort_t(QVector<baseball_team*> &tms, int left, int right);
        void quicksort_s(QVector<baseball_team*> &tms, int left, int right);

        // P A R T I T I O N S
        int partition_t(QVector<baseball_team*> &tms, int left, int right, QString who);
        int partition_s(QVector<baseball_team*> &tms, int left, int right, QString who);
    public:
        // C O N S T R U C T O R S
        sort_data(QVector<baseball_team*> tms) :
                  teams(tms) {  }

        // D E S T R U C T O R S
        ~sort_data() {  }

        // S O R T   B Y
        QVector<baseball_team*> by_team_name    (major_league league);
        QVector<baseball_team*> by_stadium_name (major_league league);
        QVector<baseball_team*> by_date_opened  (major_league league);
        QVector<baseball_team*> by_grass_surface(QVector<baseball_team*> tms);
};

#endif
