#include <iostream>
#include <string>

class Student {
public:
    std::string name;
    int age;

    Student(std::string name, int age) : name(name), age(age) {}

    void printInfo() {
        std::cout << "Name: " << name << ", Age: " << age << std::endl;
    }
};

Student createStudent(std::string name, int age) {
    Student student(name, age);
    return student;
}

int main() {
    Student p1 = createStudent("John", 25);
    p1.printInfo();
    return 0;
}