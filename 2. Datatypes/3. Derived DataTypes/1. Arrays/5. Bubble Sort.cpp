/*
/ BUBBLE SORT
Bubble sort is an algorithm that compares the adjacent elements and swaps their positions if they are not in the intended 
order. 
The order can be ascending or descending.

! Take the larger element to the end.


> https://www.programiz.com/dsa/selection-sort
> https://www.programiz.com/dsa/bubble-sort
*/

#include <iostream>
using namespace std;

void Bubble_Sort(int myarray[], int n)
{
    for (int i = 1; i <= n - 1; i++)
    {
        cout << "=" << endl;
        for (int j = 0; j <= n - i - 1; j++)
        {
            if (myarray[j] > myarray[j + 1])
            {

                swap(myarray[j], myarray[j + 1]);
            }
        }
    }
}
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

    Bubble_Sort(myarray, n);
    for (i = 0; i < n; i++)
    {
        cout << myarray[i] << ",";
    }
}
