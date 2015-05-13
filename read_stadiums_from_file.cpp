#include "baseball_team_class.h"
#include <QVector>
#include <QString>
#include <QFile>
#include <QDebug>
#include <QTextStream>

// a function that outputs all the variables of a baseball team object for debuging purposes
void output_object(baseball_team &object);

void read_stadiums_from_file(QVector<baseball_team>& vector)
{
    baseball_team* object;
    QString string;

    vector.clear();

    // ATTENTION
    // be sure to change the following line so that it opens the file on your computer
    QFile file("/Users/Jordan/Documents/GitHub/CS1D-SecondProject/stadium_data.txt");

    // DEBUG: reading from write only file to test if the stadiums were written on the file correctly
//    QFile file("/Users/Aurel/Documents/GitHub/CS1D-SecondProject/write_only.txt");

    if(!file.open(QFile::ReadOnly | QFile::Text))
    {
        qDebug() << "faliled to open file\n";
    }
    else
    {
        qDebug() << "file opened\n";
        /*
         * The stadiums are stored in the following format:
         * - Stadium Name (string)
         * - Home team Name (string)
         * - Major League (string)
         * - Street Address (string)
         * - City (string)
         * - State (string)
         * - Zip code (string)
         * - Box Office # (string)
         * - month opened (int)
         * - day opened (int)
         * - year opened (int)
         * - primary Seating Capacity (int)
         * - primary seating description (string)
         * - secondry seating capacity (int)
         * - secondary seating description (string)
         */
        QTextStream in(&file);
        while(!in.atEnd())
        {
            object = new baseball_team;

            string = in.readLine();
            object->set_stadium_name(string);
            string = in.readLine();
            object->set_team_name(string);
            string = in.readLine();
            if(string == "American League")
            { object->set_league(AMERICAN_LEAGUE); }
            else if(string == "National League")
            { object->set_league(NATIONAL_LEAGUE); }
            string = in.readLine();
            object->set_address(string);
            string = in.readLine();
            object->set_city(string);
            string = in.readLine();
            object->set_state(string);
            string = in.readLine();
            object->set_zip(string);
            string = in.readLine();
            object->set_box_office(string);
            string = in.readLine();
            object->set_month(string.toInt());
            string = in.readLine();
            object->set_day(string.toInt());
            string = in.readLine();
            object->set_year(string.toInt());
            string = in.readLine();
            object->set_seating_one(string.toInt());
            string = in.readLine();
            object->set_description_one(string);
            string = in.readLine();
            object->set_seating_two(string.toInt());
            string = in.readLine();
            object->set_description_two(string);
            in.readLine();

            vector.push_back(*object);
        }
        file.close();
        qDebug() << "file closed\n";

        // DEBUG
        for(int x = 0; x < vector.size(); x++)
        {
            output_object(vector[x]);
        }
        qDebug() << "Vector is size " << vector.size();
    }
}

void output_object(baseball_team &object)
{
    qDebug() << object.get_stadium_name();
    qDebug() << object.get_team_name();
    if(object.get_league() == AMERICAN_LEAGUE)
    { qDebug() << "American League"; }
    else if(object.get_league() == NATIONAL_LEAGUE)
    { qDebug() << "National League"; }
    qDebug() << object.get_address();
    qDebug() << object.get_city();
    qDebug() << object.get_state();
    qDebug() << object.get_zip();
    qDebug() << object.get_box_office_num();
    qDebug() << object.get_month() << '/' << object.get_day() << '/' << object.get_year();
    qDebug() << object.get_description_one() << ": " << object.get_seating_one();
    qDebug() << object.get_description_two() << ": " << object.get_seating_two() << '\n';
}

