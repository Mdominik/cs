#include <iostream>
#include <string>
#include <vector>
#include <fstream>




class MenuClass {
public:
    static void inputFiles(std::string& in, std::string& out) {
        std::cout << "What input file would you like to use?" << std::endl;
        std::cin >> in;
        std::cout << "What output file would you like to use?" << std::endl;
        std::cin >> out;
    }

    static void printMenu() {
        std::cout << "1 - Find the largest balance" << std::endl;
        std::cout << "2 - Find the smallest balance" << std::endl;
        std::cout << "3 - Obtain the sum of all balances" << std::endl;
        std::cout << "4 - Obtain the average of all balances" << std::endl;
        std::cout << "5 - Find person" << std::endl;
        std::cout << "0 - to Exit" << std::endl;
        std::cout << "Enter a command: ";
    }

    enum Menu {
        Exit, Largest, Smallest, Sum, Average, Find
    };
};


int main() {
    std::string input_file;
    std::string output_file;

    std::vector<std::string> names;
    std::vector<int> ids;
    std::vector<float> balances;
    int choice = 0;
    MenuClass::inputFiles(input_file, output_file);
    MenuClass::printMenu();

    int counter;
    std::string line;
    std::ifstream myfile("InFile.txt");
    int one_id;
    int one_balance;
    std::getline(myfile, line);
    std::istringstream iss(line);
    
    if(iss >> counter) {
        std::cout << counter;
    }

    switch(choice) {
        case MenuClass::Menu::Exit:

            break;
        case MenuClass::Menu::Largest:

            break;
        case MenuClass::Menu::Smallest:

            break;
        case MenuClass::Menu::Sum:

            break;
        case MenuClass::Menu::Average:

            break;
        case MenuClass::Menu::Find:

            break;
    }

    return 0;
}
