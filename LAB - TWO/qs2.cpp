#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    int largest = INT_MIN; 
    int smallest = INT_MAX;

    // Loop to read input into the array
    for (int i = 0; i < n; i++) {
        cout << "Enter element " << i+1 << ": ";
        cin >> arr[i];
        // Update the largest and smallest values
        largest = max(largest, arr[i]);
        smallest = min(smallest, arr[i]);
    }

    cout << "Largest element: " << largest << endl;
    cout << "Smallest element: " << smallest << endl;

    return 0;
}