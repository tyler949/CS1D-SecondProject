#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

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

    void on_pushButton_9_clicked();

    void on_loginOk_clicked();

    void on_backToMain_2_clicked();

    void on_login_clicked();

    void on_cancel_clicked();

private:
    Ui::MainWindow *ui;

    char userType; //'c' for customer, 'a' for admin, 'n' for none(no login made)
};

#endif // MAINWINDOW_H
