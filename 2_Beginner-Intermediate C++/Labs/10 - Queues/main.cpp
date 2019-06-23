#include <iostream>
#include <string>
#include <vector>


struct Person{
    std::string name;
    std::string gender;
    int age;
    Person* next = nullptr;
};

class Queue{
public:
    Person* back_element=nullptr;
    int size_queue=0;
    void enqueue(Person* pers) {
        if(back_element) {
            pers->next = back_element;
            back_element = pers;
            size_queue++;
        } else {
            back_element = pers;
            size_queue++;
        }

    }

    Person* dequeue() {
        Person* temp_person;
        Person* last_person;
        if(back_element) {
            if(!back_element->next) {
                last_person = back_element;
                back_element = nullptr;
                size_queue--;
                return last_person;
            }
            temp_person = back_element;
            while(temp_person->next) {
                last_person = temp_person;
                temp_person = temp_person->next;
            }
            last_person->next = nullptr;
            size_queue--;
            return temp_person;
        }
        return nullptr;
    }

    bool isEmpty() {
        return size_queue==0;
    }

    Person* front() {
        Person* temp;
        temp = back_element;

        if(!back_element) {
            return nullptr;
        }
        while(temp->next) {
            temp = temp->next;
        }
        std::cout << temp << std::endl;
        return temp;
    }

    int size() const {
        return size_queue;
    }

    void clear() {
        Person* temp = back_element;
        if(back_element) {
            while(back_element->next) {
                std::cout << "ONCE" << std::endl;
                temp = back_element;
                back_element = back_element->next;
                temp = nullptr;
                size_queue--;
            }
            size_queue--;
        }
        back_element = nullptr;
    }
};


class MenuClass {
public:
    static void printQueueMenu() {
        std::cout << "1 - Add a person (ENQUEUE)" << std::endl;
        std::cout << "2 - Remove a person (DEQUEUE)" << std::endl;
        std::cout << "3 - Is the queue empty?" << std::endl;
        std::cout << "4 - Who is in front?" << std::endl;
        std::cout << "5 - How many ppl are there?" << std::endl;
        std::cout << "6 - Clear the queue" << std::endl;
        std::cout << "0 - to Exit" << std::endl;
        std::cout << "Enter a command: ";
    }
    static void enterName(std::string& name) {
        std::cin.ignore();
        std::cout << "Enter Name: " ;
        std::getline(std::cin, name);

    }
    static void enterGender(std::string& gender) {
        std::cout << "Enter Gender: ";
        std::cin >> gender;

    }
    static void enterAge(int& age) {
        std::cout << "Enter Age: ";
        std::cin >> age;
    }

    static void listPerson(Person* pers) {
        std::cout << "Name: \t" << pers->name << std::endl;
        std::cout << "Gender: \t" << pers->gender << std::endl;
        std::cout << "Age: \t" << pers->age << std::endl;


    }

    enum Menu {
        Exit, Enqueue, Dequeue, IsEmpty, Front, Size, Clear
    };
};


int main() {
    Queue* queue = new Queue();
    int command_entered = 1;
    std::string name;
    std::string gender;
    Person* pers;
    int age;

    while(true) {
        if(!command_entered) break;
        do {
            MenuClass::printQueueMenu();
            std::cin >> command_entered;
            if(command_entered < 0 && command_entered > 6) {
                std::cout << "Invalid entry." << std::endl;
            }
        } while(command_entered < 0 && command_entered > 6);

        std::cout << std::endl;
        switch(command_entered) {

            //EXIT
            case MenuClass::Menu::Exit:
                std::cout << "Exit pressed" << std::endl;
                std::cout << std::endl;
                break;

            //PUSH
            case MenuClass::Menu::Enqueue:
                pers = new Person();
                std::cout << "Who would you like to add?" << std::endl;
                MenuClass::enterName(pers->name);
                MenuClass::enterGender(pers->gender);
                MenuClass::enterAge(pers->age);

                queue->enqueue(pers);
                std::cout << pers->name << std::endl;
                std::cout << std::endl;
                break;

            //POP
            case MenuClass::Menu::Dequeue:

                if(queue->isEmpty()) {
                    std::cout << "Queue empty." << std::endl;
                } else {
                    pers = queue->dequeue();
                    std::cout << "Removing person." << std::endl;
                    MenuClass::listPerson(pers);
                }
                std::cout << std::endl;
                break;

            //isEmpty
            case MenuClass::Menu::IsEmpty:
                if(queue->isEmpty())
                    std::cout << "Queue empty." << std::endl;
                else
                    std::cout << "Queue not empty." << std::endl;
                std::cout << std::endl;
                break;

            //peek
            case MenuClass::Menu::Front:
                pers = queue->front();
                if(pers)
                    MenuClass::listPerson(pers);
                else
                    std::cout << "Queue empty" << std::endl;

                std::cout << std::endl;
                break;

            //size
            case MenuClass::Menu::Size:
                std::cout << queue->size() << std::endl;
                std::cout << std::endl;
                break;

            //clear
            case MenuClass::Menu::Clear:
                queue->clear();
                std::cout << "Cleared" << std::endl;
                std::cout << std::endl;
                break;

            default:
                break;

        }

    }
    delete pers;
    return 0;

}
