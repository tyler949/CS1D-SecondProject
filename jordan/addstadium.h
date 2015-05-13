#ifndef ADDSTADIUM_H
#define ADDSTADIUM_H

#include <QWidget>
#include "graph_class.h"

namespace Ui {
class addstadium;
}

class addstadium : public QWidget
{
    Q_OBJECT

public:
    explicit addstadium(QWidget *parent = 0);
    addstadium(QWidget *parent, QVector<baseball_team*> tms);
    ~addstadium();

private slots:
    void on_cancelButton_clicked();

    void on_addButton_clicked();

private:
    Ui::addstadium *ui;
    QVector<baseball_team*> teams;
};

#endif // ADDSTADIUM_H
