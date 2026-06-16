#include <iostream>
#include <string>

class Student {
public:
    static void showMessage() {
        std::cout << "This is a static method of the Student class." << std::endl;
    }
};

int main() {
    Student::showMessage(); // Calling the static method using the class name
    return 0;
}