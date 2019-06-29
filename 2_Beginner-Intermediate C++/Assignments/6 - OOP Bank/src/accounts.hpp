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
    int getBalance() const { return m_balance;}
    float getInterestRate() const {return interestRate;}

    void setName(std::string& name) {m_name = name;}
    void setAccoundNumber(int& number) {m_accountNumber = number;}
    void setOpeningDate(Date* openingDate) {m_openingDate = openingDate;}
    void setBalance(int& balance) {m_balance = balance;}
    void setInterestRate(float& _interestRate) {interestRate = _interestRate;}

    int createNumber();
    void display();
    virtual void updateBalance();
    virtual bool deposit(int cents);
    virtual bool transfer(Account* recipient, int cents);
    virtual bool withdraw(int cents);
    virtual int calculateInterests(float percent, int times);
protected:
    std::string m_name;
    int m_accountNumber;
    Date* m_openingDate;
    Date* m_lastUpdateDate;
    int m_balance;
    static int number_of_accounts;
    static int next_account_number;
    float interestRate=0;
};




class Checking : public Account {
public:
    // Checking() : Account::Account();
    // Checking() : Account::Account(std::string name, int balance, Date* opening);
    virtual ~Checking();
    virtual bool withdraw(int cents);

};

class Savings : public Account {
public:
    Savings(std::string name, int balance) : Account(name, balance) {
        std::cout << "SAVINGS CONSTRUCT" << std::endl;
    }
    Savings(std::string name, int balance, Date* opening) : Account(name, balance, opening) {
        std::cout << "SAVINGS CONSTRUCT" << std::endl;
    }
    virtual ~Savings();
    int getInterestRate() const {return interestRate;}

    //virtual void updateBalance();
protected:
    float interestRate = 10; //in percent
};

class MoneyMarket : public Savings {
public:
    // MoneyMarket() : Savings::Savings();
    // MoneyMarket() : Savings::Savings(std::string name, int balance, Date* opening);
    virtual ~MoneyMarket();
    virtual bool withdraw(int cents);
private:
    float interestRate = 20; //in percent
};
