/*
/ in-built sort function by using c++ header file named "algorithm"

#include <algorithm>

*/

#include <iostream>
#include <algorithm>
using namespace std;

// bool compare(int a, int b)  // Us\e this and add compare function as parameter in the below sort function, if you want to
// {                           // sort in decreasing order.
//     return a > b;           // Just change the sign between a and b and it can sort in both asec and desec and order.
// }

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

    sort(myarray, myarray + n);

    for (i = 0; i < n; i++) // Printing all values
    {
        cout << myarray[i]
             << ",";
    }
}
