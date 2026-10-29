#include <iostream>
using namespace std;

class ISensor {
    public:
        virtual void start_self_calibration() = 0;
        virtual void start_sending_values() =0;        
};

class TemperatureSensor : public ISensor {
    public:
        void start_self_calibration() override {
            cout << "temperature sensor self calibration started" << endl;
        }
        void start_sending_values() override {
            cout << "temparature values sending initiated" << endl;
        }
};

class SensorVehicle {
    private:
        ISensor* sensor;
    public:
        SensorVehicle(ISensor* snr) : sensor(snr) {}

        void start_self_test() {
            sensor->start_self_calibration();
        }

        void start_operation() {
            sensor->start_sending_values();
        }
};

int main() {
    TemperatureSensor temparatureSensor;
    SensorVehicle vehicle(&temparatureSensor);
    vehicle.start_self_test();
    vehicle.start_operation();
    return 0;
}