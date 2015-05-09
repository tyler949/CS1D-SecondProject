#include "baseball_team_class.h"
#include <QVector>
#include <QString>
#include <QFile>
#include <QDebug>
#include <QTextStream>

void write_stadiums_to_file(QVector<baseball_team>& vector)
{
    // ATTENTION
    // be sure to change the following line so that it opens the file on your computer
    QFile file("/Users/austinrosario/Desktop/CS1D group project 2/Local_Project/Local_CS1D_project_2/write_only.txt");

    if(!file.open(QFile::WriteOnly | QFile::Text))
    {
        qDebug() << "faliled to open file\n";
    }
    else
    {
        qDebug() << "file opened";
        QTextStream out(&file);
        for(int x = 0; x < vector.size(); x++)
        {
            out << vector[x].get_stadium_name() << '\n';
            out << vector[x].get_team_name() << '\n';
            if(vector[x].get_league() == AMERICAN_LEAGUE)
            { out << "American League\n"; }
            else if(vector[x].get_league() == NATIONAL_LEAGUE)
            { out << "National League\n"; }
            out << vector[x].get_address() << '\n';
            out << vector[x].get_city() << '\n';
            out << vector[x].get_state() << '\n';
            out << vector[x].get_zip() << '\n';
            out << vector[x].get_box_office_num() << '\n';
            out << vector[x].get_month() << '\n';
            out << vector[x].get_day() << '\n';
            out << vector[x].get_year() << '\n';
            out << vector[x].get_seating_one() << '\n';
            out << vector[x].get_description_one() << '\n';
            out << vector[x].get_seating_two() << '\n';
            out << vector[x].get_description_two() << "\n\n";
        }

        file.close();
    }
}
