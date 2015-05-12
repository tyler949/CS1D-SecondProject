#include "purchasesouvenirs.h"
#include "ui_purchasesouvenirs.h"
#include "trip.h"

purchasesouvenirs::purchasesouvenirs(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::purchasesouvenirs)
{
    ui->setupUi(this);
}

purchasesouvenirs::purchasesouvenirs(QWidget *parent, QVector<baseball_team*> tms, QVector<baseball_team*> des) :
    QWidget(parent),
    ui(new Ui::purchasesouvenirs)
{
    ui->setupUi(this);
    teams = tms;
    destinations = des;

    QStringList titles;
    titles << "Type" << "Cost" << "Quantity";

    ui->souvenirTree->setColumnCount(3);
    ui->souvenirTree->setColumnWidth(0, 230);
    ui->souvenirTree->setColumnWidth(1, 70);
    ui->souvenirTree->setColumnWidth(2, 70);
    ui->souvenirTree->setHeaderLabels(titles);


    for(int i = 0; i < destinations.size(); i++)
    {
        souvenir *cap = new souvenir("Baseball cap", 25.99, 0);
        caps.push_back(cap);
        souvenir *bat = new souvenir("Baseball bat", 35.35, 0);
        bats.push_back(bat);
        souvenir *pennant = new souvenir("Team pennant", 12.99, 0);
        pennants.push_back(pennant);
        souvenir *baseball = new souvenir("Autographed baseball", 19.99, 0);
        baseballs.push_back(baseball);
    }

    for(int i = 0; i < destinations.size(); i++)
    {
        QTreeWidgetItem *parent = new QTreeWidgetItem(ui->souvenirTree);
        parent->setText(0, destinations.at(i)->get_team_name());

        QTreeWidgetItem *item;

        item = new QTreeWidgetItem();
        item->setText(0, caps.at(i)->get_type());
        item->setText(1, '$' + QString::number(caps.at(i)->get_price()));
        item->setText(2, QString::number(caps.at(i)->get_quantity()));
        parent->addChild(item);

        item = new QTreeWidgetItem();
        item->setText(0, bats.at(i)->get_type());
        item->setText(1, '$' + QString::number(bats.at(i)->get_price()));
        item->setText(2, QString::number(bats.at(i)->get_quantity()));
        parent->addChild(item);

        item = new QTreeWidgetItem();
        item->setText(0, pennants.at(i)->get_type());
        item->setText(1, '$' + QString::number(pennants.at(i)->get_price()));
        item->setText(2, QString::number(pennants.at(i)->get_quantity()));
        parent->addChild(item);

        item = new QTreeWidgetItem();
        item->setText(0, baseballs.at(i)->get_type());
        item->setText(1, '$' + QString::number(baseballs.at(i)->get_price()));
        item->setText(2, QString::number(baseballs.at(i)->get_quantity()));
        parent->addChild(item);

        parent->setExpanded(true);
    }

}

purchasesouvenirs::~purchasesouvenirs()
{
    delete ui;
}

void purchasesouvenirs::on_addButton_clicked()
{
    if(ui->souvenirTree->selectedItems().front()->text(1) != "")
    {
        int i = 0;

        while(i < destinations.size())
        {
            QTreeWidgetItem *item = ui->souvenirTree->selectedItems().front();

            if(destinations.at(i)->get_team_name() == item->parent()->text(0))
            {
                QString find_type = item->text(0);
                int q;

                if(find_type == "Baseball cap")
                {
                    q = caps.at(i)->get_quantity();
                    caps.at(i)->set_quantity(q + 1);
                }
                else if(find_type == "Baseball bat")
                {
                    q = bats.at(i)->get_quantity();
                    bats.at(i)->set_quantity(q + 1);
                }
                else if(find_type == "Team pennant")
                {
                    q = pennants.at(i)->get_quantity();
                    pennants.at(i)->set_quantity(q + 1);
                }
                else
                {
                    q = baseballs.at(i)->get_quantity();
                    baseballs.at(i)->set_quantity(q + 1);
                }
                update_tree();
                return;
            }

            i++;
        }
    }
}

void purchasesouvenirs::on_removeButton_clicked()
{
    if(ui->souvenirTree->selectedItems().front()->text(1) != "")
    {
        int i = 0;

        while(i < destinations.size())
        {
            QTreeWidgetItem *item = ui->souvenirTree->selectedItems().front();

            if(destinations.at(i)->get_team_name() == item->parent()->text(0))
            {
                QString find_type = item->text(0);
                int q;

                if(find_type == "Baseball cap")
                {
                    q = caps.at(i)->get_quantity();
                    if(q > 0)
                    {
                        caps.at(i)->set_quantity(q - 1);
                    }
                }
                else if(find_type == "Baseball bat")
                {
                    q = bats.at(i)->get_quantity();
                    if(q > 0)
                    {
                        bats.at(i)->set_quantity(q - 1);
                    }
                }
                else if(find_type == "Team pennant")
                {
                    q = pennants.at(i)->get_quantity();
                    if(q > 0)
                    {
                        pennants.at(i)->set_quantity(q - 1);
                    }
                }
                else
                {
                    q = baseballs.at(i)->get_quantity();
                    if(q > 0)
                    {
                        baseballs.at(i)->set_quantity(q - 1);
                    }
                }
                update_tree();
                return;
            }

            i++;
        }
    }
}

void purchasesouvenirs::on_finishedButton_clicked()
{

}

void purchasesouvenirs::on_cancelButton_clicked()
{
    trip *goBack = new trip(NULL, teams);
    goBack->show();
    this->close();
}

void purchasesouvenirs::update_tree()
{
    ui->souvenirTree->clear();

    QStringList titles;
    titles << "Type" << "Cost" << "Quantity";

    ui->souvenirTree->setColumnCount(3);
    ui->souvenirTree->setColumnWidth(0, 230);
    ui->souvenirTree->setColumnWidth(1, 70);
    ui->souvenirTree->setColumnWidth(2, 70);
    ui->souvenirTree->setHeaderLabels(titles);

    for(int i = 0; i < destinations.size(); i++)
    {
        QTreeWidgetItem *parent = new QTreeWidgetItem(ui->souvenirTree);
        parent->setText(0, destinations.at(i)->get_team_name());

        QTreeWidgetItem *item;

        item = new QTreeWidgetItem();
        item->setText(0, caps.at(i)->get_type());
        item->setText(1, '$' + QString::number(caps.at(i)->get_price()));
        item->setText(2, QString::number(caps.at(i)->get_quantity()));
        parent->addChild(item);

        item = new QTreeWidgetItem();
        item->setText(0, bats.at(i)->get_type());
        item->setText(1, '$' + QString::number(bats.at(i)->get_price()));
        item->setText(2, QString::number(bats.at(i)->get_quantity()));
        parent->addChild(item);

        item = new QTreeWidgetItem();
        item->setText(0, pennants.at(i)->get_type());
        item->setText(1, '$' + QString::number(pennants.at(i)->get_price()));
        item->setText(2, QString::number(pennants.at(i)->get_quantity()));
        parent->addChild(item);

        item = new QTreeWidgetItem();
        item->setText(0, baseballs.at(i)->get_type());
        item->setText(1, '$' + QString::number(baseballs.at(i)->get_price()));
        item->setText(2, QString::number(baseballs.at(i)->get_quantity()));
        parent->addChild(item);
        parent->setExpanded(true);
    }
}
