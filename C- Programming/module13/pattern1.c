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
//             printf("*");
//         }
//         printf("\n");
//         k++;
//     }
//     return 0;
// }
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for (int i=n;i>=1;i--)
    {
        for (int j=1;j<=n;j++)
        {
            printf("*");
        }
        printf("\n");
        n--;
        
    }
    
    return 0;
}