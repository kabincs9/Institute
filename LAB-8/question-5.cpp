#include <iostream>
using namespace std;

class Distance {
    double meter;
    double feet;
public:
    Distance(double m) : meter(m), feet(m * 3.280) {}

    void showDistance() {
        cout << meter << " meter(s) = " << feet << " feet" << endl;
    }
};

Distance convertMeterToDistance(double meter) {
    return Distance(meter);
}

int main() {
    double meterValue = 5.0;
    Distance d = convertMeterToDistance(meterValue);
    d.showDistance();
    return 0;
}