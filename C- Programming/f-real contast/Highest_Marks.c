// #include <stdio.h>

// int main()
// {
//     int n;
//     scanf("%d",&n);
//     int a[n];
//     for (int i=0;i<n;i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     int max=a[0];
//     for (int i=1;i<n;i++)
//     {
//         if (max < a[i])
//         {
//             max =a[i];
//         }
//     }
//     int result ;
//     for (int i=0;i<n;i++)
//     {
//         result = max -a[i];
//     printf("%d ",result);
//     }

//     return 0;
// }

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int highest_number = 0;
    for (int i = 1; i < n; i++)
    {
        if (highest_number < a[i])
        {
            highest_number = a[i];
        }
    }
    int difference_between_number;
    for (int i = 0; i < n; i++)
    {
        difference_between_number = highest_number - a[i];
        printf("%d ", difference_between_number);
    }

    return 0;
}