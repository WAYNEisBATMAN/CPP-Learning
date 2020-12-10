#include <stdio.h>
int main()
{
    int i, j;

    for (i = 0; i <= 6; i = i + 2)
    {
        for (j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
// #include <stdio.h>
// int main()
// {
//     int i, j, rows = 7;
//     // printf("Enter the number of rows: ");
//     // scanf("%d", &rows);
//     for (i = 1; i <= rows; i = i + 2)
//     {
//         for (j = 1; j <= i; j++)
//         {
//             printf("* ");
//         }
//         printf("\n");
//     }
//     return 0;
// }
