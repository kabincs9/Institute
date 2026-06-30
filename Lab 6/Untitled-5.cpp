#include <iostream>

class Distance {
    float meter;
public:
    Distance(float m) : meter(m) {}

    int convertToFeet() {
        return static_cast<int>(meter * 3.280);
    }
};

int convertMeterToFeet(float meter) {
    return static_cast<int>(meter * 3.280);
}

int main() {
    float meterValue = 5.0;
    Distance distanceObj(meterValue);
    int feet = distanceObj.convertToFeet();
    std::cout << meterValue << " meter(s) = " << feet << " feet" << std::endl;
    return 0;
}