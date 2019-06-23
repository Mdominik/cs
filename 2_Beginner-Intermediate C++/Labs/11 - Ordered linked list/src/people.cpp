#include "people.hpp"
class MenuClass;

void MenuClass::inputFile(std::string &in) {
    std::cout << "What input file would you like to use?" << std::endl;
    std::cin >> in;
}
void MenuClass::printMenu(int &choice) {
    std::cout << "1 - Create list" << std::endl;
    std::cout << "2 - Display list" << std::endl;
    std::cout << "3 - Is the list empty?" << std::endl;
    std::cout << "4 - Search by name" << std::endl;
    std::cout << "5 - Remove node" << std::endl;
    std::cout << "6 - Clear list" << std::endl;
    std::cout << "0 - Exit" << std::endl;
    std::cout << "Enter a command: ";
    std::cin >> choice;

}
void MenuClass::printPerson(Person* pers) {
    std::cout << pers->name << "\t" << pers->gender << "\t" << pers->age <<std::endl;
}

Person* MenuClass::propagate_list(std::string& input_file, People *people) {
    int counter=0;
    std::string line;
    std::ifstream myfile("../src/" + input_file);
    char buf_gender;
    int buf_age;
    Person* pers;
    Person* temp;
    Person* sorted;
    while(myfile) {
        std::getline(myfile, line);
        std::stringstream ss(line);
        if(counter%3 == 0) {
            pers = new Person();
            pers->name = line;

            if(!people->getSize()){
                people->head = pers;
                people->tail = pers;
            }
            else {
                temp->prev = pers;
                pers->next = temp;
                people->tail = pers;
            }
            people->increment();
        }
        else if((counter+2)%3 == 0) {
            if(ss >> buf_gender) pers->gender = buf_gender;
            if(ss >> buf_age) pers->age = buf_age;
            temp = pers;
        }
        counter++;
    }
}



Person* People::pop() {
    Person* temp;
    temp = this->head
    return
}
