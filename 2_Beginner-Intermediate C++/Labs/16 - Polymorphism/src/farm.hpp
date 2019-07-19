#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include <vector>
#include <algorithm>
class Animal {
public:
    explicit Animal(std::string _name, int _age) : name{_name}, age{_age} {}
    virtual ~Animal();
    Animal* next;F
    Animal* prev;
    int getAge() const { return age;}
    std::string getName() const { return name;}
    virtual void display();
    virtual void displayTable();
    virtual void speak();

protected:
    std::string name;
    int age;
};



class Pig : public Animal {
public:
    enum TailType {STRAIGHT, CORKSCREW, CURL_UP, CURL_RIGHT, CURL_LEFT};
    explicit Pig(std::string _name, int _age, TailType t) : Animal(_name, _age){this->tail_type = t;}
    virtual ~Pig();

    TailType tail_type;
    virtual void display();
    virtual void displayTable();
    virtual void speak();
};


class Sheep : public Animal {
public:
    enum WoolType {LONG, MEDIUM, FINE, CARPET};
    explicit Sheep(std::string _name, int _age, WoolType wool) : Animal(_name, _age){}
    virtual ~Sheep();

    WoolType wool_type;
    virtual void display();
    virtual void displayTable();
    virtual void speak();
};


class Livestock {
public:
    int choice_int = 0;
    char choice_char;
    Animal* head;
    Animal* tail;
    int getSize() const {return size;}

    void printMenu();
    void addAnimal();
    void addSheep();
    void chooseSheepWool();
    void chooseSheepColor();
    void addPig();
    void choosePigsTail();
    void push_animal(Animal* new_animal);
    void removeAnimal();
    void displayFirstAnimal();
    void decrementSize();
    void incrementSize();
    Animal* findAnimal(std::string &name);
    void clearList();
    void displayAll();

    enum Menu {Exit, AddAnimal, RemoveAnimal, FirstAnimal, FindAnimal, Size, DisplayTable,
                ClearList};


private:
    int size;
};
