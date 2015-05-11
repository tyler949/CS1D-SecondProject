#ifndef BASEBALL_STADIUM_CLASS_H
#define BASEBALL_STADIUM_CLASS_H

#include <QString>

class baseball_stadium
{
    private:
        QString stadium_name;    // the name of a baseball stadium
        QString street_address;  // address of the stadium
        QString city;            // city where the stadium is located
        QString state;           // state where the stadium is located
        QString zip;             // zip code of where the stadium is located
        QString box_office_num;  // phone number of the box office
        int month;               // month the stadium opened
        int day;                 // day the stadium opened
        int year;                // year the stadium opened
        int seating_one;         // the primary seating capacity of the stadium
        QString description_one; // a description of seating_one (postseason capacity, day time capacity, etc.)
        int seating_two;         // the secondary seating capacity of the stadium
        QString description_two; // a description of seating_two (postseason capacity, day time capacity, etc.)
        bool grass;              // if stadium has grass surface or not
    public:
        QString get_stadium_name() const;    // returns the name of the stadium
        QString get_address() const;         // returns the address
        QString get_city() const;            // returns the city
        QString get_state() const;           // returns the state
        QString get_zip() const;             // returns the zip code
        QString get_box_office_num() const;  // returns the box office phone number
        int get_month() const;               // returns the month
        int get_day() const;                 // returns the day
        int get_year() const;                // returns the year
        int get_seating_one() const;         // returns the primary seating capacity
        int get_seating_two() const;         // returns the secondary seating capacity
        QString get_description_one() const; // returns a description of the primary seating capacity
        QString get_description_two() const; // returns a description of the secondary seating capacity
        bool get_grass() const;
        void set_stadium_name(QString s);    // change the name of the stadium
        void set_address(QString a);         // change the address of where the stadium's located
        void set_city(QString c);            // change the city where the stadium's located
        void set_state(QString s);           // change the state where the stadium's located
        void set_zip(QString z);             // change the zip code of the stadium's location
        void set_month(int m);               // change the month of the opening date
        void set_day(int d);                 // change the day of the opening date
        void set_year(int y);                // change the year of the opening date
        void set_box_office(QString b);      // change the box office phone number
        void set_seating_one(int c);         // change the primary seating capacity of this stadium
        void set_seating_two(int c);         // change the secondary seating capacity of this stadium
        void set_description_one(QString d); // change the description of primary seating
        void set_description_two(QString d); // change the description of secondary seating
        void set_grass(bool g);              // change the stadium surface
        baseball_stadium(QString sn, QString sa,
                         QString c, QString s,
                         QString z, QString bo,
                         int m, int d, int y,
                         int s1, QString d1,
                         int s2, QString d2,
                         bool g);            // initailization constructor
        baseball_stadium(const baseball_stadium& o); // copy constructor
        baseball_stadium();                          // default constructor
        ~baseball_stadium();                         // destrutor
};

#endif // BASEBALL_STADIUM_CLASS_H
