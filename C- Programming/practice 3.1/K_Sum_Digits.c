#include <stdio.h>

#include <string.h>

int main()
{
    int n,sum=0,m;
    scanf("%d ",&n);
    while (n>0)
    {
        m=n%10;
        sum=sum+m;
        n=n/10;
    
    }
    printf("sum is = %d",sum);
    
    return 0;
}