#include <stdio.h>
int main()
{
    int i;
    int num;
    printf("Enter the value :");
    scanf("%d", &num);
    for (i = 1; i<= num; i = i + 1)
    {
        if (i % 2 == 0)
        {
            printf("%d-is even num \n", i);
        }
        else
        {
            printf("%d-is odd num \n", i);
        }
    }
    return 0;
}


