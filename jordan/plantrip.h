#ifndef PLANTRIP_H
#define PLANTRIP_H

#include <QWidget>
#include "graph_class.h"

namespace Ui {
class plantrip;
}

class plantrip : public QWidget
{
    Q_OBJECT

public:
    explicit plantrip(QWidget *parent = 0);
    plantrip(QWidget *parent, QVector<baseball_team*> tms, QVector<baseball_team*> des);
    ~plantrip();

private slots:
    void on_visitAll_clicked();
    void on_visitSome_clicked();
    void on_returnButton_clicked();
    void on_startButton_clicked();

private:
    Ui::plantrip *ui;
    QVector<baseball_team*> teams;
    QVector<baseball_team*> destinations;
    baseball_team* start_at;
    QVector<edge*> display;

    void redisplay();
    baseball_team* with_name(QString name);
};

#endif // PLANTRIP_H
