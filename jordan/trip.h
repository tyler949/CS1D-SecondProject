#ifndef TRIP_H
#define TRIP_H
#include "graph_class.h"

#include <QWidget>

namespace Ui {
class trip;
}

class trip : public QWidget
{
    Q_OBJECT

public:
    explicit trip(QWidget *parent = 0);
    trip(QWidget *parent, QVector<baseball_team*> tms);
    ~trip();

private slots:
    void on_addButton_clicked     ();
    void on_removeButton_clicked  ();
    void on_detailsButton_clicked ();
    void on_americanLeague_clicked();
    void on_nationalLeague_clicked();
    void on_majorLeague_clicked   ();
    void on_teamName_clicked      ();
    void on_stadiumName_clicked   ();
    void on_dateOpened_clicked    ();
    void on_finishButton_clicked  ();
    void on_cancelButton_clicked  ();
    void on_shortestTrip_clicked  ();

private:
    Ui::trip *ui;
    QVector<baseball_team*> teams;
    QVector<baseball_team*> destinations;
    QVector<baseball_team*> leftover;
    QVector<baseball_team*> sorted;
    major_league league;
    sorted_by sort_by;

    void resort();
    baseball_team *with_team(QString name);
    void delete_in(QString name, QVector<baseball_team*> &tms);
};

#endif // TRIP_H
