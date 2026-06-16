#include <iostream>
using namespace std;

int main() {
    enum Student {
      RAM = 1,
      SHYAM =2,
      ACME = 3,
      COMPUTER = 4
    };

    // Print the values of the students
    cout << "Student values:" << endl;
    cout << "RAM: " << static_cast<int>(Student::RAM) << endl;
    cout << "SHYAM: " << static_cast<int>(Student::SHYAM) << endl;
    cout << "ACME: " << static_cast<int>(Student::ACME) << endl;
    cout << "COMPUTER: " << static_cast<int>(Student::COMPUTER) << endl;
   

    // Check if a student value is equal to a specific value
    if (static_cast<int>(Student::RAM) == 1) {
        cout << "RAM value is 1." << endl;
    }

    if (static_cast<int>(Student::SHYAM) == 2) {
        cout << "SHYAM value is 2." << endl;
    }

    if (static_cast<int>(Student::ACME) == 3) {
        cout << "ACME value is 3." << endl;
    }

    if (static_cast<int>(Student::COMPUTER) == 4) {
        cout << "COMPUTER value is 4." << endl;
    }

    return 0;
}