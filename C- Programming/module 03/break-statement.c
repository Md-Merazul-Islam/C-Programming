#include <stdio.h>

int main()
{
    int i;
    for (i = 0; i <= 20; i = i + 1)

    {
        printf("%d \n", i);
        if (i == 12)

        {
            break;
        }
        printf("%d \n", i);
    }
    return 0;
}