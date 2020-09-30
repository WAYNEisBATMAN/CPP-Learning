/*
/ BINARY SEARCH
Binary search, also known as half-interval search, logarithmic search,or binary chop is a search algorithm that
finds the position of the key within a sorted array. 
For this algorithm to work, the array should be sorted.

! This search algorithm works on the principle of divide and conquer.
Binary search compares the target value to the middle element of the array. 
If they are not equal, the half in which the target cannot lie is eliminated and the search continues on the 
remaining half, again taking the middle element to compare to the target value, and repeating this until the 
target value is found. 
If the search ends with the remaining half being empty, the target is not in the array.

. Some abbreviations used in this algorithm:
1) start(s) - starting/lowest index of the current array.
2) mid(m) - middle index of the current array.
3) end(e)- ending/highest index of the current array.
4) key- It is the element we want to check in the array.

. Some formulaes/equations 
m=(array[s + e]) / 2

If a[m]>key then e = mid - 1
*/
#include <iostream>
using namespace std;

int main()
{
    int i, n, key;

    cout << "Enter the number of elements: "
         << "\n";
    cin >> n;

    cout << "Enter the elements: "
         << "\n";

    int myarray[n];
    int s = 0;
    int e = n - 1;

    for (i = 0; i < n; i++)
    {

        cin >> myarray[i];
    }

    cout << "Enter the element you want to search: "
         << "\n";
    cin >> key;

    int m = (s + e) / 2;
    while (s <= e)
    {

        if (myarray[m] == key)
        {
            cout << key << " Found at " << m << "\n";
            break;
        }

        else if (myarray[m] < key)
        {
            s = m + 1;
        }

        else
        {
            e = m - 1;
        }
    }

    if (myarray[m] != key)
    {
        cout << key << " Not found in the array! ";
    }
}
