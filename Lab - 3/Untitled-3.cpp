#include <iostream>
using namespace std;

class Rectangle {
public:
    int length, breadth;

    Rectangle(int length, int breadth) {
        cout << "Parameterized Constructor" << endl;
        this->length = length;
        this->breadth = breadth;
    }

    int perimeter() {
        return 2 * (length + breadth);
    }
};

int main() {
    Rectangle r(5, 3);
    cout << "Perimeter of Rectangle is " << r.perimeter() << endl;
    return 0;
}