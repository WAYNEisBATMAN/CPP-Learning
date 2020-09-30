/*
/ UNION
Union is a user-defined datatype. All the members of union share same memory location. 
Size of union is decided by the size of largest member of union. 
! A union is a special data type available in C that allows storing different data types in the same memory location.
! Sharing memory location means that only 1 member can contain a value at anytime.

/ How is the size of union decided by compiler?
Size of a union is taken according the size of largest member in union.

/ Defining a Union: 
To define a union, you must use the union statement in the same way as you did while defining a structure. 
The union statement defines a new data type with more than one member for your program. 
The format of the union statement is as follows:

union union_name
{
    member1 definition;
    member2 definition;
    .
    .
    member2 definition;

};

/ Create union variables
creating union variables is just like creating variables in structures 
.1) in the union definition
.2) in the main function
*/

#include <iostream>
#include <string>

using namespace std;

union SmartPhone
{
    string brand;
    int cost;
    int year;
};
int main()
{
    union SmartPhone p1, p2;

    p1.brand = "mi";
    p1.cost = 19999;
    p1.year = 2019;
    p2.cost = 34999;
    p2.year = 2019;
    cout << "Cost:" << p1.cost << "\t";
    cout << "Year:" << p1.year << endl;
    cout << "Cost:" << p2.cost << "\t";
    cout << "Year:" << p2.year;

    return 0;
}

// > https://www.tutorialspoint.com/purpose-of-unions-in-c-cplusplus