#include <stdio.h>
int num(int n)
{
    for (int i=1;i<n;i++)
    {
        printf("%d ",i);
    }
    printf("%d",n);
}
int main()
{
    int n;
    scanf("%d",&n);
    num(n);

        
    return 0;
}