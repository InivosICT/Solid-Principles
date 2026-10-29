#include <iostream>
using namespace std;


class TemperatureSensor {
    public:
        void start_self_calibration() {
            cout << "temperature sensor self calibration started" << endl;
        }
        void start_sending_values() {
            cout << "temparature values sending initiated" << endl;
        }
};

class SensorVehicle {
    private:
        TemperatureSensor sensor;
    public:
        
        void start_self_test() {
            sensor.start_self_calibration();
        }

        void start_operation() {
            sensor.start_sending_values();
        }
};

int main() {
    SensorVehicle vehicle();
    vehicle.start_self_test();
    vehicle.start_operation();
    return 0;
}