#include <iostream>
#include <memory>
#include <vector>
#include "student.hpp"
int main() {
    Student* st;
    Student re;
    std::vector<Student*> list{};
    list.push_back(new CS1Cstudent("Tomasz", 2131, "634364523", 23, "sophomore", 3.9));
    list.push_back(new CS1Cstudent("Tomsadasz", 231, "634323", 66, "sozxcmore", 3.9));
    re = *list[1];
    
    std::cout << std::endl;
}
