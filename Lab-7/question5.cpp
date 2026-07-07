#include <iostream>

class Employee {
public:
    virtual double calculateSalary() = 0; // Pure virtual function
};

class Manager : public Employee {
private:
    double salary;
public:
    Manager(double s) : salary(s) {}
    double calculateSalary() override {
        return salary * 1.1; // 10% bonus for managers
    }
};

class Developer : public Employee {
private:
    double salary;
public:
    Developer(double s) : salary(s) {}
    double calculateSalary() override {
        return salary * 1.2; // 20% bonus for developers
    }
};

int main() {
    Manager m(50000);
    Developer d(60000);

    std::cout << "Manager salary: " << m.calculateSalary() << "\n";
    std::cout << "Developer salary: " << d.calculateSalary() << "\n";

    return 0;
}