#include <iostream>

class Counter {
    int value;
public:
    Counter(int val) : value(val) {}

    Counter& operator--() {
        --value;
        return *this;
    }

    void showValue() {
        std::cout << "Value: " << value << std::endl;
    }
};

int main() {
    Counter c1(5);
    --c1;
    c1.showValue();
    return 0;
}