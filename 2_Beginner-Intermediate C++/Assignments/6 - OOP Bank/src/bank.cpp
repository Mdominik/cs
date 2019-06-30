#include "bank.hpp"
int Bank::size = 0;
void Bank::pushAccount(Account* new_acc) {
    new_acc->updateBalance();
    if(!this->head) {
        this->head = new_acc;
        return;
    }
    else {
        new_acc->setNext(this->head);
        this->head = new_acc;
    }
    size++;
}

Account* Bank::removeAccount() {

}

void FileManager::populateFile(Bank* bank) {
    int counter = 0;
    std::ifstream myfile("../src/" + this->m_path);
    int id_buf;
    std::string line;
    int year_buf, month_buf,day_buf,hour_buf,minute_buf,second_buf;
    std::string type_buf;
    std::string name_buf;
    int balance_buf;

    while(myfile) {
        std::getline(myfile, line);
        std::stringstream ss(line);

        if(counter%6 == 0) {
            name_buf = line;
        }
        else if((counter+2)%6 == 0) {
            if(ss >> balance_buf);
            Date date(year_buf,month_buf,day_buf,hour_buf,minute_buf,second_buf);
            if(!type_buf.compare("Savings"))
                bank->pushAccount(new Savings(name_buf, balance_buf, date));
            if(!type_buf.compare("Checking"))
                bank->pushAccount(new Checking(name_buf, balance_buf, date));
            if(!type_buf.compare("MoneyMarket"))
                bank->pushAccount(new MoneyMarket(name_buf, balance_buf, date));
        }
        else if((counter+3)%6 == 0) {
            if(ss >> type_buf);
        }
        else if((counter+4)%6 == 0) {
            if(ss >> id_buf);
        }
        else if((counter+5)%6 == 0) {
            if(ss >> year_buf);
            if(ss >> month_buf);
            if(ss >> day_buf);
            if(ss >> hour_buf);
            if(ss >> minute_buf);
            if(ss >> second_buf);
        }

        counter++;
    }
}
