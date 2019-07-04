#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
class Shape {
public:
    Shape(float _a, float _b) : a{_a}, b{_b} {}
    float a,b;
    virtual float calcPerimeter()=0;
    virtual float calcArea()=0;
    void wert() {
        std::cout << "Im shape" << std::endl;
    }
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
    void wert() {
        std::cout << "Im rect" << std::endl;
    }
};

void printPerimeter(Shape* sh) {
    std::cout<<sh->calcPerimeter()<<std::endl;
}

void printArea(Shape* sh) {
    std::cout<<sh->calcArea()<<std::endl;
}

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
    void wert() {
        std::cout << "Im triangle" << std::endl;
    }
};

int main(int argc, char** argv) {
    Shape* shape;
    Rect rect(4,3);
    Triangle tr(3,5,4);
    shape = &rect;
    printArea(shape);
    dynamic_cast<Rect*>(shape)->wert();
    rect.wert();
    tr.wert();
    return 0;
}
