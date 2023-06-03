#include <stdio.h>
#include<limits.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a,min=INT_MAX;
    for (int i=0;i<n;i++)
    {
        scanf("%d",&a);
        if (a<min)
        {
            min=a;
        }
    } 
    printf("%d",min);
    return 0;
}