#include <iostream>
#include <string>

class Student {
    private:
    string name;
    int age;
    public:
    void setName(const string& n) {
        name = n;
    
}
string getName() const {
    return name;



}
void setAge(int a) {
    age = a;
    
    }
    int getAge() const {
        return age;

    } };
    int main(){
        Student s;
        s.setName("John");
        s.setAge(20);
        cout << "Name:"<<s.getName() << endl;
        return 0;
        
    }
}