// #include <stdio.h>

// #include <string.h>

// int main()
// {
//     int n,k=1;
//     scanf("%d",&n);
//     for (int i=1;i<=n;i++)
//     {
//         for (int j=1;j<=k;j++)
//         {
//             printf("%d ",j);
//         }
//         k++;
//         printf("\n");
//     }    
//     return 0;
// }

// ?????????????????? biporit ----------->

// #include <stdio.h>

// #include <string.h>

// int main()
// {
//     int n;
//     scanf("%d",&n);
   
//     for (int i=n;i>=1;i--)
//     {
//         for (int j=1;j<=n;j++)
//         {
//             printf("%d ",j);
//         }
//         n--;
//         printf("\n");
//     }    
//     return 0;
// }



// #include <stdio.h>

// #include <string.h>

// int main()
// {
//     int n,k=1;
//     scanf("%d",&n);
//     for (int i=1;i<=n;i++)
//     {
//         for (int j=1;j<=k;j++)
//         {
//             printf("%d ",j);
//         }
//         k++;
//         printf("\n");
//     }    
//     return 0;
// }


#include <stdio.h>

#include <string.h>

int main()
{
    int n,k;
    scanf("%d",&n);
    k=n;
    for (int i=n;i>=1;i--)
    {
        for (int j=1;j<=k;j++)
        {
            printf("%d ",j);
        }
        k--;
        printf("\n");
    }
    return 0;
}