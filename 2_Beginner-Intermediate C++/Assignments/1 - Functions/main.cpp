#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>
#include <algorithm>

class PeopleManager {
public:
    // void propagate_arrays(std::string& input_file,
    //                             std::vector<std::string>& names,
    //                             std::vector<int>& ids,
    //                             std::vector<float>& balances);
    // int search_balance(std::vector<float> &balances, bool search_for_largest);
    // float sum_and_average(bool sum);
    // int search_name(std::vector<std::string> &names, std::string name);

    void propagate_arrays(std::string& input_file,
                                std::vector<std::string>& names,
                                std::vector<int>& ids,
                                std::vector<float>& balances) {
        int counter=0;
        std::string line;
        std::ifstream myfile(input_file);
        int buf_int;
        float buf_float;

        while(myfile) {
            std::getline(myfile, line);
            std::stringstream ss(line);
            if(!line.compare("")) return;
            if(counter%2 == 0) {
                names.push_back(line);
            }
            else {
                if(ss >> buf_int) ids.push_back(buf_int);
                if(ss >> buf_float) balances.push_back(buf_float);
            }
            counter++;
        }
    }

    void output_to_file(std::string &output_file, std::string &name, int id,
                        float balance ) {
        std::ofstream myfile;
        myfile.open(output_file, std::ios_base::app);
        myfile << name << "\n" << id << "\n" << balance << std::endl;
        myfile.close();
    }
    void output_to_file(std::string &output_file, float sum_or_average, bool is_sum) {
        std::ofstream myfile;
        myfile.open(output_file, std::ios_base::app);
        if(is_sum)
            myfile << "Sum: " << sum_or_average;
        else
            myfile << "Average: " << sum_or_average;
        myfile.close();
    }
    //outputs index of the person

    int search_balance(std::vector<float> &balances, bool search_for_largest) {
        if(search_for_largest)
            return std::max_element(balances.begin(),balances.end()) - balances.begin();
        else
            return std::min_element(balances.begin(),balances.end()) - balances.begin();
    }
    float sum_and_average(std::vector<float> &balances, bool sum) {
        float var;
        for(auto &balance : balances) {
            var += balance;
        }
        return sum ? var : var/balances.size();
    }
    int search_name(std::vector<std::string> &names, std::string name) {
        int count=0;
        for(std::string _name : names) {
            if(!_name.compare(name)) {
                return count;
            }
            count++;
        }
        return -1;
    }
};

class MenuClass {
public:
    static void inputFiles(std::string &in, std::string &out) {
        std::cout << "What input file would you like to use?" << std::endl;
        std::cin >> in;
        std::cout << "What output file would you like to use?" << std::endl;
        std::cin >> out;
    }

    static void printMenu(int& choice) {
        std::cout << "1 - Find the largest balance" << std::endl;
        std::cout << "2 - Find the smallest balance" << std::endl;
        std::cout << "3 - Obtain the sum of all balances" << std::endl;
        std::cout << "4 - Obtain the average of all balances" << std::endl;
        std::cout << "5 - Find person" << std::endl;
        std::cout << "0 - to Exit" << std::endl;
        std::cout << "Enter a command: ";
        std::cin >> choice;
    }

    enum Menu {
        Exit, Largest, Smallest, Sum, Average, Find
    };
};


int main() {


    std::string input_file;
    std::string output_file;
    std::string find_name;
    std::vector<std::string> names;
    std::vector<int> ids;
    std::vector<float> balances;
    std::string line;
    int choice = 0;
    int index;
    int search_index;
    float sum;
    float average;
    PeopleManager* ppl_man = new PeopleManager();



    MenuClass::inputFiles(input_file, output_file);
    ppl_man->propagate_arrays(input_file, names, ids, balances);


    while(true) {
        MenuClass::printMenu(choice);

        switch(choice) {
        case MenuClass::Menu::Exit:
            std::cout << "Bye Bye." << std::endl;
            return 0;
        case MenuClass::Menu::Largest:
            index = ppl_man->search_balance(balances, true);
            ppl_man->output_to_file(output_file, names[index], ids[index],
                                    balances[index]);
            break;
        case MenuClass::Menu::Smallest:
            index = ppl_man->search_balance(balances, false);
            ppl_man->output_to_file(output_file, names[index], ids[index],
                                    balances[index]);
            break;
        case MenuClass::Menu::Sum:
            sum = ppl_man->sum_and_average(balances, true);
            ppl_man->output_to_file(output_file, sum, true); //true for sum
            break;
        case MenuClass::Menu::Average:
            average = ppl_man->sum_and_average(balances, false);
            ppl_man->output_to_file(output_file, average, false); // false for average
            break;
        case MenuClass::Menu::Find:
            std::cout << "Give me the name: " << std::endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::getline(std::cin, find_name);

            search_index = ppl_man->search_name(names, find_name);
            if(search_index == -1) {
                std::cout << "Name not found." << std::endl;
            } else {

                ppl_man->output_to_file(output_file,
                                    names[search_index], ids[search_index],
                                    balances[search_index]);
            }
            break;
        }
    }

    return 0;
}
