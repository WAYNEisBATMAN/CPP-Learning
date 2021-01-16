/*
  *   *
 * * * *
*   *   *

. 3 rows 
. 9 columns
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int k = 3;

    for (int i = 1; i <= k; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if ((i + j) % 4 == 0 || (i == 2 && j == 4) || (i == 2 && j == 8))
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }

        cout << "\n";
    }

    return 0;
}