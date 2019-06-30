#include "date.hpp"
#include "bank.hpp"
#include "accounts.hpp"


#define LOG(X) std::cout << X << std::endl

int main() {
    std::vector<Account*> accs;
    accs.push_back(new Savings("Tom Jonson", 3000, new Date(2018, 12, 20, 6, 32, 40)));
    accs.push_back(new Savings("Tom Jonson", 312000, new Date(2019, 4, 20, 6, 32, 40)));
    std::cout << accs[0]->getBalance() << std::endl;
    std::cout << accs[1]->getBalance() << std::endl;

    return 0;

}
