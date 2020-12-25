/*
/ Fibonacci Series
Current element is equal to sum of two previous elements 

0,1,1,2,3,5,8,13,21...

*/

#include <bits/stdc++.h>
using namespace std;

int fib(int a[100], int n)
{
    a[0] = 0;
    a[1] = 1;
    for (int i = 2; i < n; i++)
    {
        a[i] = a[i - 1] + a[i - 2];
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << ",";
    }
}

int main()
{
    int a[100];
    int n;
    cin >> n;
    fib(a, n);
    return 0;
}
