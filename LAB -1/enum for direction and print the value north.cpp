#include <iostream>
using namespace std;

int main() {
    enum Direction {
        NORTH,
        SOUTH,
        EAST,
        WEST
    };

    // Print the value of the direction "north"
    cout << "Direction: " << static_cast<int>(Direction::NORTH) << endl;

    return 0;
}