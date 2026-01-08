#include <iostream>     // For input-output
#include <cmath>        // For math functions
using namespace std;

// Function declaration
double calculateForce(double mass, double acceleration);

int main() {

    // ----- Basic Data Types -----
    int count = 5;
    float temperature = 36.5f;
    double mass = 10.0;
    char grade = 'A';
    bool isRunning = true;

    // ----- Input & Output -----
    cout << "Enter acceleration (m/s^2): ";
    double acceleration;
    cin >> acceleration;

    // ----- Function Call -----
    double force = calculateForce(mass, acceleration);

    // ----- Operators -----
    double power = force * acceleration;   // arithmetic
    bool check = (force > 50);              // relational

    // ----- Conditional Statement -----
    if (check) {
        cout << "Force is high\n";
    } else {
        cout << "Force is normal\n";
    }

    // ----- Loop (for) -----
    cout << "Counting: ";
    for (int i = 1; i <= count; i++) {
        cout << i << " ";
    }
    cout << endl;

    // ----- Loop (while) -----
    int x = 3;
    while (x > 0) {
        cout << "x = " << x << endl;
        x--;
    }

    // ----- Array -----
    double stresses[3] = {120.5, 150.2, 180.7};

    cout << "Stresses: ";
    for (int i = 0; i < 3; i++) {
        cout << stresses[i] << " ";
    }
    cout << endl;

    // ----- Pointer -----
    double* ptr = &force;
    cout << "Force using pointer: " << *ptr << endl;

    // ----- Math Library -----
    cout << "Square root of force: " << sqrt(force) << endl;

    // ----- Return Statement -----
    return 0;
}

// ----- Function Definition -----
double calculateForce(double mass, double acceleration) {
    return mass * acceleration; // F = m × a
}
