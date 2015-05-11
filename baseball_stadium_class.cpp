#include "baseball_stadium_class.h"

QString baseball_stadium::get_stadium_name() const { return stadium_name; }

QString baseball_stadium::get_address() const { return street_address; }

QString baseball_stadium::get_city() const { return city; }

QString baseball_stadium::get_state() const { return state; }

QString baseball_stadium::get_zip() const { return zip; }

QString baseball_stadium::get_box_office_num() const { return box_office_num; }

int baseball_stadium::get_month() const { return month; }

int baseball_stadium::get_day() const { return day; }

int baseball_stadium::get_year() const { return year; }

int baseball_stadium::get_seating_one() const { return seating_one; }

int baseball_stadium::get_seating_two() const { return seating_two; }

QString baseball_stadium::get_description_one() const { return description_one; }

QString baseball_stadium::get_description_two() const { return description_two; }

bool baseball_stadium::get_grass() const { return grass; }

void baseball_stadium::set_stadium_name(QString s) { stadium_name = s; }

void baseball_stadium::set_address(QString a) { street_address = a; }

void baseball_stadium::set_city(QString c) { city = c; }

void baseball_stadium::set_state(QString s) { state = s; }

void baseball_stadium::set_zip(QString z) { zip = z; }

void baseball_stadium::set_box_office(QString b) { box_office_num = b; }

void baseball_stadium::set_month(int m) { month = m; }

void baseball_stadium::set_day(int d) { day = d; }

void baseball_stadium::set_year(int y) { year = y; }

void baseball_stadium::set_seating_one(int c) { seating_one = c; }

void baseball_stadium::set_seating_two(int c) { seating_two = c; }

void baseball_stadium::set_description_one(QString d) { description_one = d; }

void baseball_stadium::set_description_two(QString d) { description_two = d; }

void baseball_stadium::set_grass(bool g) { grass = g; }

baseball_stadium::baseball_stadium(QString sn, // stadium name
                                   QString sa, // street adress of the stadium
                                   QString c,  // city of the stadium
                                   QString s,  // state of the stadium
                                   QString z,  // zip code of the stadium
                                   QString bo, // box office phone number
                                   int m,      // month of the opening date
                                   int d,      // day of the opening date
                                   int y,      // year of the opening date
                                   int s1,     // stadium's first seating capacity
                                   QString d1, // description of s1 (postseason capacity, day time capacity, etc.)
                                   int s2,     // stadium's secondary seating capacity
                                   QString d2, // description of s1 (postseason capacity, day time capacity, etc.)
                                   bool g)     // grass surface?
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
   seating_one = s1;
   description_one = d1;
   seating_two = s2;
   description_two = d2;
   grass = g;
}

baseball_stadium::baseball_stadium(const baseball_stadium& o) : stadium_name(o.stadium_name),
                  street_address(o.street_address), city(o.city), state(o.state), zip(o.zip),
                  month(o.month), day(o.day), year(o.year), box_office_num(o.box_office_num),
                  seating_one(o.seating_one), description_one(o.description_one),
                  seating_two(o.seating_two), description_two(o.description_two), grass(o.grass) {}

baseball_stadium::baseball_stadium() {}

baseball_stadium::~baseball_stadium() {}
