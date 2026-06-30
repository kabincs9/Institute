#include <iostream>

class Complex {
    int real, imag;
public:
    Complex(int r, int i) : real(r), imag(i) {}

    Complex operator++(int) {
        Complex temp(*this);
        imag = -imag;
        return temp;
    }

    void showResult() {
        std::cout << "The negation of complex number is: " << real << " " << imag << "j";
    }
};

int main() {
    Complex c1(5, 3);
    Complex c2 = ++c1;
    c1.showResult();
    c2.showResult();
    return 0;
}