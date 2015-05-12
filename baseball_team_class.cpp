#include "baseball_team_class.h"

QString baseball_team::get_team_name() const { return team_name; }

major_league baseball_team::get_league() const { return league; }

void baseball_team::set_team_name(QString new_name) { team_name = new_name; }

void baseball_team::set_league(major_league new_league) { league = new_league; }

baseball_team::baseball_team(QString& t, major_league l) : team_name(t), league(l) {}

//baseball_team *get_this() {return this;}

baseball_team::baseball_team(const baseball_team& o) : team_name(o.team_name), league(o.league)
{
    set_stadium_name(o.get_stadium_name());
    set_address(o.get_address());
    set_city(o.get_city());
    set_state(o.get_state());
    set_zip(o.get_zip());
    set_box_office(o.get_box_office_num());
    set_month(o.get_month());
    set_day(o.get_day());
    set_year(o.get_year());
    set_seating_one(o.get_seating_one());
    set_description_one(o.get_description_one());
    set_seating_two(o.get_seating_two());
    set_description_two(o.get_description_two());
}

baseball_team::baseball_team() {}

baseball_team::~baseball_team() {}

