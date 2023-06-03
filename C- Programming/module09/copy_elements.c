#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);
    int ary[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ary[i]);
    }
    int m;
    scanf("%d", &m);
    int ary2[m];
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &ary2[i]);
    }
    int ans[n + m];
    for (int i = 0; i < n; i++)
    {
        ans[i] = ary[i];
    }

    int i = n;
    for (int j=0;j<m;j++)
    {
        ans[i]=ary2[j];
        j++;
    }
    for (int i = 0; i < n + m; i++)
    {
        printf("%d ",ans[i]);
    }
    return 0;
}