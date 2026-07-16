#include <iostream>
using namespace std;

class Employee {
protected:
    string name;
    double salary;
public:
    Employee(string n, double s) : name(n), salary(s) {}
    virtual void calculateSalary() = 0;
};

class FullTimeEmployee : public Employee {
public:
    FullTimeEmployee(string n, double s) : Employee(n, s) {}
    void calculateSalary() override {
        cout << "Full Time Employee: " << name << endl;
        cout << "Salary (+ 20% bonus): " << salary * 1.2 << endl;
    }
};

class PartTimeEmployee : public Employee {
    int hoursWorked;
public:
    PartTimeEmployee(string n, double ratePerHour, int hours)
        : Employee(n, ratePerHour), hoursWorked(hours) {}
    void calculateSalary() override {
        cout << "Part Time Employee: " << name << endl;
        cout << "Salary (rate x hours): " << salary * hoursWorked << endl;
    }
};

int main() {
    Employee* e;

    FullTimeEmployee f("Alice", 50000);
    PartTimeEmployee p("Bob", 500, 80);

    e = &f; e->calculateSalary();
    cout << endl;
    e = &p; e->calculateSalary();

    return 0;
}