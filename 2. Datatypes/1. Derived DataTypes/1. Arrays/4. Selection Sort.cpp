/*
/ SELECTION SORT
Selection sort is an algorithm that selects the smallest element from an unsorted list in each iteration and places that 
element at the beginning of the unsorted list.

The selection sort algorithm sorts an array by repeatedly finding the minimum element (considering ascending order) from unsorted part and putting it at the beginning. The algorithm maintains two subarrays in a given array.

1) The subarray which is already sorted.
2) Remaining subarray which is unsorted.

. This will be done with the help of two nested for loops just like in pattern problems.


> https://www.geeksforgeeks.org/selection-sort/
*/

#include <iostream>
using namespace std;

void Selection_Sort(int myarray[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int min_index = i;
        for (int j = i; j <= n - 1; j++)
        {
            if (myarray[j] < myarray[min_index]) // myarray[j] is the current element
            {
                if (myarray[j] < myarray[min_index])
                {
                    min_index = j;
                }
            }
        }
    }
    swap(myarray[i], myarray[min_index]);
}


// This is the input array
int main()
{
    int i, n;

    cout << "Enter number of elements for the array: " << endl;
    cin >> n;
    int myarray[n];
    cout << "Enter elements of the array: " << endl;

    for (i = 0; i < n; i++) //Initialization
    {
        cin >> myarray[i];
    }

    Selection_Sort(myarray, n);
    for (i = 0; i < n; i++)
    {
        cout << myarray[i]
             << ",";
    }
}
