#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int age;

public:
    Student(string name, int age) {
        this->name = name;
        this->age = age;
    }

    void displayValues() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main() {
    // Create a Student object
    Student student("Acme ENGINEERING STUDENT HEMANT", 20);

    // Display the values of the Student object
    student.displayValues();

    return 0;
}