// #include <stdio.h>
// int main()
// {
//     int i;
//     long long int sum=0;
//     int num;
//     printf("Enter the value :");
//     scanf("%d", &num);
//     for (i = 1; i <= num; i = i + 1)

//     {
//         sum = sum + i;
//     }
//     printf("%lld", sum);
//     return 0;
// }

#include <stdio.h>
int main()
{
    int i;
    int n;
    printf("Enter the value :");
    scanf("%d", &n);
    long long int sum = 0;
    for (i = 0; i <= n; i = i + 1)
    {
        sum = sum + i;
    }
        printf("%lld", sum);

    return 0;
}