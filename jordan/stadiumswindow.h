#ifndef STADIUMSWINDOW_H
#define STADIUMSWINDOW_H

#include <QWidget>
#include "graph_class.h"

namespace Ui {
class stadiumswindow;
}

class stadiumswindow : public QWidget
{
    Q_OBJECT

public:
    explicit stadiumswindow(QWidget *parent = 0);
    stadiumswindow(QWidget *parent, QVector<baseball_team*> tms);
    ~stadiumswindow();

private slots:
    void on_americanLeague_clicked();
    void on_nationalLeague_clicked();
    void on_bothLeagues_clicked   ();
    void on_teamName_clicked      ();
    void on_stadiumName_clicked   ();
    void on_dateOpened_clicked    ();
    void on_grassSurface_clicked  ();
    void on_detailsButton_clicked ();
    void on_exitList_clicked      ();

private:
    Ui::stadiumswindow *ui;
    QVector<baseball_team*> teams;
    QVector<baseball_team*> sorted;
    major_league league;
    sorted_by sort_by;

    void resort();
};

#endif // STADIUMSWINDOW_H
