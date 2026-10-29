#include <iostream>
using namespace std;

class IVehicle {
public:
    virtual void move() = 0;
};

class IEngineVehicle : public IVehicle {
public:
    virtual void startEngine() = 0;
};

class Car : public IEngineVehicle {
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
};

int main() {
    Car* car;
    SportsCar sportsCar;
    
    car = &sportsCar;
    car->move();

    return 0;
}