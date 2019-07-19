#include <iostream>

class Vehicle {
public:
    Vehicle();
    virtual ~Vehicle();
    int cost;
};

Vehicle::Vehicle() { std::cout << "Vehicle built" << std::endl;}
Vehicle::~Vehicle() { std::cout << "Vehicle destroyed" << std::endl;}

class Auto : public Vehicle {
public:
    Auto();
    virtual ~Auto();
    bool is_autonomous;
};

Auto::Auto() { std::cout << "Auto built" << std::endl;}
Auto::~Auto() { std::cout << "Auto destroyed" << std::endl;}
class Plane : public Vehicle {
public:
    Plane();
    virtual ~Plane();
    int nr_engines;
};

Plane::Plane() { std::cout << "Plane built" << std::endl;}
Plane::~Plane() {std::cout << "Plane destroyed" << std::endl;}
int main() {
    Vehicle* autoo = new Auto();
    Vehicle* veh= new Vehicle();
    Vehicle* plane = new Plane();
    veh->cost = 3;
    std::cout << veh->cost << std::endl;
    std::cout << "Co"<< std::endl;
    return 0;
}
