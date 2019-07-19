#include <iostream>
#include <memory>
#include <vector>
#include "student.hpp"
int main() {
    std::vector<CS1Cstudent*> list{};
    list.push_back(new CS1Cstudent("Tomasz", 231, "634364523", 23, "sophomore", 3.9));
    list.push_back(new CS1Cstudent("Tomsadasz", 233, "634323",243, "sozxcmore", 3.9));
    std::cin >> *list[0];
    std::cout << *list[0];
}
