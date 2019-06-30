#pragma once
#include <iostream>
#include <string>
#include <algorithm>
#include <fstream>
#include <string>
#include <sstream>
#include <ctime>
#include <vector>
#include "accounts.hpp"

class Bank{
public:
    Account* head = nullptr;
    Account* findAccount(std::string number);
    Account* removeAccount();
    void pushAccount(Account* acc);
    static int size;
private:

};

class FileManager {
public:
    FileManager(char* path) : m_path(path)  {}
    void populateFile(Bank* bank);
    std::string m_path;

};

class MenuManager {
public:

};
