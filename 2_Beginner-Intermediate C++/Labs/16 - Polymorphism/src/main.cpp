#include "main.hpp"

int main() {
    Livestock* stock = new Livestock;
    std::string re = "REE";
    while(true) {
        stock->printMenu();
        switch(stock->choice_int) {
        case Livestock::Menu::Exit:
            std::cout << "Exit" << std::endl;
            return 0;
            break;
        case Livestock::Menu::AddAnimal:
            stock->addAnimal();
            break;
        case Livestock::Menu::RemoveAnimal:
            stock->removeAnimal();
            break;
        case Livestock::Menu::FirstAnimal:
            stock->displayFirstAnimal();
            break;
        case Livestock::Menu::FindAnimal:
            stock->findAnimal(re)->displayTable();
            break;
        case Livestock::Menu::Size:
            std::cout << "Size: " << stock->getSize() << " animals."<< std::endl;
            break;
        case Livestock::Menu::DisplayTable:
            stock->displayAll();
            break;
        case Livestock::Menu::ClearList:
            stock->clearList();
            break;
        }
    }

    return 0;
}
