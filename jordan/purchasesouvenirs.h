#ifndef PURCHASESOUVENIRS_H
#define PURCHASESOUVENIRS_H

#include <QWidget>
#include "graph_class.h"
#include "souvenir_class.h"

namespace Ui {
class purchasesouvenirs;
}

class purchasesouvenirs : public QWidget
{
    Q_OBJECT

public:
    explicit purchasesouvenirs(QWidget *parent = 0);
    purchasesouvenirs(QWidget *parent, QVector<baseball_team*> tms, QVector<baseball_team*> des);
    ~purchasesouvenirs();

private slots:
    void on_addButton_clicked     ();
    void on_removeButton_clicked  ();
    void on_finishedButton_clicked();
    void on_cancelButton_clicked  ();

private:
    Ui::purchasesouvenirs *ui;
    QVector<baseball_team*> teams;
    QVector<baseball_team*> destinations;
    QVector<souvenir*> caps;
    QVector<souvenir*> bats;
    QVector<souvenir*> pennants;
    QVector<souvenir*> baseballs;

    void update_tree();
};

#endif // PURCHASESOUVENIRS_H
