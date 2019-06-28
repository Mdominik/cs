#include <iostream>
#include <string>
#include <algorithm>
#include <fstream>
#include <string>
#include <sstream>
#include <chrono>
#include <ctime>

#define WITHDRAWAL_COST_MARKET 150
#define WITHDRAWAL_COST_CHECKING 2000
#define MAX_DEBIT_CHECKING 20000

class Date{
public:
    std::string getDate_DDMMYYYY();
    int getYear();
    int getMonth();
    int getDay();
    int getHour();
    int getMinute();
    int getSeconds();
    bool isBefore(Date* date);
    int dayDifference(Date* date);
private:
    std::time_t time = std::time(0);
    std::tm* now = std::localtime(&time);
};

int Date::getYear() {
    return now->tm_year+1900;
}
int Date::getMonth() {
    return now->tm_mon+1;
}
int Date::getDay() {
    return now->tm_mday+1;
}
int Date::getHour() {
    return now->tm_hour+1;
}
int Date::getMinute() {
    return now->tm_min+1;
}
int Date::getSeconds() {
    return now->tm_sec+1;
}
int Date::dateDifference(Date* date) {
    
    return
}
int Date::(Date* another) {

}

bool Date::isBefore(Date* date) {
    if(this->getYear() >= date->getYear())
        if(this->getMonth() >= date->getMonth())
            if(this->getDay() >= date->getDay())
                if(this->getHour() >= date->getHour())
                    if(this->getMinute() >= date->getMinute())
                        if(this->getSeconds() > date->getSeconds())
                            return false;
    return true;
}

std::string Date::getDate_DDMMYYYY() {
    std::stringstream date;
    if(Date::getSeconds() < 10) {
        date << Date::getDay() << "/" << Date::getMonth() << "/" << Date::getYear() << " " <<
        Date::getHour() << ":" << Date::getMinute() << ":0" << Date::getSeconds();
    } else {
        date << Date::getDay() << "/" << Date::getMonth() << "/" << Date::getYear() << " " <<
        Date::getHour() << ":" << Date::getMinute() << ":" << Date::getSeconds();
    }
    return date.str();
}

class Account {
public:

    Account(std::string name, int balance) : m_name{name}, m_balance{balance} {
        m_openingDate = new Date;
        m_accountNumber = createNumber();
        number_of_accounts++;
        std::cout << "You are our " << number_of_accounts << ". client." << std::endl;
        this->display();
    }
    virtual ~Account() {}


    std::string getName() const {return m_name;}
    int getAccountNumber() const {return m_accountNumber;}
    Date* getOpeningDate() const { return m_openingDate;}
    int getBalance() const { return m_balance;}

    void setName(std::string& name) {m_name = name;}
    void setAccoundNumber(int& number) {m_accountNumber = number;}
    void setOpeningDate(Date* openingDate) {m_openingDate = openingDate;}
    void setBalance(int& balance) {m_balance = balance;}

    int createNumber() {
        next_account_number++;
        return next_account_number;
    }

    virtual void updateBalance() {
        int times;
        Date* now = new Date;
        if(m_lastUpdateDate->isBefore(now)) {

        }
        m_lastUpdateDate = now;
        delete now;
    };

    void display() {
        updateBalance();
        // std::cout << "Name: " << m_name << std::endl;
        std::cout << "Account number: " << m_accountNumber << std::endl;
        //std::cout << "Date of opening: " << m_openingDate->getDate_DDMMYYYY() << std::endl;
        std::cout << "Balance: $" << float(m_balance/100) + float(m_balance%100)/100 << std::endl;
        std::cout << std::endl;
    }

    virtual bool deposit(int cents) {
        updateBalance();
        if(cents > m_balance) {
            std::cout << "Not enough money!" << std::endl;
            return false;
        }
        m_balance +=cents;
        return true;
    }

    virtual bool transfer(Account* recipient, int cents){
        updateBalance();
        if(cents > m_balance) {
            std::cout << "Not enough money!" << std::endl;
            return false;
        }
        int bal = recipient->getBalance()+cents;
        recipient->setBalance(bal);
        m_balance-=cents;
        return true;
    }

    virtual bool withdraw(int cents) {
        updateBalance();
        if(cents > m_balance) {
            std::cout << "Not enough money!" << std::endl;
            return false;
        }
        m_balance -= cents;
        return true;
    }

protected:
    std::string m_name;
    int m_accountNumber;
    Date* m_openingDate;
    Date* m_lastUpdateDate;
    int m_balance;
    static int number_of_accounts;
    static int next_account_number;
};

int Account::number_of_accounts=0;
int Account::next_account_number=0;



class Checking : public Account {
public:
    virtual void updateBalance(Date* now) {
        if(m_openingDate->isBefore(now)) return;

        else {
            if((m_lastUpdateDate->getMonth() < now->getMonth()) {
                if() {

                    m_lastUpdateDate = now;
                }
            }
            return
        }
    }
    virtual bool withdraw(int cents) {
        updateBalance();
        if(cents > m_balance-MAX_DEBIT_CHECKING) {
            std::cout << "Not enough money!" << std::endl;
            return false;
        }
        else if (cents > m_balance) {
            m_balance -= cents;
            m_balance -= WITHDRAWAL_COST_CHECKING;
        }
        else {
            m_balance -=cents;
        }
        return true;
    }


};

class Savings : public Account {
public:
    virtual float interestRate = 0.1; //in percent
    virtual bool withdraw(int cents) : Account::withdraw(int);

};

class MoneyMarket : public Savings {
public:
    virtual float interestRate = 0.2; //in percent
    virtual bool withdraw(int cents) {
        if(cents > m_balance) {
            std::cout << "Not enough money!" << std::endl;
            return false;
        }
        m_balance -= cents;
        m_balance -= WITHDRAWAL_COST_MARKET;
        return true;
    }
}
