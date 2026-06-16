#include <iostream>
#include <string>

class Student {
private:
    std::string roll;
    static int count;

public:
    Student(const std::string& name) : roll(name), count++ {}

    void display() const {
        std::cout << "Name: " << roll << ", Count: " << count << std::endl;
    }
};

int Student::count = 0;

int main() {
    Student s1("John");
    Student s2("Jane");
    Student s3("Alice");
    Student s4("Bob");

    s1.display();
    s2.display();
    s3.display();
    s4.display();

    return 0;
}