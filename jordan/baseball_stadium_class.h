#ifndef BASEBALL_STADIUM_CLASS_H
#define BASEBALL_STADIUM_CLASS_H

#include <QString>

class baseball_stadium
{
    private:
        QString stadium_name;
        QString street_address;
        QString city;
        QString state;
        QString zip;
        QString box_office_num;
        QString description_one;
        QString description_two;
        long    seating_one;
        long    seating_two;
        int     month;
        int     day;
        int     year;
        bool    grass;

    public:
        // C O N S T R U C T O R S
        baseball_stadium() :
            stadium_name   (""),
            street_address (""),
            city           (""),
            state          (""),
            box_office_num (""),
            description_one(""),
            description_two(""),
            seating_one    (0),
            seating_two    (0),
            month          (0),
            day            (0),
            year           (0),
            grass          (false) {  }
        baseball_stadium(QString sn,
                         QString sa,
                         QString ct,
                         QString st,
                         QString z,
                         QString bo,
                         QString d1,
                         QString d2,
                         long s1,
                         long s2,
                         int m,
                         int d,
                         int y,
                         bool g) :
            stadium_name   (sn),
            street_address (sa),
            city           (ct),
            state          (st),
            zip            (z),
            box_office_num (bo),
            description_one(d1),
            description_two(d2),
            seating_one    (s1),
            seating_two    (s2),
            month          (m),
            day            (d),
            year           (y),
            grass          (g) {  }
        baseball_stadium(const baseball_stadium& o) :
            stadium_name   (o.stadium_name),
            street_address (o.street_address),
            city           (o.city),
            state          (o.state),
            zip            (o.zip),
            box_office_num (o.box_office_num),
            description_one(o.description_one),
            description_two(o.description_two),
            seating_one    (o.seating_one),
            seating_two    (o.seating_two),
            month          (o.month),
            day            (o.day),
            year           (o.year),
            grass          (o.grass) {  }

        // D E S T R U C T O R S
        ~baseball_stadium() {  }

        // G E T T E R S
        QString          get_stadium_name   () const { return stadium_name;    }
        QString          get_street_address () const { return street_address;  }
        QString          get_city           () const { return city;            }
        QString          get_state          () const { return state;           }
        QString          get_zip            () const { return zip;             }
        QString          get_box_office_num () const { return box_office_num;  }
        QString          get_description_one() const { return description_one; }
        QString          get_description_two() const { return description_two; }
        long             get_seating_one    () const { return seating_one;     }
        long             get_seating_two    () const { return seating_two;     }
        int              get_month          () const { return month;           }
        int              get_day            () const { return day;             }
        int              get_year           () const { return year;            }
        bool             get_grass          () const { return grass;           }
        baseball_stadium *get_stadium       ()       { return this;            }

        // S E T T E R S
        void set_stadium_name   (QString sn) { stadium_name    = sn; }
        void set_street_address (QString sa) { street_address  = sa; }
        void set_city           (QString ct) { city            = ct; }
        void set_state          (QString st) { state           = st; }
        void set_zip            (QString z ) { zip             = z;  }
        void set_box_office_num (QString bo) { box_office_num  = bo; }
        void set_description_one(QString d1) { description_one = d1; }
        void set_description_two(QString d2) { description_two = d2; }
        void set_seating_one    (long s1   ) { seating_one     = s1; }
        void set_seating_two    (long s2   ) { seating_two     = s2; }
        void set_month          (int m     ) { month           = m;  }
        void set_day            (int d     ) { day             = d;  }
        void set_year           (int y     ) { year            = y;  }
        void set_grass          (bool g    ) { grass           = g;  }
};

#endif
