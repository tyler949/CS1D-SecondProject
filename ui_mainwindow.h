/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QStackedWidget *stackedWidget;
    QWidget *page_main_window;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *majorAlphabet;
    QPushButton *planTrip;
    QPushButton *adminLogin;
    QPushButton *quit;
    QLabel *title;
    QWidget *page_view_stadiums;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QPushButton *backToMain;
    QPushButton *viewInformation;
    QWidget *page_plan_trip;
    QPushButton *backToMain2;
    QWidget *page_admin_login;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QLabel *userName;
    QLineEdit *userNameLine;
    QHBoxLayout *horizontalLayout_2;
    QLabel *password;
    QLineEdit *passwordLine;
    QWidget *horizontalLayoutWidget_4;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *login;
    QPushButton *cancel;
    QLabel *label_2;
    QWidget *verticalLayoutWidget_5;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_8;
    QLabel *label_9;
    QWidget *page_view_information;
    QLabel *sadiumName;
    QLabel *streetAddress;
    QLabel *city;
    QLabel *state;
    QLabel *zip;
    QLabel *boxOffice;
    QLabel *dateOpened;
    QLabel *capacity;
    QLabel *stadiumInformationTitle;
    QLineEdit *lineStadiumName;
    QLineEdit *lineStreetAddress;
    QLineEdit *lineCity;
    QLineEdit *lineState;
    QLineEdit *lineZip;
    QLineEdit *lineBoxOffice;
    QLineEdit *lineCapacity;
    QPushButton *backToList;
    QLineEdit *lineCapacity_2;
    QLineEdit *lineDescription1;
    QLineEdit *lineDescription2;
    QLineEdit *lineInputDate_2;
    QWidget *page_admin_options;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QPushButton *modifyStadium;
    QPushButton *addTeam;
    QPushButton *modifySouvenir;
    QPushButton *backToList_2;
    QWidget *page_stadium_to_modify;
    QLabel *label;
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaStadiumModify;
    QPushButton *modify;
    QWidget *page_modify_stadium;
    QLabel *sadiumName_2;
    QLineEdit *lineInputStadiumName;
    QLineEdit *lineInputStreet;
    QLineEdit *lineInputCity;
    QLineEdit *lineInputState;
    QLineEdit *lineInputZip;
    QLineEdit *lineInputBox;
    QLabel *state_2;
    QLabel *streetAddress_2;
    QLabel *city_2;
    QLabel *zip_2;
    QLabel *boxOffice_2;
    QLabel *capacity_2;
    QLabel *dateOpened_2;
    QLineEdit *lineInputCapacity;
    QLineEdit *lineInputDescription1;
    QLineEdit *lineInputCapacity2;
    QLineEdit *lineInputDescription2;
    QLabel *title_2;
    QPushButton *submit;
    QLineEdit *lineM;
    QLineEdit *lineY;
    QLineEdit *lineD;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QPushButton *backToMain_2;
    QLabel *teamName;
    QLabel *league;
    QLineEdit *lineInputTeamName;
    QLineEdit *lineInputLeague;
    QWidget *page_modify_souvenirs;
    QWidget *verticalLayoutWidget_4;
    QVBoxLayout *verticalLayout_4;
    QPushButton *addSouvenir;
    QPushButton *deleteSouvenir;
    QPushButton *changePrice;
    QPushButton *backToMain2_2;
    QWidget *page_add_modify_souvenir;
    QLabel *addDeleteTitle;
    QLabel *label_6;
    QLabel *label_7;
    QLineEdit *lineSouvenirType;
    QLineEdit *linePrice;
    QPushButton *submit_2;
    QPushButton *backToList_3;
    QWidget *page_souvenir_list;
    QLabel *selectSouvenirTitle;
    QScrollArea *scrollArea_3;
    QWidget *scrollAreaWidgetContents_2;
    QPushButton *backToMain_3;
    QPushButton *selectSouvenir;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(604, 478);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 0, 601, 431));
        page_main_window = new QWidget();
        page_main_window->setObjectName(QStringLiteral("page_main_window"));
        verticalLayoutWidget = new QWidget(page_main_window);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(140, 80, 320, 341));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        majorAlphabet = new QPushButton(verticalLayoutWidget);
        majorAlphabet->setObjectName(QStringLiteral("majorAlphabet"));

        verticalLayout->addWidget(majorAlphabet);

        planTrip = new QPushButton(verticalLayoutWidget);
        planTrip->setObjectName(QStringLiteral("planTrip"));

        verticalLayout->addWidget(planTrip);

        adminLogin = new QPushButton(verticalLayoutWidget);
        adminLogin->setObjectName(QStringLiteral("adminLogin"));

        verticalLayout->addWidget(adminLogin);

        quit = new QPushButton(verticalLayoutWidget);
        quit->setObjectName(QStringLiteral("quit"));

        verticalLayout->addWidget(quit);

        title = new QLabel(page_main_window);
        title->setObjectName(QStringLiteral("title"));
        title->setGeometry(QRect(140, 30, 321, 61));
        stackedWidget->addWidget(page_main_window);
        page_view_stadiums = new QWidget();
        page_view_stadiums->setObjectName(QStringLiteral("page_view_stadiums"));
        scrollArea = new QScrollArea(page_view_stadiums);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setGeometry(QRect(120, 70, 291, 321));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 289, 319));
        scrollArea->setWidget(scrollAreaWidgetContents);
        backToMain = new QPushButton(page_view_stadiums);
        backToMain->setObjectName(QStringLiteral("backToMain"));
        backToMain->setGeometry(QRect(10, 10, 93, 28));
        viewInformation = new QPushButton(page_view_stadiums);
        viewInformation->setObjectName(QStringLiteral("viewInformation"));
        viewInformation->setGeometry(QRect(472, 380, 101, 28));
        stackedWidget->addWidget(page_view_stadiums);
        page_plan_trip = new QWidget();
        page_plan_trip->setObjectName(QStringLiteral("page_plan_trip"));
        backToMain2 = new QPushButton(page_plan_trip);
        backToMain2->setObjectName(QStringLiteral("backToMain2"));
        backToMain2->setGeometry(QRect(10, 10, 93, 28));
        stackedWidget->addWidget(page_plan_trip);
        page_admin_login = new QWidget();
        page_admin_login->setObjectName(QStringLiteral("page_admin_login"));
        verticalLayoutWidget_3 = new QWidget(page_admin_login);
        verticalLayoutWidget_3->setObjectName(QStringLiteral("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(170, 150, 241, 91));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        userName = new QLabel(verticalLayoutWidget_3);
        userName->setObjectName(QStringLiteral("userName"));

        horizontalLayout->addWidget(userName);

        userNameLine = new QLineEdit(verticalLayoutWidget_3);
        userNameLine->setObjectName(QStringLiteral("userNameLine"));

        horizontalLayout->addWidget(userNameLine);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        password = new QLabel(verticalLayoutWidget_3);
        password->setObjectName(QStringLiteral("password"));

        horizontalLayout_2->addWidget(password);

        passwordLine = new QLineEdit(verticalLayoutWidget_3);
        passwordLine->setObjectName(QStringLiteral("passwordLine"));
        passwordLine->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(passwordLine);


        verticalLayout_3->addLayout(horizontalLayout_2);

        horizontalLayoutWidget_4 = new QWidget(page_admin_login);
        horizontalLayoutWidget_4->setObjectName(QStringLiteral("horizontalLayoutWidget_4"));
        horizontalLayoutWidget_4->setGeometry(QRect(170, 270, 241, 41));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_4);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        login = new QPushButton(horizontalLayoutWidget_4);
        login->setObjectName(QStringLiteral("login"));

        horizontalLayout_3->addWidget(login);

        cancel = new QPushButton(horizontalLayoutWidget_4);
        cancel->setObjectName(QStringLiteral("cancel"));

        horizontalLayout_3->addWidget(cancel);

        label_2 = new QLabel(page_admin_login);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(230, 80, 121, 51));
        verticalLayoutWidget_5 = new QWidget(page_admin_login);
        verticalLayoutWidget_5->setObjectName(QStringLiteral("verticalLayoutWidget_5"));
        verticalLayoutWidget_5->setGeometry(QRect(210, 320, 196, 80));
        verticalLayout_5 = new QVBoxLayout(verticalLayoutWidget_5);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(verticalLayoutWidget_5);
        label_8->setObjectName(QStringLiteral("label_8"));

        verticalLayout_5->addWidget(label_8);

        label_9 = new QLabel(verticalLayoutWidget_5);
        label_9->setObjectName(QStringLiteral("label_9"));

        verticalLayout_5->addWidget(label_9);

        stackedWidget->addWidget(page_admin_login);
        page_view_information = new QWidget();
        page_view_information->setObjectName(QStringLiteral("page_view_information"));
        sadiumName = new QLabel(page_view_information);
        sadiumName->setObjectName(QStringLiteral("sadiumName"));
        sadiumName->setGeometry(QRect(60, 70, 101, 16));
        streetAddress = new QLabel(page_view_information);
        streetAddress->setObjectName(QStringLiteral("streetAddress"));
        streetAddress->setGeometry(QRect(60, 100, 101, 16));
        city = new QLabel(page_view_information);
        city->setObjectName(QStringLiteral("city"));
        city->setGeometry(QRect(60, 130, 55, 16));
        state = new QLabel(page_view_information);
        state->setObjectName(QStringLiteral("state"));
        state->setGeometry(QRect(60, 160, 55, 16));
        zip = new QLabel(page_view_information);
        zip->setObjectName(QStringLiteral("zip"));
        zip->setGeometry(QRect(60, 190, 55, 16));
        boxOffice = new QLabel(page_view_information);
        boxOffice->setObjectName(QStringLiteral("boxOffice"));
        boxOffice->setGeometry(QRect(60, 220, 71, 16));
        dateOpened = new QLabel(page_view_information);
        dateOpened->setObjectName(QStringLiteral("dateOpened"));
        dateOpened->setGeometry(QRect(60, 250, 91, 16));
        capacity = new QLabel(page_view_information);
        capacity->setObjectName(QStringLiteral("capacity"));
        capacity->setGeometry(QRect(60, 280, 81, 16));
        stadiumInformationTitle = new QLabel(page_view_information);
        stadiumInformationTitle->setObjectName(QStringLiteral("stadiumInformationTitle"));
        stadiumInformationTitle->setGeometry(QRect(240, 20, 121, 16));
        lineStadiumName = new QLineEdit(page_view_information);
        lineStadiumName->setObjectName(QStringLiteral("lineStadiumName"));
        lineStadiumName->setGeometry(QRect(170, 70, 221, 22));
        lineStreetAddress = new QLineEdit(page_view_information);
        lineStreetAddress->setObjectName(QStringLiteral("lineStreetAddress"));
        lineStreetAddress->setGeometry(QRect(170, 100, 221, 22));
        lineCity = new QLineEdit(page_view_information);
        lineCity->setObjectName(QStringLiteral("lineCity"));
        lineCity->setGeometry(QRect(170, 130, 221, 22));
        lineState = new QLineEdit(page_view_information);
        lineState->setObjectName(QStringLiteral("lineState"));
        lineState->setGeometry(QRect(170, 160, 221, 22));
        lineZip = new QLineEdit(page_view_information);
        lineZip->setObjectName(QStringLiteral("lineZip"));
        lineZip->setGeometry(QRect(170, 190, 221, 22));
        lineBoxOffice = new QLineEdit(page_view_information);
        lineBoxOffice->setObjectName(QStringLiteral("lineBoxOffice"));
        lineBoxOffice->setGeometry(QRect(170, 220, 221, 22));
        lineCapacity = new QLineEdit(page_view_information);
        lineCapacity->setObjectName(QStringLiteral("lineCapacity"));
        lineCapacity->setGeometry(QRect(170, 280, 61, 22));
        backToList = new QPushButton(page_view_information);
        backToList->setObjectName(QStringLiteral("backToList"));
        backToList->setGeometry(QRect(10, 10, 93, 28));
        lineCapacity_2 = new QLineEdit(page_view_information);
        lineCapacity_2->setObjectName(QStringLiteral("lineCapacity_2"));
        lineCapacity_2->setGeometry(QRect(370, 280, 61, 22));
        lineDescription1 = new QLineEdit(page_view_information);
        lineDescription1->setObjectName(QStringLiteral("lineDescription1"));
        lineDescription1->setGeometry(QRect(240, 280, 113, 22));
        lineDescription2 = new QLineEdit(page_view_information);
        lineDescription2->setObjectName(QStringLiteral("lineDescription2"));
        lineDescription2->setGeometry(QRect(450, 280, 113, 22));
        lineInputDate_2 = new QLineEdit(page_view_information);
        lineInputDate_2->setObjectName(QStringLiteral("lineInputDate_2"));
        lineInputDate_2->setGeometry(QRect(170, 250, 221, 22));
        stackedWidget->addWidget(page_view_information);
        page_admin_options = new QWidget();
        page_admin_options->setObjectName(QStringLiteral("page_admin_options"));
        verticalLayoutWidget_2 = new QWidget(page_admin_options);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(190, 130, 231, 141));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        modifyStadium = new QPushButton(verticalLayoutWidget_2);
        modifyStadium->setObjectName(QStringLiteral("modifyStadium"));

        verticalLayout_2->addWidget(modifyStadium);

        addTeam = new QPushButton(verticalLayoutWidget_2);
        addTeam->setObjectName(QStringLiteral("addTeam"));

        verticalLayout_2->addWidget(addTeam);

        modifySouvenir = new QPushButton(verticalLayoutWidget_2);
        modifySouvenir->setObjectName(QStringLiteral("modifySouvenir"));

        verticalLayout_2->addWidget(modifySouvenir);

        backToList_2 = new QPushButton(page_admin_options);
        backToList_2->setObjectName(QStringLiteral("backToList_2"));
        backToList_2->setGeometry(QRect(10, 10, 93, 28));
        stackedWidget->addWidget(page_admin_options);
        page_stadium_to_modify = new QWidget();
        page_stadium_to_modify->setObjectName(QStringLiteral("page_stadium_to_modify"));
        label = new QLabel(page_stadium_to_modify);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(170, 30, 231, 31));
        scrollArea_2 = new QScrollArea(page_stadium_to_modify);
        scrollArea_2->setObjectName(QStringLiteral("scrollArea_2"));
        scrollArea_2->setGeometry(QRect(170, 70, 231, 281));
        scrollArea_2->setWidgetResizable(true);
        scrollAreaStadiumModify = new QWidget();
        scrollAreaStadiumModify->setObjectName(QStringLiteral("scrollAreaStadiumModify"));
        scrollAreaStadiumModify->setGeometry(QRect(0, 0, 229, 279));
        scrollArea_2->setWidget(scrollAreaStadiumModify);
        modify = new QPushButton(page_stadium_to_modify);
        modify->setObjectName(QStringLiteral("modify"));
        modify->setGeometry(QRect(490, 370, 101, 28));
        stackedWidget->addWidget(page_stadium_to_modify);
        page_modify_stadium = new QWidget();
        page_modify_stadium->setObjectName(QStringLiteral("page_modify_stadium"));
        sadiumName_2 = new QLabel(page_modify_stadium);
        sadiumName_2->setObjectName(QStringLiteral("sadiumName_2"));
        sadiumName_2->setGeometry(QRect(60, 120, 101, 16));
        lineInputStadiumName = new QLineEdit(page_modify_stadium);
        lineInputStadiumName->setObjectName(QStringLiteral("lineInputStadiumName"));
        lineInputStadiumName->setGeometry(QRect(170, 120, 221, 22));
        lineInputStreet = new QLineEdit(page_modify_stadium);
        lineInputStreet->setObjectName(QStringLiteral("lineInputStreet"));
        lineInputStreet->setGeometry(QRect(170, 150, 221, 22));
        lineInputCity = new QLineEdit(page_modify_stadium);
        lineInputCity->setObjectName(QStringLiteral("lineInputCity"));
        lineInputCity->setGeometry(QRect(170, 180, 221, 22));
        lineInputState = new QLineEdit(page_modify_stadium);
        lineInputState->setObjectName(QStringLiteral("lineInputState"));
        lineInputState->setGeometry(QRect(170, 210, 221, 22));
        lineInputZip = new QLineEdit(page_modify_stadium);
        lineInputZip->setObjectName(QStringLiteral("lineInputZip"));
        lineInputZip->setGeometry(QRect(170, 240, 221, 22));
        lineInputBox = new QLineEdit(page_modify_stadium);
        lineInputBox->setObjectName(QStringLiteral("lineInputBox"));
        lineInputBox->setGeometry(QRect(170, 270, 221, 22));
        state_2 = new QLabel(page_modify_stadium);
        state_2->setObjectName(QStringLiteral("state_2"));
        state_2->setGeometry(QRect(60, 210, 101, 16));
        streetAddress_2 = new QLabel(page_modify_stadium);
        streetAddress_2->setObjectName(QStringLiteral("streetAddress_2"));
        streetAddress_2->setGeometry(QRect(60, 150, 101, 16));
        city_2 = new QLabel(page_modify_stadium);
        city_2->setObjectName(QStringLiteral("city_2"));
        city_2->setGeometry(QRect(60, 180, 101, 16));
        zip_2 = new QLabel(page_modify_stadium);
        zip_2->setObjectName(QStringLiteral("zip_2"));
        zip_2->setGeometry(QRect(60, 240, 101, 16));
        boxOffice_2 = new QLabel(page_modify_stadium);
        boxOffice_2->setObjectName(QStringLiteral("boxOffice_2"));
        boxOffice_2->setGeometry(QRect(60, 270, 101, 16));
        capacity_2 = new QLabel(page_modify_stadium);
        capacity_2->setObjectName(QStringLiteral("capacity_2"));
        capacity_2->setGeometry(QRect(60, 340, 101, 16));
        dateOpened_2 = new QLabel(page_modify_stadium);
        dateOpened_2->setObjectName(QStringLiteral("dateOpened_2"));
        dateOpened_2->setGeometry(QRect(60, 310, 101, 16));
        lineInputCapacity = new QLineEdit(page_modify_stadium);
        lineInputCapacity->setObjectName(QStringLiteral("lineInputCapacity"));
        lineInputCapacity->setGeometry(QRect(170, 340, 61, 22));
        lineInputDescription1 = new QLineEdit(page_modify_stadium);
        lineInputDescription1->setObjectName(QStringLiteral("lineInputDescription1"));
        lineInputDescription1->setGeometry(QRect(240, 340, 113, 22));
        lineInputCapacity2 = new QLineEdit(page_modify_stadium);
        lineInputCapacity2->setObjectName(QStringLiteral("lineInputCapacity2"));
        lineInputCapacity2->setGeometry(QRect(360, 340, 61, 22));
        lineInputDescription2 = new QLineEdit(page_modify_stadium);
        lineInputDescription2->setObjectName(QStringLiteral("lineInputDescription2"));
        lineInputDescription2->setGeometry(QRect(430, 340, 113, 22));
        title_2 = new QLabel(page_modify_stadium);
        title_2->setObjectName(QStringLiteral("title_2"));
        title_2->setGeometry(QRect(260, 20, 55, 16));
        submit = new QPushButton(page_modify_stadium);
        submit->setObjectName(QStringLiteral("submit"));
        submit->setGeometry(QRect(490, 370, 101, 28));
        lineM = new QLineEdit(page_modify_stadium);
        lineM->setObjectName(QStringLiteral("lineM"));
        lineM->setGeometry(QRect(170, 310, 41, 22));
        lineY = new QLineEdit(page_modify_stadium);
        lineY->setObjectName(QStringLiteral("lineY"));
        lineY->setGeometry(QRect(270, 310, 61, 22));
        lineD = new QLineEdit(page_modify_stadium);
        lineD->setObjectName(QStringLiteral("lineD"));
        lineD->setGeometry(QRect(220, 310, 41, 22));
        label_3 = new QLabel(page_modify_stadium);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(170, 290, 55, 16));
        label_4 = new QLabel(page_modify_stadium);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(220, 290, 41, 16));
        label_5 = new QLabel(page_modify_stadium);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(270, 290, 55, 16));
        backToMain_2 = new QPushButton(page_modify_stadium);
        backToMain_2->setObjectName(QStringLiteral("backToMain_2"));
        backToMain_2->setGeometry(QRect(10, 20, 93, 28));
        teamName = new QLabel(page_modify_stadium);
        teamName->setObjectName(QStringLiteral("teamName"));
        teamName->setGeometry(QRect(60, 60, 101, 16));
        league = new QLabel(page_modify_stadium);
        league->setObjectName(QStringLiteral("league"));
        league->setGeometry(QRect(60, 90, 101, 16));
        lineInputTeamName = new QLineEdit(page_modify_stadium);
        lineInputTeamName->setObjectName(QStringLiteral("lineInputTeamName"));
        lineInputTeamName->setGeometry(QRect(170, 60, 221, 22));
        lineInputLeague = new QLineEdit(page_modify_stadium);
        lineInputLeague->setObjectName(QStringLiteral("lineInputLeague"));
        lineInputLeague->setGeometry(QRect(170, 90, 221, 22));
        stackedWidget->addWidget(page_modify_stadium);
        page_modify_souvenirs = new QWidget();
        page_modify_souvenirs->setObjectName(QStringLiteral("page_modify_souvenirs"));
        verticalLayoutWidget_4 = new QWidget(page_modify_souvenirs);
        verticalLayoutWidget_4->setObjectName(QStringLiteral("verticalLayoutWidget_4"));
        verticalLayoutWidget_4->setGeometry(QRect(190, 110, 211, 131));
        verticalLayout_4 = new QVBoxLayout(verticalLayoutWidget_4);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        addSouvenir = new QPushButton(verticalLayoutWidget_4);
        addSouvenir->setObjectName(QStringLiteral("addSouvenir"));

        verticalLayout_4->addWidget(addSouvenir);

        deleteSouvenir = new QPushButton(verticalLayoutWidget_4);
        deleteSouvenir->setObjectName(QStringLiteral("deleteSouvenir"));

        verticalLayout_4->addWidget(deleteSouvenir);

        changePrice = new QPushButton(verticalLayoutWidget_4);
        changePrice->setObjectName(QStringLiteral("changePrice"));

        verticalLayout_4->addWidget(changePrice);

        backToMain2_2 = new QPushButton(page_modify_souvenirs);
        backToMain2_2->setObjectName(QStringLiteral("backToMain2_2"));
        backToMain2_2->setGeometry(QRect(10, 10, 93, 28));
        stackedWidget->addWidget(page_modify_souvenirs);
        page_add_modify_souvenir = new QWidget();
        page_add_modify_souvenir->setObjectName(QStringLiteral("page_add_modify_souvenir"));
        addDeleteTitle = new QLabel(page_add_modify_souvenir);
        addDeleteTitle->setObjectName(QStringLiteral("addDeleteTitle"));
        addDeleteTitle->setGeometry(QRect(260, 20, 71, 21));
        label_6 = new QLabel(page_add_modify_souvenir);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(70, 90, 55, 16));
        label_7 = new QLabel(page_add_modify_souvenir);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(70, 150, 55, 16));
        lineSouvenirType = new QLineEdit(page_add_modify_souvenir);
        lineSouvenirType->setObjectName(QStringLiteral("lineSouvenirType"));
        lineSouvenirType->setGeometry(QRect(130, 90, 151, 22));
        linePrice = new QLineEdit(page_add_modify_souvenir);
        linePrice->setObjectName(QStringLiteral("linePrice"));
        linePrice->setGeometry(QRect(130, 150, 71, 22));
        submit_2 = new QPushButton(page_add_modify_souvenir);
        submit_2->setObjectName(QStringLiteral("submit_2"));
        submit_2->setGeometry(QRect(490, 370, 101, 28));
        backToList_3 = new QPushButton(page_add_modify_souvenir);
        backToList_3->setObjectName(QStringLiteral("backToList_3"));
        backToList_3->setGeometry(QRect(10, 10, 93, 28));
        stackedWidget->addWidget(page_add_modify_souvenir);
        page_souvenir_list = new QWidget();
        page_souvenir_list->setObjectName(QStringLiteral("page_souvenir_list"));
        selectSouvenirTitle = new QLabel(page_souvenir_list);
        selectSouvenirTitle->setObjectName(QStringLiteral("selectSouvenirTitle"));
        selectSouvenirTitle->setGeometry(QRect(230, 20, 121, 41));
        scrollArea_3 = new QScrollArea(page_souvenir_list);
        scrollArea_3->setObjectName(QStringLiteral("scrollArea_3"));
        scrollArea_3->setGeometry(QRect(190, 90, 211, 221));
        scrollArea_3->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QStringLiteral("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 209, 219));
        scrollArea_3->setWidget(scrollAreaWidgetContents_2);
        backToMain_3 = new QPushButton(page_souvenir_list);
        backToMain_3->setObjectName(QStringLiteral("backToMain_3"));
        backToMain_3->setGeometry(QRect(10, 10, 93, 28));
        selectSouvenir = new QPushButton(page_souvenir_list);
        selectSouvenir->setObjectName(QStringLiteral("selectSouvenir"));
        selectSouvenir->setGeometry(QRect(490, 370, 101, 28));
        stackedWidget->addWidget(page_souvenir_list);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 604, 26));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        majorAlphabet->setText(QApplication::translate("MainWindow", "Stadium List", 0));
        planTrip->setText(QApplication::translate("MainWindow", "Plan a Trip", 0));
        adminLogin->setText(QApplication::translate("MainWindow", "Admin Log-in", 0));
        quit->setText(QApplication::translate("MainWindow", "Quit", 0));
        title->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; text-decoration: underline;\">Take Me Out to the Ballgame</span></p></body></html>", 0));
        backToMain->setText(QApplication::translate("MainWindow", "back", 0));
        viewInformation->setText(QApplication::translate("MainWindow", "Select", 0));
        backToMain2->setText(QApplication::translate("MainWindow", "back", 0));
        userName->setText(QApplication::translate("MainWindow", "User Name:", 0));
        password->setText(QApplication::translate("MainWindow", "Password  :", 0));
        login->setText(QApplication::translate("MainWindow", "OK", 0));
        cancel->setText(QApplication::translate("MainWindow", "Cancel", 0));
        label_2->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:10pt;\">Admin Log-in</span></p></body></html>", 0));
        label_8->setText(QApplication::translate("MainWindow", "User Name: \"admin\"", 0));
        label_9->setText(QApplication::translate("MainWindow", "password: \"admin\" or \"password\"", 0));
        sadiumName->setText(QApplication::translate("MainWindow", "Stadium Name:", 0));
        streetAddress->setText(QApplication::translate("MainWindow", "Street Address: ", 0));
        city->setText(QApplication::translate("MainWindow", "City: ", 0));
        state->setText(QApplication::translate("MainWindow", "State: ", 0));
        zip->setText(QApplication::translate("MainWindow", "Zip: ", 0));
        boxOffice->setText(QApplication::translate("MainWindow", "Box Office: ", 0));
        dateOpened->setText(QApplication::translate("MainWindow", "Date Opened: ", 0));
        capacity->setText(QApplication::translate("MainWindow", "Capacity", 0));
        stadiumInformationTitle->setText(QApplication::translate("MainWindow", "Stadium Information", 0));
        backToList->setText(QApplication::translate("MainWindow", "back", 0));
        modifyStadium->setText(QApplication::translate("MainWindow", "Modify Stadium Information", 0));
        addTeam->setText(QApplication::translate("MainWindow", "Add a New Team", 0));
        modifySouvenir->setText(QApplication::translate("MainWindow", "Modify Souvenirs", 0));
        backToList_2->setText(QApplication::translate("MainWindow", "back", 0));
        label->setText(QApplication::translate("MainWindow", "Select the stadium you want to modify", 0));
        modify->setText(QApplication::translate("MainWindow", "Select", 0));
        sadiumName_2->setText(QApplication::translate("MainWindow", "Stadium Name:", 0));
        state_2->setText(QApplication::translate("MainWindow", "State:", 0));
        streetAddress_2->setText(QApplication::translate("MainWindow", "Street Address:", 0));
        city_2->setText(QApplication::translate("MainWindow", "City:", 0));
        zip_2->setText(QApplication::translate("MainWindow", "Zip:", 0));
        boxOffice_2->setText(QApplication::translate("MainWindow", "Box Office:", 0));
        capacity_2->setText(QApplication::translate("MainWindow", "Capacity", 0));
        dateOpened_2->setText(QApplication::translate("MainWindow", "Date Opened:", 0));
        title_2->setText(QApplication::translate("MainWindow", "title", 0));
        submit->setText(QApplication::translate("MainWindow", "Submit", 0));
        label_3->setText(QApplication::translate("MainWindow", "  M", 0));
        label_4->setText(QApplication::translate("MainWindow", "   D", 0));
        label_5->setText(QApplication::translate("MainWindow", "   Y", 0));
        backToMain_2->setText(QApplication::translate("MainWindow", "back", 0));
        teamName->setText(QApplication::translate("MainWindow", "Team Name:", 0));
        league->setText(QApplication::translate("MainWindow", "Lague:", 0));
        addSouvenir->setText(QApplication::translate("MainWindow", "Add a New Souvenir", 0));
        deleteSouvenir->setText(QApplication::translate("MainWindow", "Delete the Souvenir", 0));
        changePrice->setText(QApplication::translate("MainWindow", "Change the Souvenir", 0));
        backToMain2_2->setText(QApplication::translate("MainWindow", "back", 0));
        addDeleteTitle->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        label_6->setText(QApplication::translate("MainWindow", "Type:", 0));
        label_7->setText(QApplication::translate("MainWindow", "Price:", 0));
        submit_2->setText(QApplication::translate("MainWindow", "Submit", 0));
        backToList_3->setText(QApplication::translate("MainWindow", "back", 0));
        selectSouvenirTitle->setText(QApplication::translate("MainWindow", "Select the Souvenir", 0));
        backToMain_3->setText(QApplication::translate("MainWindow", "back", 0));
        selectSouvenir->setText(QApplication::translate("MainWindow", "Select", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
