
#ifndef BASEBALL_STADIUM_CLASS_H
#define BASEBALL_STADIUM_CLASS_H

#include <iostream>
#include <QString>

class baseball_stadium
{
private:
    QString stadium_name;   // the name of a baseball stadium
    QString street_address; // address of the stadium
    QString city;           // city where the stadium is located
    QString state;          // state where the stadium is located
    int zip;                // zip code of where the stadium is located
    int month;              // month the stadium opened
    int day;                // day the stadium opened
    int year;               // year the stadium opened
    int box_office_num;     // phone number of the box office
    int seating_capacity;   // the number of seats in the stadium
public:
    QString get_stadium_name() const;  // returns the name of the stadium
    QString get_opening_data() const;  // returns the date the stadium opened
    QString get_address() const;       // returns the address
    QString get_city() const;          // returns the city
    QString get_state() const;         // returns the state
    int get_zip() const;               // returns the zip code
    int get_month() const;             // returns the month
    int get_day() const;               // returns the day
    int get_year() const;              // returns the year
    int get_box_office_num() const;    // returns the box office phone number
    int get_seating() const;           // returns the stadium's seating capacity
    
    void set_name(QString& s); // change the name of the stadium
    void set_address(QString& a);      // change the address of where the stadium's located
    void set_city(QString& c);         // change the city where the stadium's located
    void set_state(QString& s);        // change the state where the stadium's located
    void set_zip(int z);               // change the zip code of the stadium's location
    void set_month(int m);             // change the month of the opening date
    void set_day(int d);               // change the day of the opening date
    void set_year(int y);              // change the year of the opening date
    void set_box_office(int b);        // change the box office phone number
    void set_capacity(int c);          // change the seating capacity of this stadium
    
    baseball_stadium(QString sn, QString sa,
                     QString c, QString s,
                     int z, int m, int d,
                     int y, int bo, int sc);     // initailization constructor
    baseball_stadium(const baseball_stadium& o); // copy constructor
    baseball_stadium();                          // default constructor
    ~baseball_stadium();                         // destrutor
};

#endif
