// #include <stdio.h>
// long long int  fun(int a[], int n, int i)
// {

//     if (i == n)
//         return 0;

//     long long int l = fun(a, n, i + 1);
//     return l + a[i];
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
//     long long int result = fun(a, n, 0);
//     printf("%lld", result);
//     return 0;
// }


#include <stdio.h>
long long int fun(int a[],int n,int i)
{
    if (i==n) return 0;
    long long int l=0;
    l=fun(a,n,i+1);
    return l+a[i];
    
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i=0;i<n;i++)
    {
        
    scanf("%d",&a[i]);
    }

    long long int  res= fun(a,n,0);
    printf("%lld",res);

    return 0;
}