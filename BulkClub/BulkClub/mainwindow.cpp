#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <algorithm>

//nomenclature:
// login window --> the window for login
// management system window --> the main window after login


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->id_input->setPlaceholderText("Your ID");
    ui->psw_input->setPlaceholderText("Your psw");

    //hides management system window
    ui->mainMenu->hide();
    ui->logout->hide();
    ui->admin_man->hide();
    ui->id->hide();
    ui->line->hide();
    ui->delete_combobox->hide();
    QStringList list;

    //copy items vector
    QVector<Item*> v = manSystem.getAllItems();

    //sort members by name
    std::sort(v.begin(), v.end(), [](Item* a, Item* b) {
        return a->getName() < b->getName();
    });


    //add names of items to the combo box
    for(auto& x : v) {
        list.append(x->getName());
    }

    //add items to the combo box
    ui->ItemsComboBox->addItems(list);
}

MainWindow::~MainWindow()
{
    delete ui;
}

//button for logging in released. Checks credentials and logs in.
void MainWindow::on_login_btn_released()
{
    bool ok;
    //get data from input
    QString id_text = ui->id_input->text();
    QString psw_text = ui->psw_input->text();

    //check manager's credentials
    if(manSystem.getManager().getLogin() == id_text.toInt(&ok, 10) && !manSystem.getManager().getPsw().compare(psw_text)) {
        qInfo() << "Manager(" << manSystem.getManager().getLogin() << ") just logged in.";
        manSystem.getManager().setLoggedNow(true);
        disappearAfterLogged(false);
    }

    //check admin's credentials
    else if(manSystem.getAdmin().getLogin() == id_text.toInt(&ok, 10) && !manSystem.getAdmin().getPsw().compare(psw_text))  {
        qInfo() << "Admin(" << manSystem.getAdmin().getLogin()<< ") just logged in.";
        manSystem.getAdmin().setLoggedNow(true);
        disappearAfterLogged(true);

    }
}


// hides the elements of the login window and shows the elements of the management system window.
// It also updates the personal data info shown (admin/manager + ID)
void MainWindow::disappearAfterLogged(bool adminLogged) {
    ui->header_label->hide();
    ui->login_form->hide();
    ui->mainMenu->show();
    ui->logout->show();
    ui->admin_man->show();
    ui->id->show();
    ui->line->show();
    if (adminLogged) {
        ui->admin_man->setText("admin");
        ui->id->setText("ID: " + QString::number(manSystem.getAdmin().getLogin()));
        manSystem.setCurrentlyLogged(CurrentlyLogged::admin);
    } else {
        ui->admin_man->setText("manager");
        ui->id->setText("ID: " + QString::number(manSystem.getManager().getLogin()));
        manSystem.setCurrentlyLogged(CurrentlyLogged::manager);
    }
}


//logout
void MainWindow::on_logout_released()
{
    manSystem.setCurrentlyLogged(CurrentlyLogged::noOne);
    manSystem.getAdmin().setLoggedNow(false);
    manSystem.getManager().setLoggedNow(false);
    QApplication::quit();
}


//
void MainWindow::on_display_btn_released()
{
    ui->display->clear();
    int priceSum=0;
    int sum_exec = 0;
    int sum_regular = 0;

    for(auto& sale: manSystem.getSales()[ui->weekdayBox->currentIndex()]) {
        if(ui->showExec->checkState()) {
            int i = manSystem.getExecutiveMembers().indexOf(sale.getMembersID());
            if(i!=-1) {
                ui->display->append(sale.getDate().toString());
                ui->display->append(QString::number(sale.getMembersID()));
                ui->display->append(sale.getItem()->getName());
                ui->display->append(QString::number(sale.getItem()->getPrice()));
                ui->display->append(QString::number(sale.getQuantity()));
                ui->display->append("\n");
                priceSum = priceSum + sale.getItem()->getPrice()*sale.getQuantity();
                sum_exec++;
            }
        }
        if(ui->showRegular->checkState()) {
            int i = manSystem.getRegularMembers().indexOf(sale.getMembersID());
            if(i!=-1) {
                ui->display->append(sale.getDate().toString());
                ui->display->append(QString::number(sale.getMembersID()));
                ui->display->append(sale.getItem()->getName());
                ui->display->append(QString::number(sale.getItem()->getPrice()));
                ui->display->append(QString::number(sale.getQuantity()));
                ui->display->append("\n");
                priceSum = priceSum + sale.getItem()->getPrice()*sale.getQuantity();
                sum_regular++;
            }
        }
    }
    ui->revenue->setText("$"+QString::number(priceSum));
    ui->numberExec->setText(QString::number(sum_exec));
    ui->numberRegular->setText(QString::number(sum_regular));
}


//sorts purchases by ID of the member and prints it out
void MainWindow::on_display_btn_2_released()
{
    manSystem.sortPurchasesByNumber();
    ui->display_2->clear();
    int sum=0;
    for(auto& sale: manSystem.getAllSalesOneVec()) {
        ui->display_2->append(sale.getDate().toString());
        ui->display_2->append(QString::number(sale.getMembersID()));
        ui->display_2->append(sale.getItem()->getName());
        ui->display_2->append(QString::number(sale.getItem()->getPrice()));
        ui->display_2->append(QString::number(sale.getQuantity()));
        ui->display_2->append("\n");
        sum += sale.getItem()->getPrice()*sale.getQuantity();
    }
    ui->grandTotal->setText("$" + QString::number(sum));
}



void MainWindow::on_display_btn_3_released()
{
    ui->display_3->clear();
    int sum=0;
//    copy and sort Items by count number
    QVector<Item*> v = manSystem.getAllItems();
    std::sort(v.begin(), v.end(), [](Item* a, Item* b) {
        return a->getCount() > b->getCount();
    });
    QString current_item_chosen = ui->ItemsComboBox->currentText();

    if(current_item_chosen.compare("ALL ITEMS")) {
        sum=0;
        for(auto& item : v) {
            if(!item->getName().compare(current_item_chosen)) {
                ui->display_3->append(item->getName());
                ui->display_3->append("Price per unit: " + QString::number(item->getPrice()));
                ui->display_3->append("Sold: " + QString::number(item->getCount()));
                ui->display_3->append("\n");
                sum += item->getPrice()*item->getCount();
            }
        }
    }
    else {
        sum=0;
        for(auto& item: v) {
            ui->display_3->append(item->getName());
            ui->display_3->append("Price per unit: " + QString::number(item->getPrice()));
            ui->display_3->append("Sold: " + QString::number(item->getCount()));
            ui->display_3->append("\n");
            sum += item->getPrice()*item->getCount();
        }

    }
    ui->totalRevenue->setText("$" + QString::number(sum));
}

void MainWindow::on_btn_searchByItemsName_released()
{
    int total=0;
    ui->display_3->clear();
    QString text = ui->searchByItemsName->text();
    for(auto& item : manSystem.getAllItems()) {
        if(!item->getName().compare(text)) {
            ui->display_3->append(item->getName());
            ui->display_3->append("Price per unit: " + QString::number(item->getPrice()));
            ui->display_3->append("Sold: " + QString::number(item->getCount()));
            ui->display_3->append("\n");
            total = item->getPrice()*item->getCount();
        }
    }
    ui->totalRevenue->setText("$" + QString::number(total));
}

void MainWindow::on_display_btn_4_released()
{
    //clear the field
    ui->display_4->clear();

    //sort either by ID or by Rebate depending on optionBox (combobox)
    manSystem.sortMembers(ui->optionBox->currentIndex());
    for(auto& mem : manSystem.getMembers()) {

        //print name
        ui->display_4->append(mem.getName());

        //print id
        ui->display_4->append("ID: "+QString::number(mem.getNumber()));

        //print type
        static_cast<bool>(mem.getType()) ? ui->display_4->append("Regular") : ui->display_4->append("Executive"); //print type

        //print total spent
        ui->display_4->append("Total spent: " + QString::number(mem.getTotalSpent()));

        //print rebate
        if(static_cast<bool>(!mem.getType())) ui->display_4->append("Rebate: " + QString::number(mem.getRebate()));

        ui->display_4->append("");
    }
}

void MainWindow::on_filter_btn_released()
{
    //clear the field
    ui->display_4->clear();

    int month = ui->expiryBox->currentIndex()+1;
    for(auto& mem : manSystem.getMembers()) {

        if(mem.getDate().month()==month) {
            //print name
            ui->display_4->append(mem.getName());

            //print id
            ui->display_4->append("ID: " + QString::number(mem.getNumber()));

            //print type
            static_cast<bool>(mem.getType()) ? ui->display_4->append("Regular") : ui->display_4->append("Executive"); //print type

            //print total spent
            ui->display_4->append("Total spent: " + QString::number(mem.getTotalSpent()));

            //print rebate
            if(static_cast<bool>(!mem.getType())) ui->display_4->append("Rebate: " + QString::number(mem.getRebate()));

            ui->display_4->append("Expiry date: " + mem.getDate().toString("dd.MM.yyyy"));
            ui->display_4->append("");
        }
    }
}

void MainWindow::on_addDelete_btn_pressed()
{
    QString member_name = ui->delete_combobox->currentText();
    if(!ui->addDelete_combo->currentIndex()) {
        Member m;
        srand(time(NULL));
        m.setName(ui->lineName->text());
        m.setDate(QDate::fromString(ui->lineExpiry->text(), "MM/dd/yyyy"));
        qInfo() << m.getDate().toString();
        m.setNumber(rand()%100000);
        !ui->lineExecutive->text().compare("1") ? m.setType(MembershipType::Executive) : m.setType(MembershipType::Regular);
        manSystem.getMembers().push_back(m);
        manSystem.addMemberToFile(m);
    } else {
        manSystem.deleteMemberFromFile(member_name);
    }
}

void MainWindow::on_addDelete_btn_released()
{}

void MainWindow::on_addDelete_combo_currentIndexChanged(int index)
{
    ui->delete_combobox->show();
    ui->lineExecutive->hide();
    ui->lineExpiry->hide();
    ui->lineName->hide();
    ui->delete_combobox->clear();
    QStringList list;
    if(index) {
        for(auto& x : manSystem.getMembers()) {
            list.append(x.getName());
        }
        ui->delete_combobox->addItems(list);
    }
    else {
        ui->delete_combobox->hide();
        ui->lineExecutive->show();
        ui->lineExpiry->show();
        ui->lineName->show();
    }
}
