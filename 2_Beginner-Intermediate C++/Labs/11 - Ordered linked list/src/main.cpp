#include "people.hpp"
#include "main.hpp"



int main() {
    int choice;
    MenuClass* menu = new MenuClass();
    People* people = new People();
    Person* person = new Person();
    std::string input_file;
    menu->inputFile(input_file);
    menu->printMenu(choice);

    switch(choice) {
    case MenuClass::Menu::Exit:
        std::cout << "Thank you for using my program. Exitting." << std::endl;
        return 0;
    case MenuClass::Menu::Create:
        menu->propagate_list(input_file, people);
        person = people->tail;
        while(person->next) {
            menu->printPerson(person);
            person = person->next;
        }
        menu->printPerson(person);
        break;
    case MenuClass::Menu::Display:
        people->pop();
        break;
    case MenuClass::Menu::isEmpty:

        break;
    case MenuClass::Menu::SearchByName:

        break;
    case MenuClass::Menu::RemoveNode:

        break;
    case MenuClass::Menu::Clear:

        break;
    }

    return 0;
}
