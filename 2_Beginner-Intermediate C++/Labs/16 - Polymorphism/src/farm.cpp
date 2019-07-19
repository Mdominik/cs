#include "farm.hpp"


Animal::~Animal() {}
Pig::~Pig() {}
Sheep::~Sheep() {}


void Animal::speak() {
    std::cout << "Animal's voice" << std::endl;
}

void Sheep::speak() {
    std::cout << "baaa" << std::endl;
}

void Pig::speak() {
    std::cout << "oink" << std::endl;
}

void Animal::displayTable() {
    std::cout << "Animal class doesn't have any table"<< std::endl;
}

void Pig::displayTable() {
    std::cout << this->name <<"\t"<<this->age << "\t" << this->tail_type << std::endl;
}

void Sheep::displayTable() {
    std::cout << this->name <<"\t"<<this->age << "\t" << this->wool_type << std::endl;
}

void Animal::display() {
    std::cout << "ANIMAL PICTURE" << std::endl;
}

void Sheep::display() {
    std::cout << "SHEEP PICTURE" << std::endl;
}

void Pig::display() {
    std::cout << "PIG PICTURE" << std::endl;
}

void Livestock::printMenu() {
    std::cout << "*********************" << std::endl;
    std::cout << "* WELCOME TO THE ANIMAL LIST MANAGER *" << std::endl;
    std::cout << "*********************" << std::endl;
    std::cout << "1 - Add Animal" << std::endl;
    std::cout << "2 - Remove Animal" << std::endl;
    std::cout << "3 - Output 1st Animal" << std::endl;
    std::cout << "4 - Find Animal" << std::endl;
    std::cout << "5 - List size" << std::endl;
    std::cout << "6 - Display Table" << std::endl;
    std::cout << "7 - Clear list" << std::endl;
    std::cout << "0 - Exit" << std::endl;
    std::cout << "Enter a command: ";
    std::cin >> this->choice_int;
    std::cout << std::endl;
}
void Livestock::choosePigsTail() {
    std::cout << "Pig Tail Type:" << std::endl;
    std::cout << "(S) - Straight" << std::endl;
    std::cout << "(C) - Cork" << std::endl;
    std::cout << "(U) - Curls up" << std::endl;
    std::cout << "(R) - Curls right" << std::endl;
    std::cout << "(L) - Curls left" << std::endl;
    std::cout << "Enter Choice (S/C/U/R/L): " << std::endl;
    std::cin >> this->choice_char;
}

void Livestock::addAnimal() {
    std::cout << "ANIMAL TYPE: " << std::endl;
    std::cout << "(P) - Pig" << std::endl;
    std::cout << "(S) - Sheep" << std::endl;
    std::cout << "Selection (P/S): " << std::endl;
    std::cin >> this->choice_char;

    if(choice_char=='P' || choice_char=='p') {
        Pig* pig;
        std::string name;
        int age;
        Pig::TailType tail_type;
        std::cout << "Pig's Name: ";
        std::cin >> name;
        std::cout << "Pig's Age: ";
        std::cin >> age;
        this->choosePigsTail();
        if(this->choice_char == 'S' || this->choice_char == 's') {
            tail_type = Pig::TailType::STRAIGHT;
            std::cout << tail_type << std::endl;
        }
        else if(this->choice_char == 'C' || this->choice_char == 'c') {
            tail_type = Pig::TailType::CORKSCREW;
        }
        else if(this->choice_char == 'U' || this->choice_char == 'u') {
            tail_type = Pig::TailType::CURL_UP;
        }
        else if(this->choice_char == 'R' || this->choice_char == 'r') {
            tail_type = Pig::TailType::CURL_RIGHT;
        }
        else if(this->choice_char == 'L' || this->choice_char == 'l') {
            tail_type = Pig::TailType::CURL_LEFT;
        }

        pig = new Pig(name, age, tail_type);
        if(this->size > 0) this->push_animal(pig);
        else {
            this->head = pig;
            this->tail = pig;
        }
        this->incrementSize();
    }

    else {
        std::cout << "Input not correct." << std::endl;
    }


}
void Livestock::addSheep() {

}
void Livestock::chooseSheepWool() {

}
void Livestock::chooseSheepColor(){

}
void Livestock::addPig() {

}

void Livestock::displayAll() {
    std::cout << "NAME\tAGE\tWOOL/TAIL" << std::endl;
    std::cout << "---\t----\t---" << std::endl;
    Animal* temp;
    if(this->head) {
        temp = this->head;
        while(temp->prev) {
            temp->displayTable();
            temp = temp->prev;
        }
        temp->displayTable();
    }
    else { std::cout << "List empty!" << std::endl;}
}

void Livestock::decrementSize() {

}

void Livestock::incrementSize() {
    this->size++;
}
void Livestock::push_animal(Animal* new_animal) {
    this->head->next = new_animal;
    new_animal->prev = this->head;
    this->head = new_animal;
}
void Livestock::removeAnimal() {
    std::cout << "Give me the name: " << std::endl;
    std::string line;
    std::cin.clear();
    Animal* temp;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::getline(std::cin, line);
    Animal* animal;
    animal = this->head;
    if(!animal) return;
    while(animal) {
        if(animal->getName().compare(line)) {
            temp = animal;
            if(animal == this->head) {
                this->head = animal->prev;
            }
            if(animal == this->tail) {

                this->tail = animal->next;
            }
            else {

            }

        }
        animal = animal->prev;
    }
}
void Livestock::displayFirstAnimal() {
    this->head->displayTable();
}
Animal* Livestock::findAnimal(std::string &name) {
    int index = 0;
    Animal* temp=this->head;
    while(temp) {
        if(temp->getName().compare(name)) {
            temp->displayTable();
            break;
        }
        temp = temp->prev;
        index++;
    }
    std::cout << "On index: " << index;
}
void Livestock::clearList() {
    Animal* temp;
    if(this->head) {
        temp = this->head;
        while(this->head->prev){
            temp = this->head;
            this->head = this->head->prev;
            temp = nullptr;
            this->decrementSize();
        }
        temp = this->head;
        this->head = this->head->prev;
        temp = nullptr;
        this->decrementSize();
    }
    else{std::cout << "List already empty!" << std::endl;}
}
