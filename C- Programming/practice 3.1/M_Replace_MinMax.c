#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int ar[n];
    for (int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    int minimum=0;
    for (int i=1;i<n;i++)
    {
        if ( ar[i]<ar[minimum])
        {
            minimum=i;
        }
    }
    int maximum=0;
    for (int i=1;i<n;i++)
    {
        if(ar[i]>ar[maximum])
        {
            maximum=i;
        }
    }
    int tmp=0;
    tmp=ar[minimum];
    ar[minimum]=ar[maximum];
    ar[maximum]=tmp;
    for (int i=0;i<n;i++)
    {
        printf("%d ",ar[i]);
    }

    return 0;
}