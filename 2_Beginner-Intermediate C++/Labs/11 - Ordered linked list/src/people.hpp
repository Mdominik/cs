#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

struct Person {
    std::string name;
    char gender;
    int age;
    Person* prev=nullptr;
    Person* next=nullptr;
};

class People{
public:
    Person* tail=nullptr;
    Person* head=nullptr;
    int size=0;

    void push(Person* pers);

    Person* pop();

    Person* searchByName(std::string name);

    void clearList();



    bool isEmpty() {return size==0;}
    void increment() {size++;}
    void decrement() {size--;}
    int getSize() const {return size;}
};

class MenuClass {
public:
    void inputFile(std::string &in);
    void propagate_list(std::string& input_file, People *people);
    void printPerson(Person* pers);
    void printMenu(int &choice);
    enum Menu {
        Exit, Create, Display, isEmpty, SearchByName, RemoveNode, Clear
    };

};
