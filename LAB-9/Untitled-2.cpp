#include <iostream>
#include <string>

class Student {
private:
    std::string name;
    int age;
public:
    void setName(const std::string& n) {
        name = n;
    }
    std::string getName() const {
        return name;
    }
    void setAge(int a) {
        age = a;
    }
    int getAge() const {
        return age;
    }
};

int main() {
    Student s;
    s.setName("John Doe");
    s.setAge(20);
    std::cout << "Name: " << s.getName() << ", Age: " << s.getAge() << std::endl;
    return 0;
}