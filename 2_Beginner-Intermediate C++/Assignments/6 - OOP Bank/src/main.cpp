#include "date.hpp"
#include "bank.hpp"
#include "accounts.hpp"


#define LOG(X) std::cout << X << std::endl

int main() {
    Bank* bank = new Bank();
    FileManager input_acc("accounts.txt");
    input_acc.populateList(bank);
    Account* tmp = bank->head;
    while(tmp->getNext()) {
        bank->withdraw(tmp, 1000);
        tmp=tmp->getNext();
    }
    tmp->display();
    exit(0);

}
