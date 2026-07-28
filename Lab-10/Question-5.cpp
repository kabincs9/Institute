#include <iostream>
#include <fstream>

using namespace std;

struct Student {
    string name;
    int marks;
};

int main() {
    Student student;
    ofstream outputFile("Records.txt");
    if (outputFile.is_open()) {
        cout << "Enter student name: ";
        getline(cin, student.name);
        cout << "Enter student marks: ";
        cin >> student.marks;
        outputFile << student.name << " " << student.marks << endl;
        outputFile.close();

        ifstream inputFile("Records.txt");
        if (inputFile.is_open()) {
            string line;
            while (getline(inputFile, line)) {
                cout << line << endl;
            }
            inputFile.close();
        } else {
            cout << "Unable to open file.\n";
        }
    } else {
        cout << "Unable to open file for writing.\n";
    }
    return 0;
}