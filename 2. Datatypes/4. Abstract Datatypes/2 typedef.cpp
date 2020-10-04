/*
/ typedef
The typedef is used to give data type a new name.

*/

// #include <iostream>
// using namespace std;

// typedef struct Students
// {
//     int roll_no;
//     int age;
//     int marks;
// } S;

// int main()
// {
//     // S student1; /// Variable declaration
//     // student1.roll_no = 28;
//     // student1.age = 22;
//     // student1.marks = 99;
//     // cout << "Roll No: " << student1.roll_no << endl;
//     // cout << "Age: " << student1.age << endl;
//     // cout << "Marks: " << student1.marks << endl;

//     // int pritam = 5;
//     // int name;
//     // &name = pritam;
//     //     #include <iostream>
//     // #include <string>
//     // using namespace std;

//     string food = "Pizza";
//     string &meal = food;

//     cout << food << "\n";
//     cout << meal << "\n";
//     return 0;
// }

#include <iostream>
#include <string>
using namespace std;

int main()
{

    string food = "Pizza";
    string *meal = &food;
    food = "piz";

    cout << food << "\n";
    cout << meal << "\n";
    cout << &meal << "\n";
    cout << &food;
}