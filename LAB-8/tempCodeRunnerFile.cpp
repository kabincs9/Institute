#include <iostream>
#include <cmath>
using namespace std;

double areaSquare(double side);
double areaRectangle(double length, double width);
double areaCircle(double radius);

int main() {
    double side = 5.0;
    double length = 4.0;
    double width = 6.0;
    double radius = 3.0;

    cout << "Area of square: " << areaSquare(side) << endl;
    cout << "Area of rectangle: " << areaRectangle(length, width) << endl;
    cout << "Area of circle: " << areaCircle(radius) << endl;

    return 0;
}

double areaSquare(double side) {
    return side * side;
}

double areaRectangle(double length, double width) {
    return length * width;
}
