/*
    
/           1
/         2 1 2
/       3 2 1 2 3
/     4 3 2 1 2 3 4
/   5 4 3 2 1 2 3 4 5


*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i <= n; i++)
    {
        for (int j = i; j < n; j++)
        {
            cout << "  ";
        }
        for (int j = i; j > 0; j--)
        {
            cout << j << " ";
        }
        for (int j = 2; j <= i;j++){
            cout<<j<<" ";
        }
            cout << "\n";
    }
 
    return 0;
}