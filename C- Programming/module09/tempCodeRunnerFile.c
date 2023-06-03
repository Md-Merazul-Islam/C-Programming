#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int ary[n+1];
    for (int i=0;i<n;i++){
        scanf("%d",&ary[i]);
    }
    int possition, value;
    scanf("%d %d",&possition,&value);
    for (int i=n;i>=possition+1;i--)
    {
        ary[i]=ary[i+1];
    }
    ary[possition]=value;
    for (int i=0;i<n-1;i++)
    {
        printf("%d ",ary[i]);
    }

    return 0;
}
