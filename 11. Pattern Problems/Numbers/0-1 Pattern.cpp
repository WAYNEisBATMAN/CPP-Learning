
/*
1
0 1
1 0 1 0
0 1 0 1 0
1 0 1 0 1 0

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            int sum = (i + j) % 2;
            if (sum == 0)
            {
                cout << "1 ";
            }
            else
            {
                cout << "0 ";
            }
        }
        cout << "\n";
    }
    return 0;
}