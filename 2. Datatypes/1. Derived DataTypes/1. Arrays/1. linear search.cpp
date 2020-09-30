/*
/ LINEAR SEARCH
Linear search is the simplest searching algorithm that searches for an element in a list in sequential order. 
We start at one end and check every element until the desired element is not found.

/ How Linear Search Works?

.1) Start from the leftmost element of arr[] and one by one compare x with each element of arr[]
.2) If x matches with an element, return the index.
.3) If x doesn’t match with any of elements, return -1.

/ Linear Search Applications
. For searching operations in smaller arrays (<100 items).
. Linear search is usually very simple to implement, and is practical when the list has only a few elements, 
. or when performing a single search in an unordered list.

! key: It is the element we want to check in the array.
*/

#include <iostream>
using namespace std;

int main()
{
    int key, i, n;

    cout << "Enter number of elements " << endl;
    cin >> n;
    cout << "Enter elements of the array: " << endl;
    int myarray[n];
    for (i = 0; i < n; i++) //Initialization
    {
        cin >> myarray[i];
    }
    cout << "Enter the element you want to search: ";
    cin >> key;

    for (i = 0; i < n; i++) // Search Algorithm
    {
        if (myarray[i] == key)
        {
            cout << key << " Found at " << i; // If we just want the 1st occuring of the key than we have to use a break
            break;                            // statement after the cout statement.
        }
    }
}
