#include "header.h"

void build::read_in()
{
    // Jordan's Path: "C:/Users/Jordan/Desktop/Project-2/stadium_data.txt"
    QFile file("C:/Users/Jordan/Desktop/Project-2/stadium_data.txt");

    if(!file.open(QFile::ReadOnly | QFile::Text))
    {
        qDebug() << "\n\nBUILD: FAILED TO OPEN FILE\n\n";
    }
    else
    {
        qDebug() << "\n\nBUILD: FILE OPENED SUCCESSFULLY\n\n";
        QTextStream in(&file);
        teams.clear();

        /*
         * Format of "stadium_data.txt":
         *   - stadium name (string)
         *   - home team name (string)
         *   - major league (string -> major_league)
         *   - stadium street address (string)
         *   - stadium city (string)
         *   - stadium state (string)
         *   - stadium zipcode (string)
         *   - box office phone number (string)
         *   - month stadium opened (int)
         *   - day stadium opened (int)
         *   - year stadium opened (int)
         *   - primary seating capacity (int)
         *   - primary seating description (string)
         *   - secondary seating capacity (int)
         *   - seconday seating description (string)
         */

        QString string;

        while(!in.atEnd())
        {
            baseball_team *team = new baseball_team;

            string = in.readLine();
            team->set_stadium_name(string);

            string = in.readLine();
            team->set_team_name(string);

            string = in.readLine();
            if(string == "American League") { team->set_league(AMERICAN_LEAGUE); }
            else if(string == "National League") { team->set_league(NATIONAL_LEAGUE); }
            else { team->set_league(MAJOR_LEAGUE); }

            string = in.readLine();
            team->set_street_address(string);

            string = in.readLine();
            team->set_city(string);

            string = in.readLine();
            team->set_state(string);

            string = in.readLine();
            team->set_zip(string);

            string = in.readLine();
            team->set_box_office_num(string);

            string = in.readLine();
            team->set_month(string.toInt());

            string = in.readLine();
            team->set_day(string.toInt());

            string = in.readLine();
            team->set_year(string.toInt());

            string = in.readLine();
            team->set_seating_one(string.toLong());

            string = in.readLine();
            team->set_description_one(string);

            string = in.readLine();
            team->set_seating_two(string.toLong());

            string = in.readLine();
            team->set_description_two(string);

            team->set_grass(true); // According to Wiki, all stadiums have grass

            in.readLine();

            teams.push_back(team);
        }

        file.close();
        qDebug() << "\n\nBUILD: FILE CLOSED\n\n";
    }
}

void build::print_built()
{
    for(int i = 0; i < teams.size(); i++)
    {
        qDebug() << teams.at(i)->get_stadium_name();
        qDebug() << teams.at(i)->get_team_name();
        if(teams.at(i)->get_league() == AMERICAN_LEAGUE) { qDebug() << "American League"; }
        else if(teams.at(i)->get_league() == NATIONAL_LEAGUE) { qDebug() << "National League"; }
        else { qDebug() << "Major League" ; }
        qDebug() << teams.at(i)->get_street_address();
        qDebug() << teams.at(i)->get_city();
        qDebug() << teams.at(i)->get_state();
        qDebug() << teams.at(i)->get_zip();
        qDebug() << teams.at(i)->get_box_office_num();
        qDebug() << teams.at(i)->get_month() << "/" << teams.at(i)->get_day() << "/" << teams.at(i)->get_year();
        qDebug() << teams.at(i)->get_description_one() << ": " << teams.at(i)->get_seating_one();
        qDebug() << teams.at(i)->get_description_two() << ": " << teams.at(i)->get_seating_two();
        qDebug() << "Grass Surface? Yes" << endl;
        qDebug() << endl;
    }
}
