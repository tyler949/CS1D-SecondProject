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

    souvenir_class cap;
    cap.setSouvenirType("Baseball cap");
    cap.setSouvenirPrice(25.99);

    souvenirs.push_back(cap);

    souvenir_class bat;
    bat.setSouvenirType("Baseball bat");
    bat.setSouvenirPrice(35.35);

    souvenirs.push_back(bat);

    souvenir_class pennant;
    pennant.setSouvenirType("Baseball pennant");
    pennant.setSouvenirPrice(12.99);

    souvenirs.push_back(pennant);

    souvenir_class autogBaseball;
    autogBaseball.setSouvenirType("Autographed baseball");
    autogBaseball.setSouvenirPrice(19.99);

    souvenirs.push_back(autogBaseball);



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
        modifyStadium = false;
        ui->page_admin_options->show();
    }

    ui->userNameLine->setFocus();
}

void MainWindow::on_quit_clicked()
{
     this->close();
}



void MainWindow::on_backToMain_2_clicked()
{
    ui->page_modify_stadium->hide();
    ui->page_main_window->show();
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

            ui->page_admin_login->hide();
            modifyStadium = false;
            ui->page_admin_options->show();


//            // GRANT ACCESS TO ADMIN WIDGET
////            ui->page_admin_login->hide();
//            QMessageBox::information(this, "Log-in was successful", "success!");
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
    QWidget *radioButtonList;

    radioButtonList = new QWidget;
    QVBoxLayout *layList = new QVBoxLayout(this);


    viewInfoRadioButton.clear();

    for (QVector<baseball_team>::iterator it = stadiums.begin(); it != stadiums.end(); ++it)
    {
        QRadioButton *button = new QRadioButton(it->get_stadium_name(), this);

        viewInfoRadioButton.push_back(button);

        layList->addWidget(button);
        radioButtonList->setLayout(layList);
    }

//    scrollAreaStacked->addWidget(radioButtonList);

    ui->scrollArea->setWidget(radioButtonList);

    ui->page_main_window->hide();
    ui->page_view_stadiums->show();
}

void MainWindow::on_viewInformation_clicked()
{

    for(int count = 0; count < viewInfoRadioButton.size(); count++)
    {

        if(viewInfoRadioButton.at(count)->isChecked())
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
            ui->lineInputDate_2->setText(m+'/'+d+'/'+y);
            ui->lineCapacity->setText(s1);
            ui->lineCapacity_2->setText(s2);
            ui->lineDescription1->setText(stadiums.at(count).get_description_one());
            ui->lineDescription2->setText(stadiums.at(count).get_description_two());


        }

        viewInfoRadioButton.at(count)->setChecked(false);


    }

    ui->page_view_stadiums->hide();
    ui->page_view_information->show();

}

void MainWindow::on_backToList_clicked()
{
  ui->page_view_information->hide();
  ui->page_view_stadiums->show();
}

void MainWindow::on_modifyStadium_clicked()
{

    viewInfoRadioButton.clear();

    QVBoxLayout *layList = new QVBoxLayout(this);


    for (QVector<baseball_team>::iterator it = stadiums.begin(); it != stadiums.end(); ++it)
    {
        QRadioButton *button = new QRadioButton(it->get_stadium_name(), this);

        viewInfoRadioButton.push_back(button);

        layList->addWidget(button);
    }

    ui->scrollAreaStadiumModify->setLayout(layList);

    ui->page_admin_options->hide();
    ui->page_stadium_to_modify->show();
}

void MainWindow::on_modify_clicked()
{

    stadiumIterator = stadiums.begin();
    bool found = false;

    for(int count = 0; count < viewInfoRadioButton.size(); count++)
    {


        if(viewInfoRadioButton.at(count)->isChecked())
        {

            QString league;

            if(stadiums.at(count).get_league() ==  AMERICAN_LEAGUE)
            {
                league  = "American League";
            }
            else if(stadiums.at(count).get_league() ==  NATIONAL_LEAGUE)
            {
                league  = "National League";
            }

            QString m = QString::number(stadiums.at(count).get_month());
            QString d = QString::number(stadiums.at(count).get_day());
            QString y = QString::number(stadiums.at(count).get_year());
            QString s1 = QString::number(stadiums.at(count).get_seating_one());
            QString s2 = QString::number(stadiums.at(count).get_seating_two());


            found = true;

            ui->lineInputTeamName->setText(stadiums.at(count).get_team_name());
            ui->lineInputLeague->setText(league);
            ui->lineInputStadiumName->setText(stadiums.at(count).get_stadium_name());
            ui->lineInputStreet->setText(stadiums.at(count).get_address());
            ui->lineInputCity->setText(stadiums.at(count).get_city());
            ui->lineInputState->setText(stadiums.at(count).get_state());
            ui->lineInputZip->setText(stadiums.at(count).get_zip());
            ui->lineInputBox->setText(stadiums.at(count).get_box_office_num());
            ui->lineM->setText(m);
            ui->lineD->setText(d);
            ui->lineY->setText(y);
            ui->lineInputCapacity->setText(s1);
            ui->lineInputCapacity2->setText(s2);
            ui->lineInputDescription1->setText(stadiums.at(count).get_description_one());
            ui->lineInputDescription2->setText(stadiums.at(count).get_description_two());

        }

        if(found != true)
        {
            stadiumIterator++;
        }


        viewInfoRadioButton.at(count)->setChecked(false);

    }
    ui->page_stadium_to_modify->hide();
    ui->page_modify_stadium->show();
}

void MainWindow::on_submit_clicked()
{
    if(modifyStadium)
    {
        Admin admin;
        int m;
        int d;
        int y;
        int c1;
        int c2;

        m = ui->lineM->text().toInt();
        d = ui->lineD->text().toInt();
        y = ui->lineY->text().toInt();

        c1 = ui->lineInputCapacity->text().toInt();
        c2 = ui->lineInputCapacity2->text().toInt();


        stadiumIterator->set_stadium_name(ui->lineInputStadiumName->text());
        stadiumIterator->set_address(ui->lineInputStreet->text());
        stadiumIterator->set_city(ui->lineInputCity->text());
        stadiumIterator->set_state(ui->lineInputState->text());
        stadiumIterator->set_zip(ui->lineInputZip->text());
        stadiumIterator->set_box_office(ui->lineInputBox->text());
        stadiumIterator->set_seating_one(c1);
        stadiumIterator->set_seating_two(c2);
        stadiumIterator->set_description_one(ui->lineDescription1->text());
        stadiumIterator->set_description_two(ui->lineDescription2->text());


        stadiumIterator->set_day(d);
        stadiumIterator->set_month(m);
        stadiumIterator->set_year(y);


        ui->lineInputStadiumName->text().clear();
        ui->lineInputStreet->text().clear();
        ui->lineInputCity->text().clear();
        ui->lineInputState->text().clear();
        ui->lineInputZip->text().clear();
        ui->lineInputBox->text().clear();
        ui->lineDescription1->text().clear();
        ui->lineDescription2->text().clear();
        ui->lineInputCapacity->text().clear();
        ui->lineInputCapacity2->text().clear();

        }
        else
        {

            baseball_team* object;
            bool valid = true;

            object = new baseball_team;

            object->set_stadium_name(ui->lineInputStadiumName->text());
            object->set_team_name(ui->lineInputTeamName->text());
            if(ui->lineInputLeague->text() == "American League")
            { object->set_league(AMERICAN_LEAGUE); }
            else if(ui->lineInputLeague->text() == "National League")
            { object->set_league(NATIONAL_LEAGUE); }
            else
            {
                valid = false;
                QMessageBox::information(this, "Invalid Input", "Enter American League or National League");
            }

            int m = ui->lineM->text().toInt();
            int d = ui->lineD->text().toInt();
            int y = ui->lineY->text().toInt();

            QString c1 = ui->lineInputCapacity->text();
            QString c2 = ui->lineInputCapacity2->text();

            int s1 = c1.toInt();
            int s2 = c2.toInt();

            if((m<0 || m>12) || (d<0 || d>31) || (y<1700 || y>2015))
            {
                valid = false;
                QMessageBox::information(this, "Invalid Input", "Incorrect Date");
            }

            if(valid)
            {
                object->set_address(ui->lineInputStreet->text());
                object->set_city(ui->lineInputCity->text());
                object->set_state(ui->lineInputState->text());
                object->set_zip(ui->lineInputZip->text());
                object->set_box_office(ui->lineInputBox->text());
                object->set_month(m);
                object->set_day(d);
                object->set_year(y);
                object->set_seating_one(s1);
                object->set_description_one(ui->lineDescription1->text());
                object->set_seating_two(s2);
                object->set_description_two(ui->lineDescription2->text());

                stadiums.push_back(*object);

                ui->page_modify_stadium->hide();
                ui->page_main_window->show();
            }

        }




}

void MainWindow::on_passwordLine_returnPressed()
{
    this->on_login_clicked();
}

void MainWindow::on_backToList_2_clicked()
{
    ui->page_admin_options->hide();
    ui->page_main_window->show();
}

void MainWindow::on_addTeam_clicked()
{

    ui->lineInputTeamName->text().clear();
    ui->lineInputLeague->text().clear();
    ui->lineInputStadiumName->text().clear();
    ui->lineInputStreet->text().clear();
    ui->lineInputCity->text().clear();
    ui->lineInputState->text().clear();
    ui->lineInputZip->text().clear();
    ui->lineInputBox->text().clear();
    ui->lineDescription1->text().clear();
    ui->lineDescription2->text().clear();
    ui->lineInputCapacity->text().clear();
    ui->lineInputCapacity2->text().clear();


    ui->page_admin_options->hide();
    ui->page_modify_stadium->show();




}

void MainWindow::on_modifySouvenir_clicked()
{
     modifySouvenir = false;
     ui->page_admin_options->hide();
     ui->page_modify_souvenirs->show();


}

void MainWindow::on_selectSouvenir_clicked()
{

    souvenirIt = souvenirs.begin();
    bool found = false;

    for(int count = 0; count < SouvenirRadioButton.size(); count++)
    {

        if(SouvenirRadioButton.at(count)->isChecked())
        {
            QString p = QString::number(souvenirs[count].getSouvenirPrice());

            ui->lineSouvenirType->setText(souvenirs[count].getSouvenirType());
            ui->linePrice->setText(p);

            found = true;

            SouvenirRadioButton[count]->setChecked(false);

        }

        if(found != true)
        {
            souvenirIt++;
        }

    }
    if(modifySouvenir)
    {
        ui->page_souvenir_list->hide();
        ui->page_add_modify_souvenir->show();
    }
    else
    {
        souvenirs.erase(souvenirIt);
        ui->page_souvenir_list->hide();
        ui->page_modify_souvenirs->show();
    }






}

void MainWindow::on_backToList_3_clicked()
{    
    QWidget *radioButtonList;

    QVBoxLayout *layList = new QVBoxLayout(this);

    SouvenirRadioButton.clear();

    radioButtonList = new QWidget;

    for (QVector<souvenir_class>::iterator it = souvenirs.begin(); it != souvenirs.end(); ++it)
    {
        QRadioButton *button = new QRadioButton(it->getSouvenirType(), this);

        SouvenirRadioButton.push_back(button);

        layList->addWidget(button);

        radioButtonList->setLayout(layList);
    }


    ui->scrollArea_3->setWidget(radioButtonList);

    ui->page_add_modify_souvenir->hide();
    ui->page_souvenir_list->show();
}

void MainWindow::on_submit_2_clicked()
{

   double p = ui->linePrice->text().toDouble();

   if(modifySouvenir)
   {


       souvenirIt->setSouvenirType(ui->lineSouvenirType->text());
       souvenirIt->setSouvenirPrice(p);
   }
   else
   {
      souvenir_class newSouvenir;
      newSouvenir.setSouvenirType(ui->lineSouvenirType->text());
      newSouvenir.setSouvenirPrice(p);
      souvenirs.push_back(newSouvenir);
   }





    ui->page_add_modify_souvenir->hide();
    ui->page_admin_options->show();

}

void MainWindow::on_changePrice_clicked()
{
    QWidget *radioButtonList;

    QVBoxLayout *layList = new QVBoxLayout(this);

    SouvenirRadioButton.clear();

    modifySouvenir = true;


    radioButtonList = new QWidget;

    for (QVector<souvenir_class>::iterator it = souvenirs.begin(); it != souvenirs.end(); ++it)
    {
        QRadioButton *button = new QRadioButton(it->getSouvenirType(), this);

        SouvenirRadioButton.push_back(button);

        layList->addWidget(button);

        radioButtonList->setLayout(layList);
    }


     ui->scrollArea_3->setWidget(radioButtonList);


    ui->page_modify_souvenirs->hide();
    ui->page_souvenir_list->show();
}

void MainWindow::on_backToMain_3_clicked()
{
    ui->page_souvenir_list->hide();
    modifySouvenir = false;
    ui->page_modify_souvenirs->show();
}

void MainWindow::on_backToMain2_2_clicked()
{
    ui->page_modify_souvenirs->hide();
    ui->page_admin_options->show();
}

void MainWindow::on_deleteSouvenir_clicked()
{
    QWidget *radioButtonList;

    QVBoxLayout *layList = new QVBoxLayout(this);

    SouvenirRadioButton.clear();


    radioButtonList = new QWidget;

    for (QVector<souvenir_class>::iterator it = souvenirs.begin(); it != souvenirs.end(); ++it)
    {
        QRadioButton *button = new QRadioButton(it->getSouvenirType(), this);

        SouvenirRadioButton.push_back(button);

        layList->addWidget(button);

        radioButtonList->setLayout(layList);
    }


     ui->scrollArea_3->setWidget(radioButtonList);


    ui->page_modify_souvenirs->hide();
    ui->page_souvenir_list->show();
}

void MainWindow::on_addSouvenir_clicked()
{
    ui->lineSouvenirType->clear();
    ui->linePrice->clear();

    ui->page_modify_souvenirs->hide();
    ui->page_add_modify_souvenir->show();
}
