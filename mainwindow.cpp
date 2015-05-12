#include "mainwindow.h"
#include "ui_mainwindow.h"

void read_stadiums_from_file(QVector<baseball_team>& vector);

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->page_main_window->show();


    read_stadiums_from_file(stadiums);


    userType = 'n';
}

void MainWindow::setUser(char type)
{
    userType = type;
}

char MainWindow::getUser()
{
    return userType;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_planTrip_clicked()
{
    ui->page_main_window->hide();
    ui->page_plan_trip->show();
}

void MainWindow::on_backToMain_clicked()
{
    ui->page_view_stadiums->hide();
    ui->page_main_window->show();
}

void MainWindow::on_viewTheList_clicked()
{
    ui->page_main_window->hide();
    ui->page_view_stadiums->show();

}

void MainWindow::on_backToMain2_clicked()
{
    ui->page_plan_trip->hide();
    ui->page_main_window->show();
}

void MainWindow::on_adminLogin_clicked()
{
    ui->page_main_window->hide();

    if(userType == 'n')
    {
        ui->page_admin_login->show();
    }
    else if (userType == 'a')
    {
        ui->page_admin_login->show();
    }

    ui->userNameLine->setFocus();
}

void MainWindow::on_quit_clicked()
{
     this->close();
}



void MainWindow::on_backToMain_2_clicked()
{
//    ui->page_admin_login_success_2->hide();
//    ui->page_main_window->show();
}

void MainWindow::on_login_clicked()
{
        // admin credentials!!
        if (ui->userNameLine->text() == "admin" &&    (ui->passwordLine->text() == "password"
                                                    || ui->passwordLine->text() == "admin"))
        {
            qDebug() << "login success";
            userType = 'a'; //set user to admin

            //restore to previous state
            ui->passwordLine->clear();
            ui->userNameLine->clear();
            ui->userNameLine->setFocus();


            // GRANT ACCESS TO ADMIN WIDGET
//            ui->page_admin_login->hide();
            QMessageBox::information(this, "Log-in was successful", "success!");
        }
        else
        {
            QMessageBox::information(this, "Log-in Failed", "invalid username or password");
        }
}

void MainWindow::on_cancel_clicked()
{
     ui->page_admin_login->hide();
     ui->page_main_window->show();
}

void MainWindow::on_majorAlphabet_clicked()
{

    QVBoxLayout *layList = new QVBoxLayout(this);


    for (QVector<baseball_team>::iterator it = stadiums.begin(); it != stadiums.end(); ++it)
    {
        QRadioButton *button = new QRadioButton(it->get_stadium_name(), this);

        viewInforRadioButton.push_back(button);

        layList->addWidget(button);
    }

    ui->scrollAreaWidgetContents->setLayout(layList);

    ui->page_main_window->hide();
    ui->page_view_stadiums->show();
}

void MainWindow::on_viewInformation_clicked()
{
    for(int count = 0; count < viewInforRadioButton.size(); count++)
    {

        if(viewInforRadioButton.at(count)->isChecked())
        {
            QString m = QString::number(stadiums.at(count).get_month());
            QString d = QString::number(stadiums.at(count).get_day());
            QString y = QString::number(stadiums.at(count).get_year());
            QString s1 = QString::number(stadiums.at(count).get_seating_one());
            QString s2 = QString::number(stadiums.at(count).get_seating_two());

            ui->lineStadiumName->setText(stadiums.at(count).get_stadium_name());
            ui->lineStreetAddress->setText(stadiums.at(count).get_address());
            ui->lineCity->setText(stadiums.at(count).get_city());
            ui->lineState->setText(stadiums.at(count).get_state());
            ui->lineZip->setText(stadiums.at(count).get_zip());
            ui->lineBoxOffice->setText(stadiums.at(count).get_box_office_num());
            ui->lineDateOpened->setText(m+'/'+d+'/'+y);
            ui->lineCapacity->setText(s1);
            ui->lineCapacity_2->setText(s2);
            ui->lineDescription1->setText(stadiums.at(count).get_description_one());
            ui->lineDescription2->setText(stadiums.at(count).get_description_two());


        }

        viewInforRadioButton.at(count)->setChecked(false);

        ui->page_view_stadiums->hide();
        ui->page_view_information->show();
    }

}

void MainWindow::on_backToList_clicked()
{
  ui->page_view_information->hide();
  ui->page_view_stadiums->show();
}
