#include <iostream>
#include <climits>   /// climits will give us the maximum range of int. In which the maximum value is
using namespace std; /// INT_MAX and the minimum value is INT_MIN.
int main()
{
    int i, n;
    int myarray[n];

    cout << "Enter number of elements for the array: " << endl;
    cin >> n;
    cout << "Enter elements of the array: " << endl;

    for (i = 0; i < n; i++) //Initialization
    {
        cin >> myarray[i];
    }

    int largest = INT_MIN;
    int smallest = INT_MAX;

    for (i = 0; i < n; i++)
    {
        if (myarray[i] > largest)
        {
            largest = myarray[i];
        }

        if (myarray[i] < smallest)
        {
            smallest = myarray[i];
        }

        //NOTE: Instead of using these two if conditions we can also use the in-built max & min functions.
        /// largest = max(largest,myarray[i]);
        /// smallest = min(smallest,myarray[i]);
    }
    cout << largest << " is the largest value."
         << "\n";
    cout << smallest << " is the smallest value."
         << "\n";
}
