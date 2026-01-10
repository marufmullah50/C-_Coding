#include<iostream>
using namespace std;
int main() {
    //1D Array
    const int size = 5;
    int arr[size] = {10, 20, 30, 40, 50};

    cout << "Array elements are: ";
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    int sum =0;
    
    float avg =0.0;

    for (int j = 0; j < size; j++){
        sum = sum+arr[j];
    }
    avg = sum/size;
    cout << "Sum of array elements: " << sum << endl;
    cout << "Average of array elements: " << avg << endl;

    //2D Array

    int row = 3;
    int col = 3;
    
    int matrix[row][col] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    cout << "2D Array elements are: " << endl;
    for (int i =0; i<row; i++){
        for (int j=0; j<col; j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

        // ----- Find Min and Max -----

       // Any real matrix value will be smaller than INT_MAX

       // Any real matrix value will be larger than INT_MIN
       
    int minVal = INT_MAX;
    int maxVal = INT_MIN;

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (matrix[i][j] < minVal)
                minVal = matrix[i][j];

            if (matrix[i][j] > maxVal)
                maxVal = matrix[i][j];
        }
    }

    cout << "Minimum value in matrix: " << minVal << endl;
    cout << "Maximum value in matrix: " << maxVal << endl;

    return 0;
}