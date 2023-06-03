// #include <stdio.h>

// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int ar[n];
//     for (int i=0; i<n;i++)
//     {
//         scanf("%d",&ar[i]);
//     }
//     int i=0,j=n-1;
//     while (i<j)
//     {
//         int tmp=ar[i];
//         ar[i]=ar[j];
//         ar[j]=tmp;
//         i++;
//         j--;
//     }
//     for (int i=0;i<n;i++){
//         printf("%d ",ar[i]);
//     }
    
    
//     return 0;
// }

#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int ary[n];
    for (int i=0;i<n;i++)
    {
        scanf("%d",&ary[i]);
    }
    int i=0,j=n-1;
    while (i<j)
    {
        int tmp=ary[i];
        ary[i]=ary[j];
        ary[j]=tmp;
        i++;
        j--;
    }
    for (int i=0;i<n;i++)
    {
        printf("%d ",ary[i]);
    }
    return 0;
}