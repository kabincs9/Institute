#include <iostream>
using namespace std;

class Student {
protected:
    string name;
    int marks;
public:
    Student(string n, int m) : name(n), marks(m) {}
    virtual void calculateGrade() = 0;
};

class EngineeringStudent : public Student {
public:
    EngineeringStudent(string n, int m) : Student(n, m) {}
    void calculateGrade() override {
        cout << "Engineering Student: " << name << endl;
        cout << "Marks: " << marks << endl;
        // Engineering grading: stricter
        if (marks >= 90)      cout << "Grade: A+" << endl;
        else if (marks >= 80) cout << "Grade: A"  << endl;
        else if (marks >= 70) cout << "Grade: B"  << endl;
        else if (marks >= 60) cout << "Grade: C"  << endl;
        else                  cout << "Grade: F (Fail)" << endl;
    }
};

class BITStudent : public Student {
public:
    BITStudent(string n, int m) : Student(n, m) {}
    void calculateGrade() override {
        cout << "BIT Student: " << name << endl;
        cout << "Marks: " << marks << endl;
        // BIT grading: more lenient
        if (marks >= 85)      cout << "Grade: Distinction" << endl;
        else if (marks >= 70) cout << "Grade: First Class" << endl;
        else if (marks >= 55) cout << "Grade: Second Class" << endl;
        else if (marks >= 40) cout << "Grade: Pass" << endl;
        else                  cout << "Grade: Fail" << endl;
    }
};

int main() {
    Student* s;

    EngineeringStudent e("Aarav", 85);
    BITStudent b("Sneha", 72);

    s = &e; s->calculateGrade();
    cout << endl;
    s = &b; s->calculateGrade();

    return 0;
}