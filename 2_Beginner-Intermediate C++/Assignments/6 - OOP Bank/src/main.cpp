#include "date.hpp"
#include "bank.hpp"
#include "accounts.hpp"


#define LOG(X) std::cout << X << std::endl

int main() {
    std::vector<Account*> accs;
    Account* myAcc = new Account("Dominik MAyniak", 1000, new Date(2019, 5, 20, 6, 32, 40));
    Savings* mySav = new Savings("Tom Jonson", 3000);
    accs.push_back(myAcc);
    accs.push_back(mySav);
    LOG(mySav->getInterestRate());
    LOG(accs[0]->getName());
    LOG(accs[1]->getName());
    LOG(accs[1]->getInterestRate());
    delete myAcc;
    return 0;
}
