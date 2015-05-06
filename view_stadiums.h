#ifndef VIEW_STADIUMS_H
#define VIEW_STADIUMS_H

#include <QWidget>
#include <QDialog>
#include <QVector>
#include "baseball_team_class.h"

namespace Ui {
class view_stadiums;
}

class view_stadiums : public QDialog
{
    Q_OBJECT

public:
    explicit view_stadiums(QWidget *parent = 0);
    ~view_stadiums();

private:
    Ui::view_stadiums *ui;
    QVector<baseball_team> stadiums;
};

#endif // VIEW_STADIUMS_H
