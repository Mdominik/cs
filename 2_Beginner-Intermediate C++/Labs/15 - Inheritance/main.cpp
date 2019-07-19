#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <algorithm>
#include <sstream>
#define OUTPUT(x) std::cout << x


class Animal {
public:
    Animal();
    virtual ~Animal();
    std::string getName() const { return name;}
    int getAge() const {return age;}
    std::string name;
    int age=0;
    virtual void toString() const;
};

class Sheep : public Animal {
public:
    Sheep();
    virtual ~Sheep();
    std::string wool_type;
    enum WoolType { LONG, MEDIUM, FINE, CARPET};
    std::string wool_color;

    virtual void toString() const;
    //WoolType wool
};

void Sheep::toString() const  {
    OUTPUT(name << "\t" << age << "\t" << wool_type <<"\t" << wool_color);
    std::cout << std::endl;
}

class Pig : public Animal {
public:
    Pig();
    virtual ~Pig();
    std::string tail_type;

    enum TailType {STRAIGHT, CORKSCREW, CURL_UP, CURL_RIGHT, CURL_LEFT};
    virtual void toString() const;
    //TailType tail;
};

void Animal::toString() const {
}

void Pig::toString() const {
    OUTPUT(name << "\t" << age << "\t" << tail_type<<"\t");
    std::cout << std::endl;
}

Animal::Animal() {

}
Animal::~Animal() {

}
Pig::Pig() {

}
Pig::~Pig() {

}
Sheep::Sheep() {

}
Sheep::~Sheep() {

}
class Livestock{
public:
    bool first_run = true;
    std::vector<Animal*> animals;
    enum Menu {Exit=0, InitializeAnimals=1, ReinitSheep=1, ReinitPigs=2, ChangeAge=3, Display=4};
    void initializeAnimals(std::string& file) {
        Pig* pig;
        Sheep* sheep;
        std::string line;
        std::ifstream myfile(file);
        int buf_int;
        int counter = 0;
        if(!file.compare("Sheep.txt")) {
            this->animals.clear();
            while(myfile) {
                std::getline(myfile, line);
                std::stringstream ss(line);
                if(counter%5 == 0) {
                    sheep = new Sheep;
                    sheep->name = line;
                }
                else if ((counter-1)%5 == 0){
                    if(ss >> buf_int) sheep->age = buf_int;
                }
                else if((counter-2)%5 == 0) {
                    sheep->wool_type = line;
                }
                else if((counter-3)%5 == 0) {
                    sheep->wool_color = line;
                    animals.push_back(sheep);
                }
                counter++;
            }
            counter = 0;
        }


        else if(!file.compare("Pigs.txt")){
            while(myfile) {
                std::getline(myfile, line);
                std::stringstream ss(line);
                if(counter%4 == 0) {
                    pig = new Pig;
                    pig->name = line;
                }
                else if ((counter-1)%4 == 0){
                    if(ss >> buf_int) pig->age = buf_int;
                }
                else if((counter-2)%4 == 0) {
                    pig->tail_type = line;
                    animals.push_back(pig);
                }
                counter++;
            }
            counter = 0;
        }

    }
    void printInitMenu(int& choice) {
        std::cout << "1 - Initialize Animals" << std::endl;
        std::cout << "0 - Exit" << std::endl;
        std::cout << "Enter selection: ";
        std::cin >> choice;
    }

    void printMainMenu(int& choice) {
        std::cout << "1 - Reinitialize Sheep" << std::endl;
        std::cout << "2 - Reinitialize Pigs" << std::endl;
        std::cout << "3 - Change age" << std::endl;
        std::cout << "4 - Display" << std::endl;
        std::cout << "0 - Exit" << std::endl;
        std::cout << "Enter action: ";
        std::cin >> choice;
    }

    void displayHeading() {
        OUTPUT("NAME \t AGE \t WOOLTYPE \t COLOR" << std::endl);
        OUTPUT("---- \t --- \t -------- \t -----" << std::endl);
    }
    void displayTable() {
        OUTPUT("The sheep: ") << std::endl;
        displayHeading();
        for(auto ani : animals) {
            ani->toString();
        }

        OUTPUT("The pig: ") << std::endl;
        displayHeading();
        for(auto ani : animals) {
            ani->toString();
        }
    }
};

int main() {
    Livestock* stock = new Livestock();
    int choice;
    std::string sheep_file = "Sheep.txt";
    std::string pigs_file = "Pigs.txt";
    if(stock->first_run) {
        stock->printInitMenu(choice);
        if(choice == Livestock::Menu::Exit) return 0;
        if(choice == Livestock::Menu::InitializeAnimals) {
            stock->initializeAnimals(sheep_file);
            stock->initializeAnimals(pigs_file);
        }
        stock->first_run = false;
    }

    while(true) {
        stock->printMainMenu(choice);
        switch(choice) {
        case Livestock::Menu::Exit:
            OUTPUT("Exiting.") << std::endl;
            return 0;
        case Livestock::Menu::ReinitSheep:
            stock->initializeAnimals(sheep_file);
            break;
        case Livestock::Menu::ReinitPigs:
            stock->initializeAnimals(pigs_file);
            break;
        case Livestock::Menu::ChangeAge:

            break;
        case Livestock::Menu::Display:
            stock->displayTable();
            break;
        }
    }
    return 0;
}
