#include <iostream>
using namespace std;

class MultiPurposeSensor {
public:
    void monitorTemperature() {
        cout << "Sensing temperature" << endl;
    }
public:
    void monitorTirePosition() {
        cout << "Sensing position of tires" << endl;
    }
public:
    void awakeCamera() {
        cout << "capturing front images" << endl;
    }
};

int main() {
    MultiPurposeSensor sensor;
    
    sensor.monitorTemperature();
    sensor.monitorTirePosition();
    sensor.awakeCamera();

    return 0;
}