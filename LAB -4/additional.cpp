#include <iostream>
using namespace std;
#include <string>

class Student {
public:
    string name;
    int roll;

    Student(const string& n, int r) : name(n), roll(r) {}

    void displayStudent() const {
        cout << "Name of a student: " << name << endl;
        cout << "Roll number of a student: " << roll << endl;
    }
};

Student updateStudent(Student s) {
    s.roll = s.roll + 5;
    return s;
}

int main() {
    Student s1("Aarav", 10);
    s1.displayStudent();
    Student value = updateStudent(s1);
    cout << "Return Value is -- " << endl;
    value.displayStudent();
    s1.displayStudent();
    return 0;
}