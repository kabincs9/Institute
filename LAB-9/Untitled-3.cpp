#include <iostream>
#include <cmath>

class Employee {
protected:
    virtual double calculateSalary() const = 0; 
public:
    virtual ~Employee() {} 
};

class Manager : public Employee {
private:
    double salary;
public:
    Manager(double s) : salary(s) {}
    double calculateSalary() const override {
        return salary * 1.0; 
    }
};

class Programmer : public Employee {
private:
    double salary;
public:
    Programmer(double s) : salary(s) {}
    double calculateSalary() const override {
        return salary * 1.2; 
    }
};

int main() {
    Manager m(50000);
    Programmer p(60000);
    std::cout << "Manager salary: " << m.calculateSalary() << std::endl;
    std::cout << "Programmer salary: " << p.calculateSalary() << std::endl;
    return 0;
}