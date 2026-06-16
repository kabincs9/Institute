#include <iostream>
using namespace std;
int main() {
    int num1, num2;

    cout <<"Enter two integers:";
    cin >> num1 >> num2;

    int sum = num1 + num2;
    int difference = num1 - num2;
    int product = num1 * num2;
    double quotient = static_cast<double>(num1) / num2;
    int modulus = num1 % num2;

    cout << "Sum: " << sum << endl;
    cout << "Difference: " << difference << endl;
    cout << "Product: " << product << endl;
    cout << "Quotient: " << quotient << endl;
    cout << "Modulus: " << modulus << endl;

    return 0;
}
