#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    string filename = "output.txt";
    string newText = "This is new text to be appended.";

    ofstream file;
    file.open(filename, ios_base::app); // Open the file in append mode

    if (file.is_open()) {
        file << newText;
        file.close();
        cout << "Text appended successfully.\n";
    } else {
        cout << "Unable to open file.\n";
    }

    return 0;
}