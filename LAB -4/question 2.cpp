#include <iostream>
class Student {
    public:
    static void showMessage(){
        std::cout << "Hello, I am a student!" << std::endl;
    }
};
int main() {
    Student::showMessage();
    return 0;
}