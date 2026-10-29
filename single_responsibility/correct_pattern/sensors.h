#ifndef SENSORS_H
#define SENSORS_H

class TemperatureSensor {
public:
    void monitorTemperature() const;
};

class TirePositionSensor {
public:
    void monitorTirePosition() const;
};

class FrontCamera {
public:
    void captureFrontImages() const;
};

#endif // SENSORS_H