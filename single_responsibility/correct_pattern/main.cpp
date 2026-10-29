#include "sensors.h"

int main() {
    TemperatureSensor temperatureSensor;
    TirePositionSensor tirePositionSensor;
    FrontCamera frontCamera;

    temperatureSensor.monitorTemperature();
    tirePositionSensor.monitorTirePosition();
    frontCamera.captureFrontImages();

    return 0;
}