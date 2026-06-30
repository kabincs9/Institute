#include <iostream>

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
        std::cout << feet << "' " << inch << "\"";
    }
};

int main() {
    Distance d1(5, 10);
    Distance d2(3, 8);
    Distance result = d1 + d2;
    result.showDistance();
    return 0;
}