#include "baseball_team_class.h"

QString baseball_team::get_team_name() const { return team_name; }

major_league baseball_team::get_league() const { return league; }

void baseball_team::set_team_name(QString& new_name) { team_name = new_name; }

void baseball_team::set_league(major_league new_league) { league = new_league; }

baseball_team::baseball_team(QString& t, major_league l) : team_name(t), league(l) {}

baseball_team::baseball_team(const baseball_team& o) : team_name(o.team_name), league(o.league) {}

baseball_team::baseball_team() {}

baseball_team::~baseball_team() {}

