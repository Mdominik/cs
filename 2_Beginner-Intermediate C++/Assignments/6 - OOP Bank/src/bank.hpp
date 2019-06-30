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
    Account* head;
    Account* findAccount(std::string number);
    Account* popAccount();
    void pushAccount(Account* acc);

private:

};

class FileManager {
public:

};
