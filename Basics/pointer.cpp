#include<iostream>
using namespace std;

// function to demonstrate pointer basics
void modify(int *p);

//Pointer Basics

int main(){
    int var = 42;          // An integer variable
    int *ptr = &var;      // A pointer variable that holds the address of var

    cout << "Value of var: " << var << endl;               // Output the value of var
    cout << "Address of var: " << &var << endl;            // Output the address of var
    cout << "Value of ptr (address of var): " << ptr << endl; // Output the value of ptr (address of var)
    cout << "Value pointed to by ptr: " << *ptr << endl;   // Output the value pointed to by ptr

    // Modifying the value using the pointer
    *ptr = 100;
    cout << "New value of var after modification through ptr: " << var << endl; // Output the modified value of var
    cout << "Value pointed to by ptr after modification: " << *ptr << endl; // Output the modified value pointed to by ptr

    //Array and Pointer
    int arr[] = {10, 20, 30, 40, 50};
    int *arrPtr = arr; // Pointer to the first element of the array
    cout << "Array elements using pointer arithmetic:" << endl;
    for(int i = 0; i < 5; i++){
        cout << *(arrPtr + i) << " "; // Accessing array elements using pointer arithmetic
    }
    cout << endl;
    cout <<"1st address:"<<arr << endl;
    cout <<"2nd address:"<<(arr+1) << endl; //address of 2nd element 1st plus 4 blocks after that

    cout <<"\n";

    // Passing pointer to function

    int a = 10;
    cout << "Value of a before function call: " << a << endl;

    // Passing address of a to the function
    modify(&a);
    cout << "Value of a after function call: " << a << endl;
    cout <<"\n";


    // Null Pointer    int *nullPtr = nullptr; // Initializing a null pointer
    int *pp = nullptr; // Initializing a null pointer
    cout << "Value of null pointer pp: " << pp << endl;


    return 0;
}
void modify(int *p){
    *p = *p + 200; // Modifying the value at the address pointed to by p
}