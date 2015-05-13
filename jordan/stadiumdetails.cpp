#include "stadiumdetails.h"
#include "ui_stadiumdetails.h"

stadiumdetails::stadiumdetails(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::stadiumdetails)
{
    ui->setupUi(this);
}

stadiumdetails::stadiumdetails(QWidget *parent, QVector<baseball_team*> tms, QString search) :
    QWidget(parent),
    ui(new Ui::stadiumdetails)
{
    teams = tms;

    int i = 0;

    while(tms.at(i)->get_team_name() != search && i < tms.size())
    {
        i++;
    }

    if(tms.at(i)->get_team_name() != search)
    {
        qDebug() << "error";
        this->close();
    }

    ui->setupUi(this);

    ui->detailsList->clear();

    QStringList titles;
    QString des1, des2, seat1, seat2, address, date;

    if(tms.at(i)->get_description_one() == "n/a")
    {
        des1 = "Annual Capacity";
        des2 = "";

        seat1 = (QString::number(tms.at(i)->get_seating_one()));
        seat2 = "";
    }
    else
    {
        des1 = tms.at(i)->get_description_one();
        des2 = tms.at(i)->get_description_two();

        seat1 = (QString::number(tms.at(i)->get_seating_one()));
        seat2 = (QString::number(tms.at(i)->get_seating_two()));
    }

    ui->detailsList->setRowCount(9);
    ui->detailsList->setColumnCount(1);
    titles << "Team" << "League" << "Home Stadium" << "Address" << "Box Office"
           << "Opened" << "Grass" << des1 << des2;
    ui->detailsList->setColumnWidth(0,300);
    ui->detailsList->setRowHeight(3, 50);
    ui->detailsList->setVerticalHeaderLabels(titles);
    ui->detailsList->horizontalHeader()->hide();
    ui->detailsList->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->detailsList->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->detailsList->setSelectionMode(QAbstractItemView::SingleSelection);

    address = tms.at(i)->get_street_address() + "\n"
            + tms.at(i)->get_city() + ", "
            + tms.at(i)->get_state() + " "
            + tms.at(i)->get_zip();

    date = (QString::number(tms.at(i)->get_month()) + "/"
         +  QString::number(tms.at(i)->get_day()) + "/"
         +  QString::number(tms.at(i)->get_year()));

//    qDebug() << address;

    ui->detailsList->setItem(0, 0, new QTableWidgetItem(tms.at(i)->get_team_name()));

    if(tms.at(i)->get_league() == AMERICAN_LEAGUE)
    {
        ui->detailsList->setItem(1, 0, new QTableWidgetItem("American League"));
    }
    else
    {
        ui->detailsList->setItem(1, 0, new QTableWidgetItem("National League"));
    }

    ui->detailsList->setItem(2, 0, new QTableWidgetItem(tms.at(i)->get_stadium_name()));
    ui->detailsList->setItem(3, 0, new QTableWidgetItem(address));
    ui->detailsList->setItem(4, 0, new QTableWidgetItem(tms.at(i)->get_box_office_num()));
    ui->detailsList->setItem(5, 0, new QTableWidgetItem(date));
    ui->detailsList->setItem(6, 0, new QTableWidgetItem("Yes"));
    ui->detailsList->setItem(7, 0, new QTableWidgetItem(seat1));
    ui->detailsList->setItem(8, 0, new QTableWidgetItem(seat2));

}

stadiumdetails::~stadiumdetails()
{
    delete ui;
}

void stadiumdetails::on_exitDetails_clicked()
{
    this->close();
}
