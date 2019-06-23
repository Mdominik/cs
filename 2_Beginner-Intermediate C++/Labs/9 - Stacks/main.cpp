#include <iostream>
#include <string>
#include <vector>


struct Person{
    std::string name;
    std::string gender;
    int age;
    Person* next = nullptr;
};

class Stack {
public:

    int stack_size = 0;
    Person* head = nullptr;
    void push(Person* pers) {
        pers->next = head;
        head = pers;
        stack_size++;
    }

    Person* pop() {
        Person* pers;
        pers = head;
        head = head->next;
        decrement_size();
        return pers;
    }

    bool isEmpty() {
        return !head;
    }

    Person* peek() {
        if(!head)
            return head;
        else {
            return nullptr;
        }
    }

    int size() const{
        return stack_size;
    }

    void increment_size() {stack_size++;}
    void decrement_size() {stack_size--;}
};


class MenuClass {
public:
    static void printStackMenu() {
        std::cout << "1 - Add a person (PUSH)" << std::endl;
        std::cout << "2 - Remove a person (POP)" << std::endl;
        std::cout << "3 - Is the stack empty?" << std::endl;
        std::cout << "4 - Who is on top?" << std::endl;
        std::cout << "5 - How many ppl are there?" << std::endl;
        std::cout << "0 - to Exit" << std::endl;
        std::cout << "Enter a command: ";
    }
    static void enterName(std::string& name) {
        std::cout << "Enter Name: " ;
        std::cin >> name;
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
        Exit, AddPerson, RemovePerson, StackEmpty, OnTop, Size
    };
};


int main() {
    Stack* stack = new Stack();
    int command_entered = 1;
    std::string name;
    std::string gender;
    Person* pers;
    int age;

    while(true) {
        if(!command_entered) break;
        do {
            MenuClass::printStackMenu();
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
            case MenuClass::Menu::AddPerson:
                pers = new Person();
                std::cout << "Who would you like to add?" << std::endl;
                MenuClass::enterName(pers->name);
                MenuClass::enterGender(pers->gender);
                MenuClass::enterAge(pers->age);

                stack->push(pers);
                std::cout << pers->name << std::endl;
                std::cout << std::endl;
                break;

            //POP
            case MenuClass::Menu::RemovePerson:

                if(stack->isEmpty()) {
                    std::cout << "Stack empty." << std::endl;
                } else {
                    pers = stack->pop();
                    std::cout << "Removing person." << std::endl;
                    std::cout << pers->name;
                    MenuClass::listPerson(pers);
                }
                std::cout << std::endl;
                break;

            //isEmpty
            case MenuClass::Menu::StackEmpty:
                if(stack->isEmpty())
                    std::cout << "Stack empty." << std::endl;
                else
                    std::cout << "Stack not empty." << std::endl;
                std::cout << std::endl;
                break;

            //peek
            case MenuClass::Menu::OnTop:
                pers = new Person();

                if(stack->peek() != nullptr) {
                    pers = stack->peek();
                    MenuClass::listPerson(pers);
                }
                else
                    std::cout << "Stack empty" << std::endl;
                std::cout << std::endl;
                break;

            //size
            case MenuClass::Menu::Size:
                std::cout << stack->size() << std::endl;
                std::cout << std::endl;
                break;

            default:
                break;

        }

    }
    delete pers;
    return 0;

}
