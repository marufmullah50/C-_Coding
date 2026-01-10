#include <iostream>
#include <string>
using namespace std;

//Global variable
int global = 100;

// -------- Function Declarations (Prototypes) --------
void displayMessage();                         // void function
int add(int a, int b);                         // int function
float calculateForce(float mass, float acc);  // float function
string machineStatus(int rpm);                 // string function

int main() {

    cout << "Global variable value: " << global << endl;
    // local variable
    int local = 50;
    cout << "Local variable value: " << local << endl;


    // -------- Function Calls --------
    // void function
    displayMessage();

    // int function
    int sum = add(10, 20);
    cout << "Sum = " << sum << endl;

    // float function
    float mass, acceleration;
    cout << "Enter mass (kg): ";
    cin >> mass;
    cout << "Enter acceleration (m/s^2): ";
    cin >> acceleration;

    float force = calculateForce(mass, acceleration);
    cout << "Force = " << force << " N" << endl;

    // string function
    int rpm;
    cout << "Enter machine RPM: ";
    cin >> rpm;

    string status = machineStatus(rpm);
    cout << "Machine status: " << status << endl;

    return 0;
}

// -------- Function Definitions --------

// 1 void function (no return value)
void displayMessage() {
    cout << "Mechanical Engineering Function Examples\n";
}

// 2 int function (returns integer)
int add(int a, int b) {
    return a + b;
}

// 3 float function (returns decimal value)
float calculateForce(float mass, float acc) {
    return mass * acc;   // F = m × a
}

// 4 string function (returns text)
string machineStatus(int rpm) {
    if (rpm == 0)
        return "Machine stopped";
    else if (rpm > 0 && rpm <= 1500)
        return "Machine running at normal speed";
    else
        return "Machine overspeed";
}
