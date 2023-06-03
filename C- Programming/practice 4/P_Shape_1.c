// #include <stdio.h>

// #include <string.h>

// #include <math.h>

// #include <stdlib.h>

// int main()
// {
//     int n,row,col;
//     scanf("%d",&n);
//     for (row=n;row>=1;row--)
//     {
//         for (col=1;col<=row;col++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     } 
//     return 0;
// }


#include <stdio.h>

#include <string.h>

#include <math.h>

#include <stdlib.h>

int main()
{
    int n,k;
    scanf("%d",&n);
    for (int i=n;i>=1;i--)
    {
        for (int j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }    
    return 0;
}