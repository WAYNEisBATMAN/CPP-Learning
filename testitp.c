// #include <stdio.h>
// int main()
// {
//     int i, j;

//     for (i = 0; i <= 6; i = i + 2)
//     {
//         for (j = 0; j <= i; j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }

//     return 0;
// }
// // #include <stdio.h>
// // int main()
// // {
// //     int i, j, rows = 7;
// //     // printf("Enter the number of rows: ");
// //     // scanf("%d", &rows);
// //     for (i = 1; i <= rows; i = i + 2)
// //     {
// //         for (j = 1; j <= i; j++)
// //         {
// //             printf("* ");
// //         }
// //         printf("\n");
// //     }
// //     return 0;
// // }

// #include <iostream>
// using namespace std;

// void SpiralPrint(int wayne[1000][1000], int r, int c)
// {
//     int StartRow = 0;
//     int StartCol = 0;
//     int EndRow = r - 1;
//     int EndCol = c - 1;

//     while (StartRow <= EndRow and StartCol <= EndCol)
//     {
//         // Start Row
//         for (int i = StartCol; i <= EndCol; i++)
//         {
//             cout << wayne[StartRow][i] << " ";
//         }
//         StartRow++;

//         // End Column
//         for (int i = StartRow; i <= EndRow; i++)
//         {
//             cout << wayne[i][EndCol] << " ";
//         }
//         EndCol--;

//         // End Row
//         if (StartRow < EndRow)
//         {
//             for (int i = EndCol; i >= StartCol; i--)
//             {
//                 cout << wayne[EndRow][i] << " ";
//             }
//         }
//         EndRow--;

//         // Start Column
//         if (StartCol < EndCol)
//         {
//             for (int i = EndRow; i >= StartRow; i--)
//             {
//                 cout << wayne[i][StartCol] << " ";
//             }
//         }
//         StartCol++;

//         // for (int i = StartRow; i <= EndRow; i++)
//         // {
//         //     cout << wayne[i][EndCol] << " ";
//         // }
//     }
// }

// int main()
// {
//     int r, c;
//     cin >> r >> c;
//     int wayne[1000][1000] = {};
//     int val = 1;
//     for (int m = 0; m < r; m++)
//     {
//         for (int n = 0; n < c; n++)
//         {
//             wayne[m][n] = val;
//             val++;
//             cout << wayne[m][n] << " ";
//         }
//         cout << "\n";
//     }

//     SpiralPrint(wayne, r, c);
// }
 
#include <stdio.h>
 
int main()
{
    int i, j;
    int n = 5;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%c", (j + 64));
        }
        printf("\n");
    }
}