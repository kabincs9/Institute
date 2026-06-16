#include <iostream>
using namespace std;

class Box {
 public:
    int length, breadth;
    public:Box (int l, int b) {
        cout << "Parameterized Constructor" << endl;
        length = l;
        breadth = b;
    }
    Box() {
        cout << "Default Constructor" << endl;
    }
    void areabox() {
        int area = length * breadth;
        cout << "Area of Box is " << area << endl;
    }
};

int main() {
    Box b;
    b.length = 5;
    b.breadth = 3;  
    b.areabox();
    return 0;
}