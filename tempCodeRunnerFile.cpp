#include <iostream>
using namespace std;

// Function to find the sum of a number
int findSum(int num) {
    int sum = 0;
    for (int i = 1; i <= num; i++) {
        sum += i;
    }
    return sum;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    int result = findSum(num);
    cout << "The sum of the numbers from 1 to " << num << " is: " << result << endl;
    return 0;
}