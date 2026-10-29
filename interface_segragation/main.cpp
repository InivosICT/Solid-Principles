#include <iostream>
using namespace std;

class IRoadVehicle {
public:
    virtual void drive() = 0;
};

class IAirVehicle {
public:
    virtual void fly() = 0;
};

class IWaterVehicle {
public:
    virtual void sail() = 0;
};

class Car : public IRoadVehicle {
    public:
        void drive() override {
            cout << "Car is driving"<< endl;
        }
};

class HybridCar : public IAirVehicle, public IRoadVehicle {
    public:
        void fly() override {
            cout << "HybridCar is flying"<< endl;
        }
        void drive() override {
            cout << "HybridCar is driving"<< endl;
        }
};



int main() {
    Car car;
    HybridCar hybrid;
    car.drive();
    hybrid.drive();
    hybrid.fly();
    return 0;
}