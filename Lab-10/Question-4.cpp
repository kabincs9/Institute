#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

int main() {
    ofstream outputFile("output.txt");
    if (outputFile.is_open()) {
        char str[] = "Learning OOP";
        outputFile.write(str, strlen(str));
        outputFile.close();

        ifstream inputFile("output.txt");
        if (inputFile.is_open()) {
            char ch;
            while (inputFile.get(ch)) {
                cout << ch;
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