#include <stdio.h>
long long int fun(long long int n)
{
    if (n==0){
        return 1;
    }
    int ans= fun(n-1);
    return ans*n;
}

int main()
{
    long long int n;
    scanf("%lld",&n);
    int answer= fun(n);
    printf("%d",answer);
    return 0;
}
