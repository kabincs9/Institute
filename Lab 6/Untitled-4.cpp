#include <iostream>

class Distance {
    double meter;
    double feet;
public:
    Distance(double m) : meter(m), feet(m * 3.280) {}

    void showDistance() {
        std::cout << meter << " meter(s) = " << feet << " feet" << std::endl;
    }
};

Distance convertMeterToDistance(double meter) {
    return Distance(meter);
}

int main() {
    double meterValue = 5.0;
    Distance distanceObj = convertMeterToDistance(meterValue);
    distanceObj.showDistance();
    return 0;
}