// #include <stdio.h>

// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int a;
//     int even = 0, odd = 0, pos = 0, neg = 0;
//     for (int i = 1; i <= n; i++)
//     {
//         scanf("%d", &a);
//         // kaj
//         if (a % 2 == 0)
//         {
//             even++; // even number
//         }
//         else 
//         {
//             odd++; // Odd number
//         }
//         if (a > 0)
//         {
//             pos++;
//         }
//         else if(a<0)
//         {
//             neg++;
//         }
//     }
//     printf(" Even: %d\nOdd: %d\nPositive: %d\nNegative: %d", even, odd, pos, neg);
//     return 0;
// }





#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int value;
    int even=0,odd=0,pos=0,neg=0;
    for (int i=1;i<=n;i++){
        scanf("%d",&value); // Enter the values of n
        if (value % 2==0)
        {
            even++;
        }
        else if (value %2==1 || value%2==-1)
        {
            odd ++;
        }
        if (value>0)
        {
            pos++;
        }
        else if(value<0)
        {
            neg++;
        }
    }
    printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d",even,odd,pos,neg);

    return 0;
}