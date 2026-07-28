#include <iostream>
#include <fstream>

using namespace std;

int main() {
    string filename = "data.txt";
    string newText = "This is new text to be appended to the file.\n";
    ifstream file(filename, ios::app);
    if (file.is_open()) {
        file << newText;
        file.close();
        cout << "Text appended to file successfully.\n";
    } else {
        cout << "Unable to open file for appending.\n";
    }

    return 0;
}