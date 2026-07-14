#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Printable {
public:
    virtual void print() const = 0;
};

class Student : public Printable {
private:
    string name;
    int age;
    double gpa;
public:
    Student(string name, int age, double gpa = 0.0) : name(name), age(age), gpa(gpa) {}

    void display(const string& n, int a, double g = 0.0) const {
        cout << "Name: " << n << ", Age: " << a;
        if (g != 0.0) {
            cout << ", GPA: " << g;
        }
        cout << endl;
    }

    void print() const override {
        display(name, age, gpa);
    }
};

int main() {
    vector<Printable*> students;

    students.push_back(new Student("John Doe", 20, 3.5));
    students.push_back(new Student("Jane Smith", 19));
    students.push_back(new Student("Bob Johnson", 21, 3.7));

    for (auto student : students) {
        student->print();
        delete student;
    }

    return 0;
}