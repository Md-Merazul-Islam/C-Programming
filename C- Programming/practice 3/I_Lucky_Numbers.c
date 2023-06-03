#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int digitr = n % 10;
    int digitl = n / 10;
    if (digitl % digitr == 0 || digitr % digitl == 0)
    {
        printf("YES");
    }
   
    else
    {
        printf("NO");
    }
    return 0;
}