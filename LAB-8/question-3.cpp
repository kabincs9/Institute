#include <iostream>
#include <vector>

using namespace std;


class Shape {
public:
    virtual double area() = 0;  
};

class Rectangle : public Shape {
private:
    double length;
    double width;
public:
    Rectangle(double l, double w) : length(l), width(w) {}

    double area() override {  // Implement the pure virtual function
        return length * width;
    }
};

class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) : radius(r) {}

    double area() override {  // Implement the pure virtual function
        return 3.14159 * radius * radius;
    }
};

int main() {
   
    vector<Shape*> shapes;

  
    shapes.push_back(new Rectangle(2.0, 3.0));
    shapes.push_back(new Circle(1.0));

    
    double totalArea = 0.0;
    for (auto shape : shapes) {
        totalArea += shape->area();
    }

    cout << "Total area: " << totalArea << endl;


    for (auto shape : shapes) {
        delete shape;
    }

    return 0;
}