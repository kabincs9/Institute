#include <iostream>
using namespace std;
int main() {
int m, n;
cout << "Enter the number of rows: ";
cin >> m;
cout << "Enter the number of columns: ";
cin >> n;
int matrix1[m][n];
int matrix2[m][n];
int sumMatrix[m][n];
cout << "Enter elements of the first matrix:" << endl;
for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
        cin >> matrix1[i][j];
    }
}
cout << "Enter elements of the second matrix:" << endl;
for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
        cin >> matrix2[i][j];
    }
}
for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
        sumMatrix[i][j] = matrix1[i][j] + matrix2[i][j];
    }
}
cout << "Sum of the matrices:" << endl;
for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
        cout << sumMatrix[i][j] << " ";
    }
    cout << endl;
}
return 0;
}