// #include <stdio.h>

// int main()
// {
//     int n;
//     scanf("%d",&n);
//     int ary[n+1];
//     for (int i=0;i<n;i++){
//         scanf("%d",&ary[i]);
//     }
//     int possition, value;
//     scanf("%d %d",&possition,&value);
//     for (int i=n;i>=possition+1;i--)
//     {
//         ary[i]=ary[i-1];
//     }
//     ary[possition]=value;
//     for (int i=0;i<=n;i++)
//     {
//         printf("%d ",ary[i]);
//     }

//     return 0;
// }


// #include <stdio.h>

// int main()
// {
//     int n;
//     printf("Enter you n:  \n");
//     scanf("%d",&n);
//     int ar[n+1];
//     printf("Enter the value: i \n");
//     for (int i=0;i<n;i++)
//     {
        
//         scanf("%d",&ar[i]);
//     }
//     int pos;
//     printf("enter the poss:  \n",&pos);
//     scanf("%d",&pos);
//     int value;
//     printf("enter the value:  \n",&value);
//     scanf("%d",&value);
//     for (int i=n; i>=pos+1;i--)
//     {
//         ar[i]=ar[i-1];
//     }
//     ar[pos]=value;
//     for (int i=0;i<=n;i++)
//     {
//         printf("%d ",ar[i]);
//     }


//     return 0;
// }


#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int ar[n+1];
    for (int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    int poss,value;
    scanf("%d %d",&poss,&value);
    for (int i=n;i>=poss;i--)
    {
        ar[i]=ar[i-1];
    }
    ar[poss]=value;
    for(int i=0;i<=n;i++)
    {
        printf("%d ",ar[i]);
    }
    return 0;
}