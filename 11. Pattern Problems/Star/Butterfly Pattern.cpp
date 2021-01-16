/*
/ 
.1) Butterfly With Stars

*                  *
* *              * *
* * *          * * *
* * * *      * * * *
* * * * *  * * * * *
* * * * *  * * * * *
* * * *      * * * *
* * *          * * *
* *              * *
*                  *

There are four parts in this pattern 2 parts at the upperside and 2 at lowerside
first make the logic for left uppesr half
then for the number of spaces between the left upper half and the right upper half
then for the right upper half.

Now it will be easy to copy the similar logic after small changes in the lower half.


.2)
* * * * *  * * * * *
* * * *      * * * *
* * *          * * *
* *              * *
*                  *
*                  *
* *              * *
* * *          * * *
* * * *      * * * *
* * * * *  * * * * *

In a way this is very similar to the above question.
After a little observation i found that lower half of 1st is upperhalf of 2nd and upperhalf of 1st is lowerhalf of 2nd

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) // Upper half
    {
        for (int j = 0; j <= i; j++) // Left Upper half
        {
            cout << "* ";
        }

        int space = 2 * (n - (i + 1)); // Spaces
        for (int j = 0; j < space; j++)
        {
            cout << "  ";
        }

        for (int j = 0; j <= i; j++) // Right Upper half
        {
            cout << "* ";
        }
        cout << "\n";
    }

    for (int i = 0; i < n; i++) // Lower half
    {
        for (int j = i; j < n; j++) // left lower half
        {
            cout << "* ";
        }

        int space = 2 * i; // Spaces
        for (int j = space; j > 0; j--)
        {
            cout << "  ";
        }

        for (int j = i; j < n; j++) // Right Lower half
        {
            cout << "* ";
        }
        cout << "\n";
    }

    return 0;
}
