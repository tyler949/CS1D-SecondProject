
#include "baseball_stadium_class.h"

QString baseball_stadium::get_stadium_name() const { return stadium_name; }

QString baseball_stadium::get_opening_data() const { return date_opened; }

QString baseball_stadium::get_address() const { return street_address; }

QString baseball_stadium::get_city() const { return city; }

QString baseball_stadium::get_state() const { return state; }

int baseball_stadium::get_zip() const { return zip; }

int baseball_stadium::get_month() const { return month; }

int baseball_stadium::get_day() const { return day; }

int baseball_stadium::get_year() const { return year; }

int baseball_stadium::get_box_office_num() const { return box_office_num; }

int baseball_stadium::get_seating() const { return seating_capacity; }

void baseball_stadium::set_name(QString& s) { stadium_name = s; }

void baseball_stadium::set_address(QString& a) { street_address = a; }

void baseball_stadium::set_city(QString& c) { city = c; }

void baseball_stadium::set_state(QString& s) { state = s; }

void baseball_stadium::set_zip(int z) { zip = z; }

void baseball_stadium::set_month(int m) { month = m; }

void baseball_stadium::set_day(int d) { day = d; }

void baseball_stadium::set_year(int y) { year = y; }

void baseball_stadium::set_box_office(int b) { box_office_num = b; }

void baseball_stadium::set_capacity(int c) { seating_capacity = c; }

baseball_stadium::baseball_stadium(QString sn, // stadium name
                                   QString sa, // street adress of the stadium
                                   QString c,  // city of the stadium
                                   QString s,  // state of the stadium
                                   int z,      // zip code of the stadium
                                   int m,      // month of the opening date
                                   int d,      // day of the opening date
                                   int y,      // year of the opening date
                                   int bo,     // box office phone number
                                   int sc)     // stadium's seating capacity
{
    stadium_name = sn;
    street_address = sa;
    city = c;
    state = s;
    zip = z;
    month = m;
    day = d;
    year = y;
    box_office_num = bo;
    seating_capacity = sc;
}

baseball_stadium::baseball_stadium(const baseball_stadium& o):
stadium_name(o.stadium_name), street_address(o.street_address),
city(o.city), state(o.state), zip(o.zip), month(o.month), day(o.day),
year(o.year), box_office_num(o.box_office_num), seating_capacity(o.sc) {}

baseball_stadium::baseball_stadium() {}

baseball_stadium::~baseball_stadium() {}