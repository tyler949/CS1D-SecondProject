#ifndef ADMINLOGIN_H
#define ADMINLOGIN_H

#include "graph_class.h"
#include <QWidget>

namespace Ui {
class adminlogin;
}

class adminlogin : public QWidget
{
    Q_OBJECT

public:
    explicit adminlogin(QWidget *parent = 0);
    adminlogin(QWidget *parent, QVector<baseball_team*> tms);
    ~adminlogin();

private slots:
    void on_cancelButton_clicked();

    void on_loginButton_clicked();

private:
    Ui::adminlogin *ui;
    QVector<baseball_team*> teams;
};

#endif // ADMINLOGIN_H
