#include "sensors.h"

#include <iostream>

void TemperatureSensor::monitorTemperature() const {
    std::cout << "Sensing temperature\n";
}

void TirePositionSensor::monitorTirePosition() const {
    std::cout << "Sensing position of tires\n";
}

void FrontCamera::captureFrontImages() const {
    std::cout << "Capturing front images\n";
}