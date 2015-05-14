#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include <QDebug>
#include <baseball_team_class.h>
#include <QRadioButton>
#include "sort.h"
#include "souvenir.h"
#include "user.h"
#include <QStackedWidget>
#include <QVBoxLayout>
#include "headers.h"
#include <QStandardItem>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    void setUser(char type);
    char getUser();
    ~MainWindow();

private slots:


    void on_planTrip_clicked();

    void on_backToMain_clicked();

    void on_viewTheList_clicked();

    void on_backToMain2_clicked();

    void on_adminLogin_clicked();

    void on_quit_clicked();

    void on_backToMain_2_clicked();

    void on_login_clicked();

    void on_cancel_clicked();

    void on_majorAlphabet_clicked();

    void on_viewInformation_clicked();

    void on_backToList_clicked();

    void on_modify_clicked();

    void on_submit_clicked();

    void on_passwordLine_returnPressed();

    void on_backToList_2_clicked();

    void on_addTeam_clicked();

    void on_modifySouvenir_clicked();

    void on_selectSouvenir_clicked();

    void on_backToList_3_clicked();

    void on_submit_2_clicked();

    void on_changePrice_clicked();

    void on_backToMain_3_clicked();

    void on_backToMain2_2_clicked();

    void on_deleteSouvenir_clicked();

    void on_addSouvenir_clicked();

    void on_teamNameRadio_clicked();

    void on_stadiumNameRadio_clicked();

    void on_dateOpenedRadio_clicked();

    void on_americanLeagueRadio_clicked();

    void on_nationalLeagueRadio_clicked();

    void on_bothRadio_clicked();

    void on_grassRadio_clicked();

    void on_modifyStadiumButton_clicked();

private:
    Ui::MainWindow *ui;

    enum sortBy
    {
        TEAM_NAME,
        STADIUM_NAME,
        DATE_OPENED
    };


    major_league leagueSort;

    sortBy sortType;



    char userType; //'c' for customer, 'a' for admin, 'n' for none(no login made)

    QVector<baseball_team> stadiums;

    QVector<baseball_team*> stadiumPointers;

    QVector<baseball_team>::iterator stadiumIterator;

    QVector<souvenir_class>::iterator souvenirIt;

    QList<QRadioButton*> viewInfoRadioButton;

    QList<QRadioButton*> SouvenirRadioButton;

    QWidget *radioButtonList;

    QVBoxLayout *layList;

    QVector<souvenir_class> souvenirs;

    Admin admin;

    bool modifyStadium;
    bool modifySouvenir;

};

#endif // MAINWINDOW_H
