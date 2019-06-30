#include "date.hpp"
#include "bank.hpp"
#include "accounts.hpp"


#define LOG(X) std::cout << X << std::endl

int main() {
    Bank* bank = new Bank();
    FileManager fileman("accounts.txt");
    fileman.populateFile(bank);
    Account* tmp = bank->head;

    while(tmp->getNext()) {
        tmp->display();
        tmp=tmp->getNext();
    }
    tmp->display();
    exit(0);

}
