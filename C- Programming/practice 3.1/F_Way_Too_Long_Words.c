#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);
    char str[101];
    for (int i = 0; i < n; i++)
    {
        scanf("%s", str);

        int len;
        len = strlen(str);
        if (len <= 10)
        {
            printf("%s\n", str);
        }
        else
        {
            printf("%c", str[0]);
            printf("%d", len - 2);
            printf("%c\n", str[len - 1]);
        }
    }
    return 0;
}