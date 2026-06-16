#include <iostream>
using namespace std;
class Student {
public:
    int roll;
    static int count;

    Student(int r) {
        roll = r;
        count++;
    }

    void showStudent() const {
        cout << "Roll: " << roll << " | Total Students: " << count << endl;
    }
};

int Student::count = 0;

int main() {
    Student s1(10);
    s1.showStudent();
    Student s2(11);
    s2.showStudent();
    Student s3(12);
    s3.showStudent();
    return 0;
}