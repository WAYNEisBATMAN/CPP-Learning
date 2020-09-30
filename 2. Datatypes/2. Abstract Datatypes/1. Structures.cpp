/*
/ STRUCTURES
A structure is a user-defined data type in C/C++.
A structure creates a data type that can be used to group variables of different types into a single type.
Structure is a collection of items of different data types under a single name. 
It is similar to a class the only difference is that in arrays we can store only one type of items may it be integer, float
or char, string, etc
--------------------------------------------------------------------------------------------------------------------------

/ Structures in C++ can contain two types of members:

.Data Member: 
These members are normal C++ variables. We can create a structure with variables of different data types in C++.

.Member Functions: 
These members are normal C++ functions. Along with variables, we can also include functions inside a structure declaration.
--------------------------------------------------------------------------------------------------------------------------

/ Create a structure
The ‘struct’ keyword is used to create a structure. 

Syntax: 
struct structurename{
    member1;
    member2;
    .
    .
    memberN;
};
--------------------------------------------------------------------------------------------------------------------------

/ Define structure variables
Lets suppose we want to store the roll_no, name, marks of 3 students then first we have to create a structure with roll_no
age, marks as the members. 
Now we just have to define the variables for which we can assign the values of roll_no, age, marks.
and for that we have two ways 

.1) In the main function
struct Students{
    int roll_no;
    int age;
    .
    .
    int marks;
};

int main()
{
 struct Students student1;
 student1.roll_no = 28;
 student1.age = 22;
 student1.marks = 99;

}

.2) In the structure definition
struct Students{
    int roll_no;
    int age;
    int marks;
}student1;

int main()
{
 
 student1.roll_no = 28;
 student1.age = 22;
 student1.marks = 99;

}
--------------------------------------------------------------------------------------------------------------------------
*/

#include <iostream>
#include <string>
using namespace std;

/// variable declaration in the main function
struct Students
{
    string brand;
    int roll_no;
    int age;
    int marks;
};

int main()
{
    struct Students student1, student2, student3, *student4; /// Variable declaration

    /// Varibales initialization
    student1.brand = "hello";
    student1.roll_no = 28;
    student1.age = 22;
    student1.marks = 99;
    student2.roll_no = 29;
    student2.age = 21;
    student2.marks = 100;
    student3.roll_no = 30;
    student3.age = 22;
    student3.marks = 99;
    cout << "brand " << student1.brand << "\t";

    cout << "Roll:" << student1.roll_no << "\t";
    cout << "Age:" << student1.age << "\t";
    cout << "Marks:" << student1.marks << endl;
    cout << "Roll:" << student2.roll_no << "\t";
    cout << "Age:" << student2.age << "\t";
    cout << "Marks:" << student2.marks << endl;
    cout << "Roll:" << student3.roll_no << "\t";
    cout << "Age:" << student3.age << "\t";
    cout << "Marks:" << student3.marks << endl;
    cout << &student4;

    cout << student4;
}

/// variable declaration in the structure definition
// #include <iostream>
// using namespace std;

// struct Students
// {
//     int roll_no;
//     int age;
//     int marks;
// } student1;           /// Variable declaration

// int main()
// {

/// Varibales initialization
//     student1.roll_no = 28;
//     student1.age = 22;
//     student1.marks = 99;
//     cout << "Roll No: " << student1.roll_no << endl;
//     cout << "Age: " << student1.age << endl;
//     cout << "Marks: " << student1.marks << endl;
//     return 0;
// }
