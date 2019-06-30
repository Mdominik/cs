#pragma once
#include <iostream>
#include <string>
#include <algorithm>
#include <fstream>
#include <string>
#include <sstream>
#include <ctime>
#include <cmath>
#include "date.hpp"
#include <memory>
#define WITHDRAWAL_COST_MARKET 150
#define WITHDRAWAL_COST_CHECKING 2000
#define MAX_DEBIT_CHECKING 20000

class Account {
public:
    Account();
    Account(std::string name, int balance);
    Account(std::string name, int balance, Date* opening);
    virtual ~Account();
    std::string getName() const {return m_name;}
    int getAccount() const {return m_accountNumber;}
    Date* getOpeningDate() const { return m_openingDate;}
    virtual int getBalance() const { return m_balance;}
    virtual Date* getLastUpdate() const {return m_lastUpdateDate;}

    virtual void setName(std::string& name) {m_name = name;}
    virtual void setAccoundNumber(int& number) {m_accountNumber = number;}
    virtual void setOpeningDate(Date* openingDate) {m_openingDate = openingDate;}
    virtual void setBalance(int& balance) {m_balance = balance;}
    virtual void setLastUpdate(Date* last) {m_lastUpdateDate = last;}

    int createNumber();
    void display();
    virtual void updateBalance();
    virtual bool deposit(int cents);
    virtual bool transfer(Account* recipient, int cents);
    virtual bool withdraw(int cents);
    virtual int calculateInterests(int percent, int times);
    float getInterestRate() const {return interestRate;}
    void setInterestRate(int _interestRate) {interestRate = _interestRate;}
    int interestRate;
protected:
    std::string m_name;
    int m_accountNumber;
    Date* m_openingDate;
    Date* m_lastUpdateDate;
    int m_balance;
    static int number_of_accounts;
    static int next_account_number;

};




class Checking : public Account {
public:
    Checking(std::string name, int balance) : Account(name, balance) {
        this->setInterestRate(3);
    }
    Checking(std::string name, int balance, Date* opening) : Account(name, balance, opening) {
        this->setInterestRate(3);
    }
    virtual ~Checking();
    virtual bool withdraw(int cents);
    float getInterestRate() const {return interestRate;}
    void setInterestRate(int _interestRate) {interestRate = _interestRate;}
    virtual Date* getLastUpdate() const {return m_lastUpdateDate;}
    virtual void setLastUpdate(Date* last) {m_lastUpdateDate = last;}
};

class Savings : public Account {
public:
    Savings(std::string name, int balance) : Account(name, balance) {
        Savings::setInterestRate(10);
        this->updateBalance();
    }
    Savings(std::string name, int balance, Date* opening) : Account(name, balance, opening) {
        Savings::setInterestRate(10);
        this->updateBalance();
    }
    virtual ~Savings();
    float getInterestRate() const {return interestRate;}
    void setInterestRate(int _interestRate) {interestRate = _interestRate;}
    virtual Date* getLastUpdate() const {return m_lastUpdateDate;}
    virtual void setLastUpdate(Date* last) {m_lastUpdateDate = last;}
    int reeee = 432;
    //virtual void updateBalance();

};

class MoneyMarket : public Savings {
public:
    MoneyMarket(std::string name, int balance) : Savings(name, balance) {
        this->setInterestRate(20);
        this->updateBalance();
    }
    MoneyMarket(std::string name, int balance, Date* opening) : Savings(name, balance, opening) {
        this->setInterestRate(20);
        this->updateBalance();
    }
    virtual ~MoneyMarket();
    virtual bool withdraw(int cents);
    virtual Date* getLastUpdate() const {return m_lastUpdateDate;}
    virtual void setLastUpdate(Date* last) {m_lastUpdateDate = last;}
};
