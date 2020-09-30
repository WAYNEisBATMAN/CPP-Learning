/*
/ Enumeration(Enum)
An enumeration is a user-defined data type.
It is used to assign names to the integral constants which makes a program easy to read and maintain. 
There is no specific use of enums in c++ but we can use it in places.
--------------------------------------------------------------------------------------------------------------------------

/ Defining an Enum
An enum is defined in the same way as structure with the keyword struct replaced by the keyword enum and the 
enumerators/elements separated by 'comma' as follows.

enum enum_name
{
    element1,
    element2,
    element3,
    element4,
};
--------------------------------------------------------------------------------------------------------------------------

/ Values of the Members of Enum
By deafult all the members/elements/enumerators have their own value in enums starting from 0.
So element1 = 0, element2 = 1, element3 = 2, and so on.

: If we change any one of them and manually assign the values then it will automatically take the next values 
: Like in this example if we assign 5 to element3.

enum enum_name
{
    element1,
    element2,
    element3,
    element4,
};

: Then all the enumerators have the following values 

element1 = 0, element2 = 1, element3 = 5, element4 = 6,

Or we can also manually assign values to all the enumerators

! Now you have and idea of assigning the values to the enums if not then refer to the links provided below     
--------------------------------------------------------------------------------------------------------------------------

/ Declaration of Enum Variable
We also declare an enum variable in the same way as structures. 

. During the enum definition 
enum enum_name
{
    element1,
    element2,
    element3,
    element4,
} e;

. In the main function 
enum enum_name
{
    element1,
    element2,
    element3,
    element4,
} ;

int main(){

    enum enum_name e;
}
--------------------------------------------------------------------------------------------------------------------------

/ Arithmetic operations
As indirectly the enumerators are constant value so we can do all arithmetic operations on them, namely +, -, *, /. 


*/

#include <iostream>
using namespace std;

enum Alphabets
{
    a,
    b,
    c,
    d,
    e,

};

int main()
{
    enum Alphabets a1 = a;
    enum Alphabets a2(c); /// One other way to assign value to the variable.
    cout << "a1: " << a1 << "\n";
    cout << "a2: " << a2 << "\n";

    cout << "Arithmetic Operations on Enumerators"
         << "\n";
         
    cout << "a1 * 2: " << a1 * 2 << "\n";
    cout << "a1 + 2: " << a1 + 2 << "\n";
    cout << "a1 - 2: " << a1 - 2 << "\n";
    cout << "a1 / 2: " << a2 / 2;

    return 0;
}

// > https://www.codesdope.com/cpp-enum/
// > https://www.youtube.com/watch?v=x55jfOd5PEE&ab_channel=TheCherno