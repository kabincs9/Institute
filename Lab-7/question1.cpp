#include <iostream>
using namespace std;

class Person {
    protected:
        string name;
        int age;

    public:
        Person(string n, int a) {
            name = n;
            age = a;
        }

        void displayPerson() {
            cout << "Name: " << name << ", Age: " << age << endl;
        }
};

class Student : public Person {
    private:
        int rollNumber;
        int marks;

    public:
        Student(string n, int a, int r, int m) : Person(n, a) {
            rollNumber = r;
            marks = m;
        }

        void displayStudent() {
            Person::displayPerson();
            cout << "Roll Number: " << rollNumber << ", Marks: " << marks << endl;
        }
};

int main() {
    Student s("John Doe", 22, 12345, 80);
    s.displayStudent();
    return 0;
}