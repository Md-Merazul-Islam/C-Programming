// #include <stdio.h>
// void number_max_min(int n, int ar[], int *max,int*min)
// {

//     *max = ar[0];
//     *min = ar[0];
//     for (int i = 1; i < n; i++)
//     {
//         if (*max < ar[i])
//         {
//             *max = ar[i];
//         }
//         if (*min > ar[i])
//         {
//             *min = ar[i];
//         }
//     }
// }

// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int ar[n];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &ar[i]);
//     }
//     int max, min;
//     number_max_min(n, ar, &max, &min);
//     printf("%d %d ",  min,max);

//     return 0;
// }

#include <stdio.h>

void max_min(int n, int a[], int *min, int *max)
{
    *min = a[0];
    *max = a[0];
    for (int i = 1; i < n; i++)
    {
        if (*min > a[i])
        {
            *min = a[i];
        }
        if (*max < a[i])
        {
            *max = a[i];
        }
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int min, max;
    max_min(n, a, &min, &max);
    printf("%d %d", min, max);
    return 0;
}