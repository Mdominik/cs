#include "accounts.hpp"


Account::Account(std::string name, int balance) : m_name{name}, m_balance{balance} {
    m_openingDate = new Date;
    m_accountNumber = createNumber();
    number_of_accounts++;
    m_lastUpdateDate = m_openingDate;
    std::cout << "automatic date"<< std::endl;
    std::cout << "You are our " << number_of_accounts << ". client." << std::endl;
    this->display();
    std::cout << "ACCOUNT CONSTRUCT" << std::endl;
}

Account::Account(std::string name, int balance, Date* opening) : m_name{name},
m_balance{balance}, m_openingDate{opening} {
    m_accountNumber = createNumber();
    number_of_accounts++;
    m_lastUpdateDate = opening;
    std::cout << "manual date"<< std::endl;
    std::cout << "You are our " << Account::number_of_accounts << ". client." << std::endl;
    this->display();
    std::cout << "ACCOUNT CONSTRUCT" << std::endl;
}
Account::Account(){}
Account::~Account(){}
// Savings::Savings(){}
Savings::~Savings(){}
// Checking::Checking(){}
Checking::~Checking(){}
// MoneyMarket::MoneyMarket(){}
MoneyMarket::~MoneyMarket(){}

int Account::createNumber() {
    next_account_number++;
    return next_account_number;
}

int Account::number_of_accounts=0;
int Account::next_account_number=0;

void Account::display() {
    updateBalance();
    // std::cout << "Name: " << m_name << std::endl;
    std::cout << "Account number: " << m_accountNumber << std::endl;
    //std::cout << "Date of opening: " << m_openingDate->getDate_DDMMYYYY() << std::endl;
    std::cout << "Balance: $" << float(m_balance/100) + float(m_balance%100)/100 << std::endl;
    std::cout << std::endl;
}

bool Account::deposit(int cents) {
    updateBalance();
    if(cents > m_balance) {
        std::cout << "Not enough money!" << std::endl;
        return false;
    }
    m_balance +=cents;
    return true;
}

bool Account::transfer(Account* recipient, int cents){
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

bool Account::withdraw(int cents) {
    updateBalance();
    if(cents > m_balance) {
        std::cout << "Not enough money!" << std::endl;
        return false;
    }
    m_balance -= cents;
    return true;
}


int Account::calculateInterests(float percent, int times) {
    return this->m_balance * std::pow(1+percent/100, times);
}


// Updatesddddd
void Account::updateBalance() {
    Date* now = new Date();
    int diff_months = now->getYear()-Account::m_lastUpdateDate->getYear();
    diff_months = diff_months*12 + (now->getMonth()-Account::m_lastUpdateDate->getMonth());
    int interests = Account::calculateInterests(Account::interestRate, diff_months);
    this->setBalance(interests);
    Account::m_lastUpdateDate = now;
    delete now;
    return;
}


bool Checking::withdraw(int cents) {
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

bool MoneyMarket::withdraw(int cents) {

    updateBalance();
    if(cents > m_balance) {
        std::cout << "Not enough money!" << std::endl;
        return false;
    }
    m_balance -= cents;
    m_balance -= WITHDRAWAL_COST_MARKET;
    return true;
}
