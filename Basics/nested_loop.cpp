#include <iostream>
using namespace std;

int main() {
    int row = 3;
    int col = 3;
    int matrix[3][3];

    cout << "Give matrix of " << row << " rows and " << col << " columns:" << endl;

    // Input matrix
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cin >> matrix[i][j];
        }
    }

    // Output matrix
    cout << "The matrix is:" << endl;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
