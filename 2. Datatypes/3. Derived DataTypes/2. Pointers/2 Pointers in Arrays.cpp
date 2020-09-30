/*
/ Pointers and Arrays
Pointers can also store the address of cells of an array.
In arrays the pointer stores the address of the 1st cell.
Further cell's address can be find by incrementing the pointer of the 1st cell element.    


*/
#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {0, 1, 2, 3, 4};
    int *ptr = arr; /// ptr = &arr[0] (So no need to use the "&" in arrays.)

    // or we can first define the ptr as int* ptr then assign the address as ptr = arr.
    // ptr = arr  ;
    // cout << "This is the address of arr[0]: " << ptr++ << endl;
    // cout << "This is the address of arr[1]: " << ptr++ << endl;
    // cout << "This is the address of arr[2]: " << ptr++ << endl;
    // cout << "This is the address of arr[3]: " << ptr++ << endl;
    // cout << "This is the address of arr[4]: " << ptr++ << endl;

    /// One of them is to be commented while other is executed otherwise output will change due to change in ptr value.

    cout << "This is the value of arr[0]: " << *ptr++ << endl;
    cout << "This is the value of arr[1]: " << *ptr++ << endl;
    cout << "This is the value of arr[2]: " << *ptr++ << endl;
    cout << "This is the value of arr[3]: " << *ptr++ << endl;
    cout << "This is the value of arr[4]: " << *ptr++ << endl;

    /// Pointer to Pointer 

    int **ptr1 = &ptr;
    cout << ptr1;
}
