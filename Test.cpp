/*
/ MOTIVATION

.1) Filler Points
.2) Current System Ineffeciency
- Crop Protection
- Agricultural Ouput
- Ineffeciency
- Water Loss
---------------------------------------------------------------------------------------------------------------

/ PIPING

.1) Equivalent length
.2) Parallel and series pipe flow
.3) Losses in pipe
.4) Pressure calculations

*/

/*
! myarray[]={23,23,4,534,2354,23}

! print all values from while do while and for




*/

// C++ program to swap two numbers using
// pass by reference.

#include <iostream>
using namespace std;

void swap(int &x, int &y)
{
    int &z = &x;
    x = y;
    y = z;
    cout << "void" << x << "\n";
    cout << "void" << y << "\n";
}

int main()
{
    int a = 45, b = 35;
    cout << "Before Swap\n";
    cout << "a = " << a << " b = " << b << "\n";

    swap(a, b);

    cout << "After Swap with pass by reference\n";
    cout << "a = " << a << " b = " << b << "\n";
}


#include <iostream>
using namespace std;

int main()
{
    int myvariable = 9;
    int *mypointer;          // Declaring Pointer (Use of "*" after datatype.)
    mypointer = &myvariable; // Assigning Value (use of "&" before identifier)
    int &hello = myvariable;

    cout << &hello << "\n";
    cout << mypointer << endl; // Accessing the address pointed by the pointer.
    cout << &mypointer << endl;
    cout << *mypointer; // Access the value pointed by a pointer (use of "*" before identifier)
    return 0;
}
