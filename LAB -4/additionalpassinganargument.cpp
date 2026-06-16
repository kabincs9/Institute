#include <iostream>
using namespace std;
#include <string>

class Student {
public:
    string name;
    int roll;

    void getData(string n, int r) {
        name = n;
        roll = r;
    }

    void displayStudent() const {
        cout << "Name of a student: " << name << endl;
        cout << "Roll number of a student: " << roll << endl;
    }

    void modifyStudent(string n, int roll) {
        name = n;
        roll = roll;
    }
};

int main() {
    Student s1;
    s1.getData("Aarav", 10);
    s1.displayStudent();
    s1.modifyStudent("Aalok", 20);
    s1.displayStudent();
    return 0;
}