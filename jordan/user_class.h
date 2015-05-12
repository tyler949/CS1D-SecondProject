#ifndef USER_CLASS_H
#define USER_CLASS_H

#include "sort_class.h"
#include "souvenir_class.h"

class user
{
    private:
        bool               admin;
        QString            username;
        QString            password;
        QVector<souvenir*> cart;

    public:
        // C O N S T R U C T O R S
        user() :
            admin   (false),
            username("username"),
            password("password") {  }
        user(bool a,
             QString u,
             QString p) :
            admin   (a),
            username(u),
            password(p) {  }
        user(QString u,
             QString p) :
            admin   (false),
            username(u),
            password(p) {  }

        // D E S T R U C T O R S
        ~user() {  }

        // G E T T E R S
        bool               get_admin   () const { return admin;    }
        QString            get_username() const { return username; }
        QString            get_password() const { return password; }
        QVector<souvenir*> get_cart    () const { return cart;     }

        // S E T T E R S
        void set_admin   (bool a     ) { admin    = a;      }
        void set_username(QString u  ) { username = u;      }
        void set_password(QString p  ) { password = p;      }
        void buy_it_now  (souvenir *s) { cart.push_back(s); }
};

class Admin : public user
{
    public:
        // S T A D I U M   M O D I F I E R S
        void modify_stadium_name(baseball_team *team,
                                 QString sn)
        {
            if(get_admin()) { team->set_stadium_name(sn); }
        }

        void modify_street_address(baseball_team *team,
                                   QString sa)
        {
            if(get_admin()) { team->set_street_address(sa); }
        }

        void modify_city(baseball_team *team,
                         QString ct)
        {
            if(get_admin()) { team->set_city(ct); }
        }

        void modify_state(baseball_team *team,
                          QString st)
        {
            if(get_admin()) { team->set_state(st); }
        }

        void  modify_zip(baseball_team *team,
                         QString z)
        {
            if(get_admin()) { team->set_zip(z); }
        }

        void modify_box_office_num(baseball_team *team,
                                   QString bo)
        {
            if(get_admin()) { team->set_box_office_num(bo); }
        }

        void modify_description_one(baseball_team *team,
                                    QString d1)
        {
            if(get_admin()) { team->set_description_one(d1); }
        }

        void modify_description_two(baseball_team *team,
                                    QString d2)
        {
            if(get_admin()) { team->set_description_two(d2); }
        }

        void modify_seating_one(baseball_team *team,
                                long s1)
        {
            if(get_admin()) { team->set_seating_one(s1); }
        }

        void modify_seating_two(baseball_team *team,
                                long s2)
        {
            if(get_admin()) { team->set_seating_two(s2); }
        }

        void modify_month(baseball_team *team,
                          int m)
        {
            if(get_admin()) { team->set_month(m); }
        }

        void modify_day(baseball_team *team,
                        int d)
        {
            if(get_admin()) { team->set_day(d); }
        }

        void modify_year(baseball_team *team,
                         int y)
        {
            if(get_admin()) { team->set_year(y); }
        }

        void modify_grass(baseball_team *team,
                          bool g)
        {
            if(get_admin()) { team->set_grass(g); }
        }

        // T E A M   M O D I F I E R S
        void modify_team_name(baseball_team *team,
                              QString n)
        {
            if(get_admin()) { team->set_team_name(n); }
        }

        void modify_league(baseball_team *team,
                           major_league l)
        {
            if(get_admin()) { team->set_league(l); }
        }

        void add_team(QVector<baseball_team*> teams,
                      QString tm,
                      major_league lg,
                      QString sn,
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
                      bool g)
        {
            if(get_admin())
            {
                baseball_team *team = new baseball_team;

                team->set_team_name(tm);
                team->set_league(lg);
                team->set_stadium_name(sn);
                team->set_street_address(sa);
                team->set_city(ct);
                team->set_state(st);
                team->set_zip(z);
                team->set_box_office_num(bo);
                team->set_description_one(d1);
                team->set_description_two(d2);
                team->set_seating_one(s1);
                team->set_seating_two(s2);
                team->set_month(m);
                team->set_day(d);
                team->set_year(y);
                team->set_grass(g);

                teams.push_back(team);
            }
        }

        // S O U V E N I R   M O D I F I E R S
        void add_souvenir(QVector<souvenir*> souvenirs,
                          QString t,
                          double p,
                          int q)
        {
            if(get_admin())
            {
                souvenir *new_souvenir = new souvenir(t, p, q);
                souvenirs.push_back(new_souvenir);
            }
        }

        void delete_souvenir(QVector<souvenir*> souvenirs,
                             souvenir *to_delete)
        {
            if(get_admin())
            {
                int i = 0;

                while(souvenirs.at(i) != to_delete &&
                      i < souvenirs.size())
                {
                    i++;
                }

                if(souvenirs.at(i) == to_delete)
                {
                    souvenirs.erase(souvenirs.begin() + i);
                }
            }
        }

        void modify_type(souvenir *to_modify,
                         QString t)
        {
            if(get_admin()) { to_modify->set_type(t); }
        }

        void modify_price(souvenir *to_modify,
                          double p)
        {
            if(get_admin()) { to_modify->set_price(p); }
        }

        void modify_quantity(souvenir *to_modify,
                             int q)
        {
            if(get_admin()) { to_modify->set_quantity(q); }
        }
};

#endif
