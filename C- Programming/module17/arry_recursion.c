// #include <stdio.h>
// void fun(int a[], int n, int i)

// {
//     if (i == n)return;
//     printf("%d\n", a[i]);

//     fun(a, n, i + 1);
// }
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int a[n];
//     for (int i = 0; i < n; i++)
//     {

//         scanf("%d", &a[i]);
//     }
//     fun(a, n, 0);

//     return 0;
// }

// #include <stdio.h>
// void arry(int a[],int n,int i)
// {
//     if (i==n) return;
//     printf("%d\n",a[i]);
//     arry(a,n,i+1);

// }
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     int a[n];
//     for (int i=0;i<n;i++)
//     {
//         scanf("%d",&a[i]);
//     }

//     arry(a,n,0);
//     return 0;
// }

#include <stdio.h>
void fun(int n,int ar[],int i)
{
    if (i==n) return;
    printf("%d\n",ar[i]);
    fun(n,ar,i+1);
}

int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }

    fun (n,ar,0);
    return 0;
}