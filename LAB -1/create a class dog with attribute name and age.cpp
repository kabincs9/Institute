#include <iostream>
using namespace std;

class Dog {
private:
    string name;
    int age;
public:
    Dog(string name, int age){
        this->name = name;
        this->age = age;
    }
    void bark() {
        cout << "BHAU BHAU" << endl;
    }
    void displayValues(){
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};
int main (){
    Dog germanShepherd("Buddy of ACME", 5);
    germanShepherd.bark();
    germanShepherd.displayValues();
    return 0;
}