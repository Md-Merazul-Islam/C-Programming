#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int l, r;
    for (int i = 0; i < n; i++)
    {

        scanf("%d %d", &l, &r);

        int sum = 0;
        for (int i = l; i <= r; i++)
        {

            sum = sum + i;
        }
        printf("%d\n", sum);
    }

    return 0;
}