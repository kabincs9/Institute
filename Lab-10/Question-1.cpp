#include <iostream>
#include <fstream>

using namespace std;

int main() {
    string name, rollNumber, className;
    cout << "Enter your name: ";
    cin >> name;
    cout << "Enter your roll number: ";
    cin >> rollNumber;
    cout << "Enter your class: ";
    cin >> className;

    ofstream file("data.txt");
    if (file.is_open()) {
        file << "Name: " << name << "\n";
        file << "Roll Number: " << rollNumber << "\n";
        file << "Class: " << className << "\n";
        file.close();
        cout << "Data written to file successfully.\n";
    } else {
        cout << "Unable to open file.\n";
    }

    return 0;
}