#include <iostream>
#include <string>
#include <array>
#include <fstream>


#define OUTPUT(x) std::cout << x;
#define INPUT(x) std::cin >> x
#define NEW_LINE() std::cout << std::endl;
int first_int[4];
int second_int[4];
int CalculateGCD(int a, int b) {
    int remainder = 0;
    int prev_remainder = b;

    while(true) {
        remainder = a%b;
        if (remainder == 0) break;
        a = b;
        prev_remainder = remainder;
        b = remainder;
    }
    return prev_remainder;

}


void PrintHeader(std::ostream &os) {
    for(int i=0; i<4; i++) {
        os << "The GCD for " << first_int[i] << " and " << second_int[i] << " is " <<
        CalculateGCD(first_int[i], second_int[i]) << std::endl;
    }


}

int main() {

    for(int i=0; i<4; i++) {
        OUTPUT("Enter the first integer: \t")
        INPUT(first_int[i]);
        NEW_LINE()
        do{
            OUTPUT("Enter the second integer: \t")
            INPUT(second_int[i]);
        }while(second_int[i] <= 0);

        NEW_LINE()
        NEW_LINE()
    }

    NEW_LINE()
    NEW_LINE()
    OUTPUT("Thank you for using my GCD calculator")
    NEW_LINE()


    std::filebuf fb;

    fb.open("test.txt", std::ios::out);
    std::ostream os(&fb);
    PrintHeader(os);
    fb.close();
}
