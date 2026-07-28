#include <iostream>
#include <fstream>

using namespace std;

int main() {
    string filename = "data.txt";
    ifstream file(filename);
    if (file.is_open()) {
        string line;
        while (getline(file, line)) {
            cout << line << "\n";
        }
        file.close();
    } else {
        cout << "Unable to open file.\n";
    }

    return 0;
}