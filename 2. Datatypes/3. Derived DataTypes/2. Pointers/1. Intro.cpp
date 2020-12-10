/*
/ POINTER
A pointer is a variable whose value is the address of another variable. 
Pointers are used to store addresses rather than values. 

/ Use of Unary Operators 
: 1) &  ampersand sign use to Assigning the address of a variable to a pointer. 
: 2) *  asterisk sign use to access the value stored in the address which is assigned to the pointer.
--------------------------------------------------------------------------------------------------------------------------

/ Assigning Addresses to Pointers

Before assigning address of other variable to the pointer first we have to defined the pointer

.Defining a pointer 
Defining a pointer is similar to defining any other variable.
The only difference is in the datatype. While defining the datatype of pointers we just have to use the " * " sign.
SYNTAX: datatype *pointer_name;

The exact position of * b/w the datatype and the pointer_name doesn't matter. So all of the below cases are correct.
1) int* a;
2) int * a;
3) int *a;

.Assigning address to Pointer
"&" is use to assign the address of a variable to a pointer.

We can also re-assign address to a pointer variable
int *a = &b;
int *a = &c;

/ SIZE OF A POINTER VARIABLE
It doesn't matter which datatype address we are storing in our pointer the size of pointer variable will always same because
it is the size of memory occupied which is independent of datatype.
size will be either 4 or 8 byte.


--------------------------------------------------------------------------------------------------------------------------


/ Reference: Get the memory address of the varible Pointing by the pointer. Referencing is done by '&' operator.               

/ Dereference: Get the value of the variable to which the pointer is pointing. Dereferencing is done by using '*' operator.

. Dereferencing Operator 
: used with integer as a multiplication operator
: When used in b/w datatype and the variable name i.e, (int* ptr) then it creates a pointer variable.
: When not used in declaration, it act as a dereference operator. 
--------------------------------------------------------------------------------------------------------------------------
*/
//Example :

#include <iostream>
using namespace std;

int main()
{
    int myvariable = 9;
    int *mypointer; // Declaring Pointer (Use of "*" after datatype.)

    mypointer = &myvariable; // Assigning Value (use of "&" before identifier)
    int &hello = myvariable;

    cout << &hello << "\n";
    cout << mypointer << endl; // Accessing the address pointed by the pointer.
    cout << &mypointer << endl;
    cout << *mypointer; // Access the value pointed by a pointer (use of "*" before identifier)
    return 0;
}

// > https://www.tutorialspoint.com/cplusplus/cpp_pointers.htm
// > https://www.programiz.com/cpp-programming/pointers
