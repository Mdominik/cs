#include <vector>
#include <iostream>
#include <memory>
#include <algorithm>
class Item {
public:
    std::string name;
};

int main( int argc, char **argv ) {
    if(argc>1) {
        if(*(argv+1) == 'f')
        std::cout << *(argv+1) << std::endl;
    }
}
