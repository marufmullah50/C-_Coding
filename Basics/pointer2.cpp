#include <iostream>
#include <string>
#include <climits>
#include <memory>
using namespace std;

// Function for function pointer example
int add(int a, int b) {
    return a + b;
}

int main() {

    // ==================================================
    // 1. Simple Pointer
    // ==================================================
    int x = 10;
    int* p1 = &x;                 // pointer stores address of x
    cout << "Simple Pointer: " << *p1 << endl;

    // ==================================================
    // 2. Null Pointer
    // ==================================================
    int* p2 = nullptr;            // safe initialization
    if (p2 == nullptr)
        cout << "Null Pointer: points to nothing" << endl;

    // ==================================================
    // 3. Pointer to Pointer (Double Pointer)
    // ==================================================
    int** p3 = &p1;               // p3 stores address of p1
    cout << "Double Pointer: " << **p3 << endl;

    // ==================================================
    // 4. Void Pointer
    // ==================================================
    void* p4 = &x;                // generic pointer
    cout << "Void Pointer: " << *(int*)p4 << endl; // type cast required

    // ==================================================
    // 5. Constant Pointer (address fixed)
    // ==================================================
    int y = 20;
    int* const p5 = &y;
    *p5 = 25;                     // allowed
    cout << "Constant Pointer: " << *p5 << endl;

    // ==================================================
    // 6. Pointer to Constant (value fixed)
    // ==================================================
    int z = 30;
    const int* p6 = &z;
    cout << "Pointer to Constant: " << *p6 << endl;
    // *p6 = 40; // NOT allowed

    // ==================================================
    // 7. Constant Pointer to Constant
    // ==================================================
    const int* const p7 = &z;
    cout << "Const Pointer to Const: " << *p7 << endl;

    // ==================================================
    // 8. Array Pointer
    // ==================================================
    int arr[3] = {1, 2, 3};
    int* p8 = arr;                // array name acts as pointer
    cout << "Array Pointer: " << *(p8 + 1) << endl;

    // ==================================================
    // 9. Pointer to Array
    // ==================================================
    int (*p9)[3] = &arr;           // pointer to whole array
    cout << "Pointer to Array: " << (*p9)[2] << endl;

    // ==================================================
    // 10. Function Pointer
    // ==================================================
    int (*p10)(int, int) = add;    // points to function
    cout << "Function Pointer: " << p10(3, 4) << endl;

    // ==================================================
    // 11. Dynamic Memory Pointer
    // ==================================================
    int* p11 = new int(50);        // heap allocation
    cout << "Dynamic Pointer: " << *p11 << endl;
    delete p11;                   // free memory

    // ==================================================
    // 12. Smart Pointer (Modern C++)
    // ==================================================
    unique_ptr<int> p12 = make_unique<int>(100);
    cout << "Smart Pointer: " << *p12 << endl;

    return 0;
}
