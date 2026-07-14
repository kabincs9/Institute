#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

class Shape {
public:
    virtual double area() const = 0;
};

class Square : public Shape {
private:
    double side;
public:
    Square(double side) : side(side) {}

    double area() const override {
        return side * side;
    }
};

class Rectangle : public Shape {
private:
    double length;
    double width;
public:
    Rectangle(double length, double width) : length(length), width(width) {}

    double area() const override {
        return length * width;
    }
};

class Circle : public Shape {
private:
    double radius;
public:
    Circle(double radius) : radius(radius) {}

    double area() const override {
        return M_PI * radius * radius;
    }
};

int main() {
    vector<Shape*> shapes;

    shapes.push_back(new Square(5.0));
    shapes.push_back(new Rectangle(4.0, 6.0));
    shapes.push_back(new Circle(3.0));

    for (auto shape : shapes) {
        cout << "Area: " << shape->area() << endl;
        delete shape;
    }

    return 0;
}