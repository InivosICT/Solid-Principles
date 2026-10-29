#include <iostream>
using namespace std;

class IVehicle {
public:
    virtual void move() = 0;
    virtual void startEngine() = 0;
};


class Car : public IVehicle {
public:
    void move() override {
        cout << "Car moving" << endl;
    }

    void startEngine() override {
        cout << "Car engine started" << endl;
    }
};

class SportsCar : public Car {
public:
    void move() override {
        cout << "Sports Car moving" << endl;
    }

    void startEngine() override {
        cout << "Sports Car engine started" << endl;
    }
};

class Bicycle : public IVehicle {
public:
    void move() override {
        cout << "Bicycle moving" << endl;
    }
    void startEngine() override {
        cout << "Error !!" << endl; 
    }
};

int main() {
    IVehicle* vehicle;
    Bicycle bicycle;
    SportsCar sportsCar;
    
    vehicle = &bicycle;
    vehicle->move();
    vehicle->startEngine();

    return 0;
}