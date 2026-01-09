#include<iostream>
using namespace std;
#include<math.h>

int main()
{
//for loop for(initialization; condition; increment/decrement) 

    cout<<"For Loop:"<<endl;
    int g = 1;
    for(int i=8;i<=15;i++)
    {
        cout<<i << "th Number is:" << i <<endl;
        g++;
    }

    cout<<"\n" <<endl;

// While loop
    cout<<"While Loop:"<<endl;
    int j = 5; //initialization
    int m = 1;
    while (j<=10) // condition
    {
        cout<<m<<"th number:" << j <<endl;
        j++; //increment or decrement
        m++;
    }

    cout<<"\n" <<endl;

    // Do-While loop
    cout<<"Do-While Loop:"<<endl;
    int k = 1; //initialization
    int n = 1;
    do // do block
    {
        cout<<n<<"th number:" << k <<endl;
        k++; //increment or decrement
        n++;
    } while (k<=5); // condition

    return 0;
}