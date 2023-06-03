// #include <stdio.h>

// int main()
// {
//     int  n;
//     scanf("%d",&n);
//     int row,col;
//     for (int row=0;row <n;row ++)
//     {
//         for (int col =0;col <n;col++)
//         {
//             if ( row== n/2 || col ==n/2 )
//             {
//                 printf("#");
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
    int row,col;
    for (int row=0;row<n;row++)
    {
        for (int col=0;col<n;col++)
        {
            if (n/2==row || n/2==col)
            {
                printf("#");
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