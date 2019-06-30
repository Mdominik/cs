#include "accounts.hpp"


Account::Account(std::string name, int balance) : m_name{name}, m_balance{balance} {
    Date now;
    m_accountNumber = createNumber();
    number_of_accounts++;
    this->m_lastUpdateDate = now;
    std::cout << "You are our " << number_of_accounts << ". client." << std::endl;
}

Account::Account(std::string name, int balance, Date opening) : m_name{name},
m_balance{balance}, m_openingDate{opening} {
    m_accountNumber = createNumber();
    number_of_accounts++;
    this->m_lastUpdateDate = m_openingDate;
    std::cout << "You are our " << number_of_accounts << ". client." << std::endl;
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
    // std::cout << "Name: " << m_name << std::endl;
    std::cout << "Account number: " << m_accountNumber << std::endl;
    //std::cout << "Date of opening: " << m_openingDate->getDate_DDMMYYYY() << std::endl;
    std::cout << "Balance: $" << float(m_balance/100) + float(m_balance%100)/100 << std::endl;
    std::cout << std::endl;
}

bool Account::deposit(int cents) {
    cents = getBalance()+cents;
    setBalance(cents);
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


int Account::calculateInterests(int percent, int times) {
    int x = this->getBalance() * std::pow(1+float(percent)/100, times);
    return x;
}


// Updatesddddd
void Account::updateBalance() {
    Date p;
    int diff_months = p.getYear()-this->getLastUpdate().getYear();
    diff_months = diff_months*12 + (p.getMonth()-this->getLastUpdate().getMonth());
    int interests = this->calculateInterests(this->getInterestRate(), diff_months);
    std::cout << diff_months << std::endl;
    this->setBalance(interests);
    this->setLastUpdate(p);
    return;
}


bool Checking::withdraw(int cents) {
    if(cents > this->getBalance()+MAX_DEBIT_CHECKING-WITHDRAWAL_COST_CHECKING) {
        std::cout << "Not enough money!" << std::endl;
        return false;
    }
    else if (cents > this->getBalance()) {
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
    if(cents > this->getBalance()) {
        std::cout << "Not enough money!" << std::endl;
        return false;
    }
    m_balance -= cents;
    m_balance -= WITHDRAWAL_COST_MARKET;
    return true;
}
