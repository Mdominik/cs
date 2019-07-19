/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *header_label;
    QGroupBox *login_form;
    QPushButton *login_btn;
    QLabel *psw_label;
    QLabel *id_label;
    QLineEdit *psw_input;
    QLineEdit *id_input;
    QTabWidget *mainMenu;
    QWidget *report;
    QTextBrowser *display;
    QLabel *labelWeekday;
    QLabel *labelRevenue;
    QLabel *revenue;
    QCheckBox *showExec;
    QCheckBox *showRegular;
    QLabel *numberExec;
    QLabel *labelExec;
    QLabel *numberRegular;
    QLabel *labelRegular;
    QLabel *login_header;
    QPushButton *display_btn;
    QComboBox *weekdayBox;
    QLabel *label;
    QWidget *all_purch;
    QTextBrowser *display_2;
    QPushButton *display_btn_2;
    QLabel *label_2;
    QLabel *grandTotal;
    QLabel *labelGrandTotal;
    QWidget *items_sold;
    QTextBrowser *display_3;
    QLabel *labelTotalRev;
    QLabel *totalRevenue;
    QLabel *label_3;
    QPushButton *display_btn_3;
    QComboBox *ItemsComboBox;
    QLineEdit *searchByItemsName;
    QPushButton *btn_searchByItemsName;
    QLabel *label_6;
    QWidget *members;
    QTextBrowser *display_4;
    QLabel *label_4;
    QComboBox *optionBox;
    QLabel *labelRevenue_4;
    QLabel *labelRevenue_5;
    QComboBox *expiryBox;
    QPushButton *display_btn_4;
    QPushButton *filter_btn;
    QLabel *labelRevenue_9;
    QComboBox *addDelete_combo;
    QPushButton *addDelete_btn;
    QLineEdit *lineName;
    QLineEdit *lineExecutive;
    QLineEdit *lineExpiry;
    QComboBox *delete_combobox;
    QWidget *inventory;
    QTextBrowser *display_5;
    QComboBox *addDeleteInventory;
    QLabel *label_5;
    QLabel *labelRevenue_6;
    QLineEdit *itemName;
    QLabel *labelRevenue_7;
    QLabel *labelRevenue_8;
    QLineEdit *grossPrice;
    QPushButton *display_btn_5;
    QPushButton *logout;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *personal_data;
    QLabel *admin_man;
    QLabel *id;
    QFrame *line;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(761, 592);
        MainWindow->setStyleSheet(QLatin1String("#centralWidget{\n"
"	color: #00B2FF;\n"
"	background-color: white;\n"
"}\n"
"\n"
"#header_label {\n"
"	color: #0088FF;\n"
"}\n"
"#id_input {\n"
"	color: #00B2FF;\n"
"}\n"
"\n"
"#id_label {\n"
"	color: #00B2FF;\n"
"}\n"
"\n"
"#login_btn {\n"
"	background-color: #00B2FF;\n"
"	color: white;\n"
"}\n"
"\n"
"#psw_input {\n"
"	color: #00B2FF;\n"
"}\n"
"\n"
"#psw_label{\n"
"	color: #00B2FF;\n"
"}"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        header_label = new QLabel(centralWidget);
        header_label->setObjectName(QStringLiteral("header_label"));
        header_label->setGeometry(QRect(20, 10, 552, 40));
        QFont font;
        font.setPointSize(16);
        header_label->setFont(font);
        header_label->setStyleSheet(QStringLiteral(""));
        login_form = new QGroupBox(centralWidget);
        login_form->setObjectName(QStringLiteral("login_form"));
        login_form->setEnabled(true);
        login_form->setGeometry(QRect(110, 120, 461, 291));
        login_btn = new QPushButton(login_form);
        login_btn->setObjectName(QStringLiteral("login_btn"));
        login_btn->setEnabled(true);
        login_btn->setGeometry(QRect(130, 190, 221, 51));
        psw_label = new QLabel(login_form);
        psw_label->setObjectName(QStringLiteral("psw_label"));
        psw_label->setGeometry(QRect(130, 100, 141, 61));
        id_label = new QLabel(login_form);
        id_label->setObjectName(QStringLiteral("id_label"));
        id_label->setGeometry(QRect(130, 40, 91, 61));
        psw_input = new QLineEdit(login_form);
        psw_input->setObjectName(QStringLiteral("psw_input"));
        psw_input->setGeometry(QRect(130, 140, 221, 25));
        psw_input->setEchoMode(QLineEdit::Password);
        id_input = new QLineEdit(login_form);
        id_input->setObjectName(QStringLiteral("id_input"));
        id_input->setGeometry(QRect(130, 80, 221, 25));
        id_input->setStyleSheet(QLatin1String("#id_input {\n"
"	border-color: blue;\n"
"}"));
        mainMenu = new QTabWidget(centralWidget);
        mainMenu->setObjectName(QStringLiteral("mainMenu"));
        mainMenu->setEnabled(true);
        mainMenu->setGeometry(QRect(0, 0, 761, 571));
        mainMenu->setCursor(QCursor(Qt::PointingHandCursor));
        report = new QWidget();
        report->setObjectName(QStringLiteral("report"));
        display = new QTextBrowser(report);
        display->setObjectName(QStringLiteral("display"));
        display->setGeometry(QRect(10, 30, 351, 501));
        labelWeekday = new QLabel(report);
        labelWeekday->setObjectName(QStringLiteral("labelWeekday"));
        labelWeekday->setGeometry(QRect(420, 100, 151, 17));
        labelRevenue = new QLabel(report);
        labelRevenue->setObjectName(QStringLiteral("labelRevenue"));
        labelRevenue->setGeometry(QRect(420, 170, 151, 17));
        revenue = new QLabel(report);
        revenue->setObjectName(QStringLiteral("revenue"));
        revenue->setGeometry(QRect(430, 190, 151, 17));
        showExec = new QCheckBox(report);
        showExec->setObjectName(QStringLiteral("showExec"));
        showExec->setGeometry(QRect(420, 220, 201, 23));
        showRegular = new QCheckBox(report);
        showRegular->setObjectName(QStringLiteral("showRegular"));
        showRegular->setGeometry(QRect(420, 250, 191, 16));
        numberExec = new QLabel(report);
        numberExec->setObjectName(QStringLiteral("numberExec"));
        numberExec->setGeometry(QRect(430, 310, 151, 17));
        labelExec = new QLabel(report);
        labelExec->setObjectName(QStringLiteral("labelExec"));
        labelExec->setGeometry(QRect(420, 290, 221, 17));
        numberRegular = new QLabel(report);
        numberRegular->setObjectName(QStringLiteral("numberRegular"));
        numberRegular->setGeometry(QRect(430, 370, 151, 17));
        labelRegular = new QLabel(report);
        labelRegular->setObjectName(QStringLiteral("labelRegular"));
        labelRegular->setGeometry(QRect(420, 350, 221, 17));
        login_header = new QLabel(report);
        login_header->setObjectName(QStringLiteral("login_header"));
        login_header->setGeometry(QRect(220, 80, 552, 40));
        login_header->setFont(font);
        login_header->setStyleSheet(QStringLiteral(""));
        display_btn = new QPushButton(report);
        display_btn->setObjectName(QStringLiteral("display_btn"));
        display_btn->setGeometry(QRect(570, 390, 151, 41));
        weekdayBox = new QComboBox(report);
        weekdayBox->setObjectName(QStringLiteral("weekdayBox"));
        weekdayBox->setGeometry(QRect(420, 120, 121, 41));
        label = new QLabel(report);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(420, 30, 181, 41));
        QFont font1;
        font1.setPointSize(13);
        font1.setItalic(true);
        label->setFont(font1);
        mainMenu->addTab(report, QString());
        all_purch = new QWidget();
        all_purch->setObjectName(QStringLiteral("all_purch"));
        display_2 = new QTextBrowser(all_purch);
        display_2->setObjectName(QStringLiteral("display_2"));
        display_2->setGeometry(QRect(10, 30, 351, 501));
        display_btn_2 = new QPushButton(all_purch);
        display_btn_2->setObjectName(QStringLiteral("display_btn_2"));
        display_btn_2->setGeometry(QRect(570, 390, 151, 41));
        display_btn_2->setCursor(QCursor(Qt::PointingHandCursor));
        label_2 = new QLabel(all_purch);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(420, 30, 181, 61));
        label_2->setFont(font1);
        grandTotal = new QLabel(all_purch);
        grandTotal->setObjectName(QStringLiteral("grandTotal"));
        grandTotal->setGeometry(QRect(450, 220, 151, 17));
        labelGrandTotal = new QLabel(all_purch);
        labelGrandTotal->setObjectName(QStringLiteral("labelGrandTotal"));
        labelGrandTotal->setGeometry(QRect(420, 190, 151, 17));
        mainMenu->addTab(all_purch, QString());
        items_sold = new QWidget();
        items_sold->setObjectName(QStringLiteral("items_sold"));
        display_3 = new QTextBrowser(items_sold);
        display_3->setObjectName(QStringLiteral("display_3"));
        display_3->setGeometry(QRect(10, 30, 351, 501));
        labelTotalRev = new QLabel(items_sold);
        labelTotalRev->setObjectName(QStringLiteral("labelTotalRev"));
        labelTotalRev->setGeometry(QRect(420, 300, 151, 17));
        totalRevenue = new QLabel(items_sold);
        totalRevenue->setObjectName(QStringLiteral("totalRevenue"));
        totalRevenue->setGeometry(QRect(450, 330, 151, 17));
        label_3 = new QLabel(items_sold);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(420, 180, 221, 61));
        label_3->setFont(font1);
        display_btn_3 = new QPushButton(items_sold);
        display_btn_3->setObjectName(QStringLiteral("display_btn_3"));
        display_btn_3->setGeometry(QRect(570, 390, 151, 41));
        display_btn_3->setCursor(QCursor(Qt::PointingHandCursor));
        ItemsComboBox = new QComboBox(items_sold);
        ItemsComboBox->setObjectName(QStringLiteral("ItemsComboBox"));
        ItemsComboBox->setGeometry(QRect(420, 250, 211, 25));
        searchByItemsName = new QLineEdit(items_sold);
        searchByItemsName->setObjectName(QStringLiteral("searchByItemsName"));
        searchByItemsName->setGeometry(QRect(420, 120, 113, 25));
        btn_searchByItemsName = new QPushButton(items_sold);
        btn_searchByItemsName->setObjectName(QStringLiteral("btn_searchByItemsName"));
        btn_searchByItemsName->setGeometry(QRect(560, 120, 89, 25));
        label_6 = new QLabel(items_sold);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(420, 30, 221, 61));
        label_6->setFont(font1);
        mainMenu->addTab(items_sold, QString());
        members = new QWidget();
        members->setObjectName(QStringLiteral("members"));
        display_4 = new QTextBrowser(members);
        display_4->setObjectName(QStringLiteral("display_4"));
        display_4->setGeometry(QRect(10, 30, 351, 501));
        label_4 = new QLabel(members);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(420, 30, 231, 61));
        label_4->setFont(font1);
        optionBox = new QComboBox(members);
        optionBox->setObjectName(QStringLiteral("optionBox"));
        optionBox->setGeometry(QRect(400, 150, 171, 41));
        labelRevenue_4 = new QLabel(members);
        labelRevenue_4->setObjectName(QStringLiteral("labelRevenue_4"));
        labelRevenue_4->setGeometry(QRect(400, 120, 151, 17));
        labelRevenue_5 = new QLabel(members);
        labelRevenue_5->setObjectName(QStringLiteral("labelRevenue_5"));
        labelRevenue_5->setGeometry(QRect(400, 220, 191, 17));
        expiryBox = new QComboBox(members);
        expiryBox->setObjectName(QStringLiteral("expiryBox"));
        expiryBox->setGeometry(QRect(400, 250, 171, 41));
        display_btn_4 = new QPushButton(members);
        display_btn_4->setObjectName(QStringLiteral("display_btn_4"));
        display_btn_4->setGeometry(QRect(590, 150, 151, 41));
        display_btn_4->setCursor(QCursor(Qt::PointingHandCursor));
        filter_btn = new QPushButton(members);
        filter_btn->setObjectName(QStringLiteral("filter_btn"));
        filter_btn->setGeometry(QRect(590, 250, 151, 41));
        labelRevenue_9 = new QLabel(members);
        labelRevenue_9->setObjectName(QStringLiteral("labelRevenue_9"));
        labelRevenue_9->setGeometry(QRect(400, 320, 191, 17));
        addDelete_combo = new QComboBox(members);
        addDelete_combo->setObjectName(QStringLiteral("addDelete_combo"));
        addDelete_combo->setGeometry(QRect(400, 350, 171, 41));
        addDelete_btn = new QPushButton(members);
        addDelete_btn->setObjectName(QStringLiteral("addDelete_btn"));
        addDelete_btn->setGeometry(QRect(590, 350, 151, 41));
        lineName = new QLineEdit(members);
        lineName->setObjectName(QStringLiteral("lineName"));
        lineName->setGeometry(QRect(400, 400, 171, 31));
        lineExecutive = new QLineEdit(members);
        lineExecutive->setObjectName(QStringLiteral("lineExecutive"));
        lineExecutive->setGeometry(QRect(400, 440, 171, 31));
        lineExpiry = new QLineEdit(members);
        lineExpiry->setObjectName(QStringLiteral("lineExpiry"));
        lineExpiry->setGeometry(QRect(400, 480, 171, 31));
        delete_combobox = new QComboBox(members);
        delete_combobox->setObjectName(QStringLiteral("delete_combobox"));
        delete_combobox->setEnabled(true);
        delete_combobox->setGeometry(QRect(400, 430, 341, 41));
        mainMenu->addTab(members, QString());
        delete_combobox->raise();
        display_4->raise();
        label_4->raise();
        optionBox->raise();
        labelRevenue_4->raise();
        labelRevenue_5->raise();
        expiryBox->raise();
        display_btn_4->raise();
        filter_btn->raise();
        labelRevenue_9->raise();
        addDelete_combo->raise();
        addDelete_btn->raise();
        lineName->raise();
        lineExecutive->raise();
        lineExpiry->raise();
        inventory = new QWidget();
        inventory->setObjectName(QStringLiteral("inventory"));
        display_5 = new QTextBrowser(inventory);
        display_5->setObjectName(QStringLiteral("display_5"));
        display_5->setGeometry(QRect(10, 30, 351, 501));
        addDeleteInventory = new QComboBox(inventory);
        addDeleteInventory->setObjectName(QStringLiteral("addDeleteInventory"));
        addDeleteInventory->setGeometry(QRect(420, 130, 131, 41));
        label_5 = new QLabel(inventory);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(420, 30, 231, 61));
        label_5->setFont(font1);
        labelRevenue_6 = new QLabel(inventory);
        labelRevenue_6->setObjectName(QStringLiteral("labelRevenue_6"));
        labelRevenue_6->setGeometry(QRect(420, 100, 151, 17));
        itemName = new QLineEdit(inventory);
        itemName->setObjectName(QStringLiteral("itemName"));
        itemName->setGeometry(QRect(420, 210, 113, 25));
        labelRevenue_7 = new QLabel(inventory);
        labelRevenue_7->setObjectName(QStringLiteral("labelRevenue_7"));
        labelRevenue_7->setGeometry(QRect(420, 180, 151, 17));
        labelRevenue_8 = new QLabel(inventory);
        labelRevenue_8->setObjectName(QStringLiteral("labelRevenue_8"));
        labelRevenue_8->setGeometry(QRect(420, 260, 171, 17));
        grossPrice = new QLineEdit(inventory);
        grossPrice->setObjectName(QStringLiteral("grossPrice"));
        grossPrice->setGeometry(QRect(420, 290, 113, 25));
        display_btn_5 = new QPushButton(inventory);
        display_btn_5->setObjectName(QStringLiteral("display_btn_5"));
        display_btn_5->setGeometry(QRect(570, 390, 151, 41));
        display_btn_5->setCursor(QCursor(Qt::PointingHandCursor));
        mainMenu->addTab(inventory, QString());
        logout = new QPushButton(centralWidget);
        logout->setObjectName(QStringLiteral("logout"));
        logout->setGeometry(QRect(630, 0, 131, 31));
        logout->setCursor(QCursor(Qt::PointingHandCursor));
        verticalLayoutWidget = new QWidget(centralWidget);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(630, 30, 131, 51));
        personal_data = new QVBoxLayout(verticalLayoutWidget);
        personal_data->setSpacing(6);
        personal_data->setContentsMargins(11, 11, 11, 11);
        personal_data->setObjectName(QStringLiteral("personal_data"));
        personal_data->setContentsMargins(0, 0, 0, 0);
        admin_man = new QLabel(verticalLayoutWidget);
        admin_man->setObjectName(QStringLiteral("admin_man"));

        personal_data->addWidget(admin_man);

        id = new QLabel(verticalLayoutWidget);
        id->setObjectName(QStringLiteral("id"));

        personal_data->addWidget(id);

        line = new QFrame(centralWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(380, 60, 20, 421));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        mainMenu->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Bulk Club MS", Q_NULLPTR));
        header_label->setText(QApplication::translate("MainWindow", "Welcome to the Bulk Club Managment System", Q_NULLPTR));
        login_form->setTitle(QApplication::translate("MainWindow", "Please log in", Q_NULLPTR));
        login_btn->setText(QApplication::translate("MainWindow", "Log in", Q_NULLPTR));
        psw_label->setText(QApplication::translate("MainWindow", "Give your password ", Q_NULLPTR));
        id_label->setText(QApplication::translate("MainWindow", "Give your ID               ", Q_NULLPTR));
        labelWeekday->setText(QApplication::translate("MainWindow", "Choose the weekday:", Q_NULLPTR));
        labelRevenue->setText(QApplication::translate("MainWindow", "Revenue:", Q_NULLPTR));
        revenue->setText(QApplication::translate("MainWindow", "0.00", Q_NULLPTR));
        showExec->setText(QApplication::translate("MainWindow", "Show Executive Members", Q_NULLPTR));
        showRegular->setText(QApplication::translate("MainWindow", "Show Regular Members", Q_NULLPTR));
        numberExec->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        labelExec->setText(QApplication::translate("MainWindow", "Number of Executive Members:", Q_NULLPTR));
        numberRegular->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        labelRegular->setText(QApplication::translate("MainWindow", "Number of Regular Members:", Q_NULLPTR));
        login_header->setText(QString());
        display_btn->setText(QApplication::translate("MainWindow", "Display", Q_NULLPTR));
        weekdayBox->clear();
        weekdayBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Monday", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Tuesday", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Wednesday", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Thursday", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Friday", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Saturday", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Sunday", Q_NULLPTR)
        );
        label->setText(QApplication::translate("MainWindow", "This section lets you\n"
"generate the day report", Q_NULLPTR));
        mainMenu->setTabText(mainMenu->indexOf(report), QApplication::translate("MainWindow", "Report", Q_NULLPTR));
        display_btn_2->setText(QApplication::translate("MainWindow", "Display", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "This section displays all \n"
"purchases sorted by \n"
"membership no.", Q_NULLPTR));
        grandTotal->setText(QApplication::translate("MainWindow", "0.00", Q_NULLPTR));
        labelGrandTotal->setText(QApplication::translate("MainWindow", "Grand total:", Q_NULLPTR));
        mainMenu->setTabText(mainMenu->indexOf(all_purch), QApplication::translate("MainWindow", "All purchases", Q_NULLPTR));
        labelTotalRev->setText(QApplication::translate("MainWindow", "Total revenue:", Q_NULLPTR));
        totalRevenue->setText(QApplication::translate("MainWindow", "0.00", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "This section displays each\n"
"item sold sorted by quantity", Q_NULLPTR));
        display_btn_3->setText(QApplication::translate("MainWindow", "Display", Q_NULLPTR));
        ItemsComboBox->clear();
        ItemsComboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "ALL ITEMS", Q_NULLPTR)
        );
        btn_searchByItemsName->setText(QApplication::translate("MainWindow", "Search", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "Searching by item's name", Q_NULLPTR));
        mainMenu->setTabText(mainMenu->indexOf(items_sold), QApplication::translate("MainWindow", "Items sold", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "This section displays  \n"
"members (using filters)", Q_NULLPTR));
        optionBox->clear();
        optionBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Sort by rebate", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Sort by ID", Q_NULLPTR)
        );
        labelRevenue_4->setText(QApplication::translate("MainWindow", "Choose an option:", Q_NULLPTR));
        labelRevenue_5->setText(QApplication::translate("MainWindow", "Membership expiring in:", Q_NULLPTR));
        expiryBox->clear();
        expiryBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "January", Q_NULLPTR)
         << QApplication::translate("MainWindow", "February", Q_NULLPTR)
         << QApplication::translate("MainWindow", "March", Q_NULLPTR)
         << QApplication::translate("MainWindow", "April", Q_NULLPTR)
         << QApplication::translate("MainWindow", "May", Q_NULLPTR)
         << QApplication::translate("MainWindow", "June", Q_NULLPTR)
         << QApplication::translate("MainWindow", "July", Q_NULLPTR)
         << QApplication::translate("MainWindow", "August", Q_NULLPTR)
         << QApplication::translate("MainWindow", "September", Q_NULLPTR)
         << QApplication::translate("MainWindow", "October", Q_NULLPTR)
         << QApplication::translate("MainWindow", "November", Q_NULLPTR)
         << QApplication::translate("MainWindow", "December", Q_NULLPTR)
        );
        display_btn_4->setText(QApplication::translate("MainWindow", "Display", Q_NULLPTR));
        filter_btn->setText(QApplication::translate("MainWindow", "Filter", Q_NULLPTR));
        labelRevenue_9->setText(QApplication::translate("MainWindow", "Add/Delete members", Q_NULLPTR));
        addDelete_combo->clear();
        addDelete_combo->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Add", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Delete", Q_NULLPTR)
        );
        addDelete_btn->setText(QApplication::translate("MainWindow", "Add/Delete", Q_NULLPTR));
        lineName->setPlaceholderText(QApplication::translate("MainWindow", "Name", Q_NULLPTR));
        lineExecutive->setPlaceholderText(QApplication::translate("MainWindow", "Executive?", Q_NULLPTR));
        lineExpiry->setText(QString());
        lineExpiry->setPlaceholderText(QApplication::translate("MainWindow", "Expiry", Q_NULLPTR));
        mainMenu->setTabText(mainMenu->indexOf(members), QApplication::translate("MainWindow", "Members", Q_NULLPTR));
        addDeleteInventory->clear();
        addDeleteInventory->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Add item", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Delete item", Q_NULLPTR)
        );
        label_5->setText(QApplication::translate("MainWindow", "This section lets you\n"
"add and delete items", Q_NULLPTR));
        labelRevenue_6->setText(QApplication::translate("MainWindow", "Add or delete?", Q_NULLPTR));
        labelRevenue_7->setText(QApplication::translate("MainWindow", "Name of the item:", Q_NULLPTR));
        labelRevenue_8->setText(QApplication::translate("MainWindow", "Gross price for the item:", Q_NULLPTR));
        display_btn_5->setText(QApplication::translate("MainWindow", "Add/Delete", Q_NULLPTR));
        mainMenu->setTabText(mainMenu->indexOf(inventory), QApplication::translate("MainWindow", "Inventory", Q_NULLPTR));
        logout->setText(QApplication::translate("MainWindow", "Logout", Q_NULLPTR));
        admin_man->setText(QApplication::translate("MainWindow", "Admin/Manager", Q_NULLPTR));
        id->setText(QApplication::translate("MainWindow", "ID", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
