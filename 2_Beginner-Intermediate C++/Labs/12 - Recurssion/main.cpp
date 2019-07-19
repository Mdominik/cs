#include <iostream>
#include <string>
#include <fstream>

int gcd(int a, int b) {
    int prev = b;
    if(a%b!=0){
        prev = a%b; //8
        return gcd(b, prev); //gcd(32,8)
    } else {
        return prev;
    }
}


int main() {
    int a, b;
    std::cout << "Get a: ";
    std::cin >> a;
    std::cout <<"Get b: ";
    std::cin >> b;

    std::ofstream file("myfile.txt");
    file << gcd(a,b);
    return 0;
}
