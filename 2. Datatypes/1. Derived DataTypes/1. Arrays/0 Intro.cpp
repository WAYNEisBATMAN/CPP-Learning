/*
/ ARRAYS
An array in C or C++ is a collection of homogenous items stored at contiguous memory locations and elements can be accessed 
randomly using indices of an array.

* By Contiguous : we mean the elements of the array are adjacent to one another in memory with no gaps between them. 
* By Homogeneous: we mean they are all of the same type. 
*                 Array declarations use a set of brackets and can possess multiple dimensions.

NOTE: Arrays in cpp can also contains duplicate elements.
--------------------------------------------------------------------------------------------------------------------------

/ Array declaration by specifying size only:

SYNTAX:   datatype name [no_of_elements];

where 
. 1) type is a valid type (such as int, float ...), 
. 2) name is a valid identifier 
. 3) elements field (which is always enclosed in square brackets []), specifies the size of the array.

Thus, the wayne array, with five elements of type int, can be declared as:

SYNTAX: int wayne [5]; 

NOTE: Declaring an array without initializing the elements, will take garbage values at every empty index unless we update the values.
*/


/*
/ Array declaration by specifying size and initializing elements

SYNTAX:   datatype name [no_of_elements] = { ,  ,  , };

We can initialize C++ array elements either one by one or using a single statement.

The number of values between braces { } can not be larger than the number of elements that we declare for the array between 
square brackets [ ]. 

/ Array declaration by initializing elements without specifying size

If we omit the size of the array, an array just big enough to hold the initialization is created.

/ Re-initialization of An Array Element in C++



int wayn[5] = {1, 2, 3, 4, 5};

int wayn[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // Omit the size of the array

wayn[4] = 23;


You will create exactly the same array as you did in the previous example.

The above statement assigns element number 5th in the array a value of 50.0. Array with 4th index will be 5th, i.e., last element because all arrays have 0 as the index of their first element which is also called base index. Following is the pictorial representaion of the same array we discussed above −

*/


#include <iostream>
using namespace std;

int main()
{
        int wayne[5];
        cout << wayne << endl;
        cout << wayne[0] << endl; //Garbage value test
        cout << wayne[1] << endl; //Garbage value test
        cout << wayne[2] << endl; //Garbage value test
        cout << wayne[3] << endl; //Garbage value test
        cout << wayne[4] << endl; //Garbage value test
                                  /// Assigning values by taking input
        cin >> wayne[0];
        cout << wayne[0] << endl; // Checking if it assigned the value which is taken from user
                                  /// This is the number of elements in the array which is equal to size of the array divide by the size of the
                                  /// single element which is the size of the int.
        int n = sizeof(wayne) / sizeof(int);
        cout << sizeof(wayne) << "\n"; // find the size of the array by using sizeof operator
        cout << n << "\n";             // find the number of elements.
        

        ;
}



// > https://www.tutorialspoint.com/cplusplus/cpp_arrays.htm
// > https://www.geeksforgeeks.org/arrays-in-c-cpp/