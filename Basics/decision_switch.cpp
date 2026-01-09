#include <iostream>
using namespace std;

int main() {
    int choice;
    double a, b;

    cout << "Simple Calculator Menu\n";
    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    switch (choice) {
        case 1:
            cout << "Result = " << a + b << endl;
            break;

        case 2:
            cout << "Result = " << a - b << endl;
            break;

        case 3:
            cout << "Result = " << a * b << endl;
            break;

        case 4:
            if (b != 0)
                cout << "Result = " << a / b << endl;
            else
                cout << "Division by zero not allowed!" << endl;
            break;

        default:
            cout << "Invalid choice!" << endl;
    }

    return 0;
}
