#include <iostream> // includes the input/output stream library
using namespace std; // allows us to use names from the std namespace without prefixing them with std::
// Program entry point
int main() {
    // std::cout writes text to the standard output (console)
    // << is the stream insertion operator; std::endl inserts a newline and flushes the stream
    std::cout << "Hello, World!";

    // return 0 indicates successful program termination to the operating system
    return 0;
}