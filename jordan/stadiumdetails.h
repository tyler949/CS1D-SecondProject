#ifndef STADIUMDETAILS_H
#define STADIUMDETAILS_H

#include <QWidget>
#include "stadiumswindow.h"

namespace Ui {
class stadiumdetails;
}

class stadiumdetails : public QWidget
{
    Q_OBJECT

public:
    explicit stadiumdetails(QWidget *parent = 0);
    ~stadiumdetails();
    stadiumdetails(QWidget *parent, QVector<baseball_team*> tms, QString search);

private slots:
    void on_exitDetails_clicked();

private:
    Ui::stadiumdetails *ui;
    QVector<baseball_team*> teams;
};

#endif // STADIUMDETAILS_H
