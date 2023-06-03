
// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     int n, row, col;
    
//     scanf("%d", &n);
//     for (int row = 1; row <= n; row++)
//     {
//         for (int col = 1; col <= n; col++)
//         {
//             if (row == (n / 2) + 1 && col == (n / 2) + 1)
//             {
//                 printf("X");
//             }
//             else if (row == col)
//             {
//                 printf("\\");
//             }

//             else if (row + col == n + 1)
//             {
//                 printf("/");
//             }

//             else
//             {
//                 printf("*");
//             }
//         }
//         printf("\n");
//     }

//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int n;
//     scanf("%d",&n);
//     for (int i=1;i<=n;i++)
//     {
//         for (int j=1;j<=n;j++)
//         {
//             if (i==(n/2)+1 && j == (n/2)+1)
//             {
//                 printf("X");
//             }
//             else if (i==j )
//             {
//                 printf("\\");
//             }
//             else if (i+j==n+1)
//             {
//                 printf("/");
//             }
//             else
//             {
//                 printf("*");
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }


#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    for (int row=1;row<=n;row++)
    {
        for (int col=1;col<=n;col++)
        {
            if (row==(n/2)+1 && col == (n/2)+1)
            {
                printf ("X");
            }
            else if (row ==col)
            {
                printf("\\");
            }
            else if (row+col ==n+1)
            {
                printf ("/");
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
    }    
    return 0;
}