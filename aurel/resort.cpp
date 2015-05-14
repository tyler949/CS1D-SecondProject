#include "mainwindow.h"

void(major_league league)
{
            sort_data newSort(stadiums);


            switch(league)
            {
            case TEAM_NAME:
                sorted = new_sort.by_team_name(league);
                break;
            case STADIUM_NAME:
                sorted = new_sort.by_stadium_name(league);
                break;
            case DATE_OPENED:
                sorted = new_sort.by_date_opened(league);
                break;
            default:
                qDebug() << "You fucked up. Can't resort.";
            }

    //        ui->stadiumList->clear();

    //        QStringList titles;
    //        QString date;

    //        ui->stadiumList->setRowCount(sorted.size());
    //        titles << "Team" << "Home Stadium" << "Date Opened" << "Grass";
    //        ui->stadiumList->setHorizontalHeaderLabels(titles);
    //        ui->stadiumList->setEditTriggers(QAbstractItemView::NoEditTriggers);
    //        ui->stadiumList->setSelectionBehavior(QAbstractItemView::SelectRows);
    //        ui->stadiumList->setSelectionMode(QAbstractItemView::SingleSelection);

    //        for(int i = 0; i < sorted.size(); i++)
    //        {
    //            ui->stadiumList->setItem(i, 0, new QTableWidgetItem(sorted.at(i)->get_team_name()));
    //            ui->stadiumList->setItem(i, 1, new QTableWidgetItem(sorted.at(i)->get_stadium_name()));
    //            ui->stadiumList->setItem(i, 3, new QTableWidgetItem("Y"));

    //            date = (QString::number(sorted.at(i)->get_month()) + "/"
    //                 +  QString::number(sorted.at(i)->get_day()) + "/"
    //                 +  QString::number(sorted.at(i)->get_year()));
    //            ui->stadiumList->setItem(i, 2, new QTableWidgetItem(date));
    //        }
}
