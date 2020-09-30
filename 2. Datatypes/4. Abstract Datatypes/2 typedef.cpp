/*
/ typedef
The typedef is used to give data type a new name.

*/

#include <iostream>
using namespace std;

typedef struct Students
{
    int roll_no;
    int age;
    int marks;
} S;

int main()
{
    S student1; /// Variable declaration
    student1.roll_no = 28;    
    student1.age = 22;
    student1.marks = 99;
    cout << "Roll No: " << student1.roll_no << endl;
    cout << "Age: " << student1.age << endl;
    cout << "Marks: " << student1.marks << endl;
}
