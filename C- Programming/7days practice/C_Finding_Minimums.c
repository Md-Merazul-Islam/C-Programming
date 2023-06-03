// #include <stdio.h>

// int main()
// {
//     int n, k;
//     scanf("%d %d", &n, &k);

//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &arr[i]);
//     }

//     int min;

//     for (int i = 0; i < n; i =i+ k)
//     {
//         min = arr[i];

//         for (int j = i; j < i + k && j < n; j++)
//         {
//             if (arr[j] < min)
//             {
//                 min = arr[j];
//             }
//         }

//         printf("%d ", min);
//     }

//     printf("\n");

//     return 0;
// }

#include <stdio.h>

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int min;
    for (int i = 0; i < n; i = i + k)
    {
        min = a[i];
        for (int j = i;  j < i + k && j < n ; j++)
        {
            if (a[j] < min)
            {
                min = a[j];
            }
        }
        printf("%d ", min);
    }
    printf("\n");
    return 0;
}