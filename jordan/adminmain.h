#ifndef ADMINMAIN_H
#define ADMINMAIN_H

#include <QWidget>

namespace Ui {
class adminMain;
}

class adminMain : public QWidget
{
    Q_OBJECT

public:
    explicit adminMain(QWidget *parent = 0);
    ~adminMain();

private slots:
    void on_addStadium_clicked();

private:
    Ui::adminMain *ui;
};

#endif // ADMINMAIN_H
