#include <iostream>
using namespace std;

class Distance {
    int feet, inch;
public:
    Distance(int f, int i) : feet(f), inch(i) {}

    Distance operator+(const Distance& other) const {
        int totalFeet = feet + other.feet;
        int totalInch = inch + other.inch;
        if (totalInch >= 12) {
            totalFeet++;
            totalInch -= 12;
        }
        return Distance(totalFeet, totalInch);
    }

    void showDistance() {
        cout << feet << "' " << inch << "\"" << endl;
    }
};

int main() {
    Distance d1(5, 10);
    Distance d2(3, 8);
    Distance result = d1 + d2;

    cout << "d1: "; d1.showDistance();
    cout << "d2: "; d2.showDistance();
    cout << "Sum: "; result.showDistance();
    return 0;
}