#include<iostream>
using namespace std;

int main() {
    cout << "Hello, world!"<<endl ;

    cout << "Lets test if else works." << endl;
    cout << "Enter 1st integer: ";
    int a;
    cin >> a;
    cout << "Enter 2nd integer: ";
    int b;
    cin >> b;
    cout << "Enter 3rd integer: ";
    int c;
    cin >> c;

    cout << "You entered: " << a << ", " << b << ", " << c << endl;

    if (a >= b && a >= c){
        cout << "The largest integer is:" << a << endl;
    }
    else if (b >= a && b >= c){
        cout << "The largest integer is:" << b << endl;
    }
    else {
        cout << "The largest integer is:" << c << endl;
    }
    return 0;
}