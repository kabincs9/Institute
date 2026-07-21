#include <iostream>
#include <cmath>

class Shape {
protected:
    virtual double area() const = 0; 
public:
    virtual ~Shape() {} 
};

class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) : radius(r) {}
    double area() const override {
        return M_PI * radius * radius;
    }
};

class Rectangle : public Shape {
private:
    double length, width;
public:
    Rectangle(double l, double w) : length(l), width(w) {}
    double area() const override {
        return length * width;
    }
};

int main() {
    Circle c(5);
    Rectangle r(4, 6);
    std::cout << "Circle area: " << c.area() << std::endl;
    std::cout << "Rectangle area: " << r.area() << std::endl;
    return 0;
}