#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    if (n == 0)
    {
        printf("the number is zoro");
    }
    else if (n < 0)
    {
        printf("the number is negative");
    }
    else
    {
        printf("the number is postive");
    }
   
    return 0;
}