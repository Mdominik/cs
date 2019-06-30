#include "date.hpp"
#include "bank.hpp"
#include "accounts.hpp"


#define LOG(X) std::cout << X << std::endl

int main() {
    std::vector<Account*> accs;
    accs.push_back(new Savings("Tom Jonson", 3000, Date(2019, 5, 20, 10, 34, 12)));
    accs.push_back(new Checking("Jaime Lannister", 10000, Date(2019, 4, 12, 10, 34, 12)));
    accs.push_back(new Savings("Dominik Mazniak", 4000));
    LOG(accs[0]->withdraw(2900));
    LOG(accs[2]->withdraw(2990));
    LOG(accs[1]->withdraw(40000));
    accs[1]->deposit(100000);
    accs[1]->transfer(accs[2], 2000);
    accs[0]->display();
    accs[1]->display();
    accs[2]->display();
    accs.clear();
    exit(0);

}
