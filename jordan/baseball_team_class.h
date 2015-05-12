#ifndef BASEBALL_TEAM_CLASS_H
#define BASEBALL_TEAM_CLASS_H

#include "baseball_stadium_class.h"

enum major_league
{
    AMERICAN_LEAGUE,
    NATIONAL_LEAGUE,
    MAJOR_LEAGUE
};

class baseball_team : public baseball_stadium
{
private:
    QString      team_name;
    major_league league;

public:
    // C O N S T R U C T O R S
    baseball_team() :
        team_name(""),
        league   (MAJOR_LEAGUE) {  }
    baseball_team(QString n,
                  major_league l) :
        team_name(n),
        league   (l) {  }
    baseball_team(const baseball_team& o) :
        baseball_stadium(o),
        team_name(o.team_name),
        league   (o.league) {  }

    // D E S T R U C T O R S
    ~baseball_team() {  }

    // G E T T E R S
    QString       get_team_name() const { return team_name; }
    major_league  get_league   () const { return league;    }
    baseball_team *get_this    ()       { return this;      }

    // S E T T E R S
    void set_team_name(QString n     ) { team_name = n; }
    void set_league   (major_league l) { league    = l; }
};

#endif
