/*
/ Butterfly with Numbers

5                   5
5 4               4 5
5 4 3           3 4 5
5 4 3 2       2 3 4 5
5 4 3 2 1   1 2 3 4 5
5 4 3 2 1 0 1 2 3 4 5
5 4 3 2 1   1 2 3 4 5
5 4 3 2       2 3 4 5
5 4 3           3 4 5
5 4               4 5 
5                   5

5         5
54       45
543     345
5432   2345
54321 12345
54321012345
54321 12345
5432   2345
543     345
54       45 
5         5


3           3 
3 2       2 3
3 2 1   1 2 3
3 2 1 0 1 2 3
3 2 1   1 2 3
3 2       2 3
3           3


*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) /// Upper Half
    {
        for (int j = n; j >= n - i; j--) /// Upper Left Half
        {
            cout << j << " ";
        }
        for (int j = 1; j < 2 * (n - i); j++) /// Spaces
        {
            cout << "  ";
        }
        for (int j = n - i; j <= n; j++) /// Upper Right Half
        {
            cout << j << " ";
        }
        cout << "\n";
    }

    for (int i = 0; i < n; i++) /// Midlle Line 1st Half
    {
        for (int j = n; j >= 0; j--)
        {
            cout << j << " ";
        }
        break;
    }
    for (int i = 0; i < n; i++) /// Midlle Line 2nd Half
    {
        for (int j = 1; j <= n; j++)
        {
            cout << j << " ";
        }
        break;
    }
    cout << "\n";

    for (int i = 0; i < n; i++) /// Lower Half
    {
        for (int j = n; j > i; j--) /// Lower Left Half
        {
            cout << j << " ";
        }
        for (int j = 0; j <= 2 * i; j++) /// Spaces
        {
            cout << "  ";
        }
        for (int j = i + 1; j <= n; j++) /// Lower Right Half
        {
            cout << j << " ";
        }
        cout << "\n";
    }

    return 0;
}