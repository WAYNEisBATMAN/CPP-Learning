#include <bits/stdc++.h>
using namespace std;

int main()
{

    int N, M;
    cin >> N >> M;
    if (N >= 1 && M <= 30)
    {
        int A[N][M];
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                cin >> A[i][j];
            }
        }

        int target;
        cin >> target;

        bool flag = true;
        int i = 0, j = M - 1;
        while (i < N && j >= 0)
        {
            if (A[i][j] == target)
            {
                return 1;
            }
            else if (A[i][j] < target)
            {
                j--;
            }
            else if (A[i][j] > target)
            {
                i++;
            }

            else
            {
                flag = false;
            }
            cout << flag;
        }

    
    }

    return 0;
}