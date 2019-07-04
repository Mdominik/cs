#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
class Shape {
public:
    Shape(float _a, float _b) : a{_a}, b{_b} {}
    float a,b;
    virtual float calcPerimeter()=0;
    virtual float calcArea()=0;
};

class Rect : public Shape {
public:
    Rect(float _a, float _b) : Shape(_a, _b){}
    virtual float calcPerimeter() {
        return 2*(a+b);
    }
    virtual float calcArea() {
        return a*b;
    }
};

class Triangle : public Shape{
public:
    float c;
    Triangle(float _a, float _b, float _c) : Shape(_a, _b){
        c=_c;
    }
    virtual float calcPerimeter() {
        return a+b+c;
    }
    virtual float calcArea() {
        float s = (a+b+c)/2;
        return std::sqrt(s*(s-a)*(s-b)*(s-c));
    }
};

int main(int argc, char** argv) {
    Shape* shape;
    Rect rect(4,3);
    Triangle tr(3,5,4);
    shape = &tr;
    std::cout << shape->calcArea() << std::endl;
    if(argc > 1) {
        std::cout << *(argv+1)[0];
        std::cout << *(argv+2) << std::endl;
    }
    return 0;
}
