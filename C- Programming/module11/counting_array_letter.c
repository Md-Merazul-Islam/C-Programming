#include <stdio.h>

#include <string.h>

int main()
{
    char str[1000];
    scanf("%s", str);
    int conunt[26] = {0};
    for (int i = 0; i < strlen(str); i++)
    {
        int chravalue = str[i] - 97;
        conunt[chravalue]++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (conunt[i] != 0)
        {
            printf("%c- %d \n", i + 'a', conunt[i]);
        }
    }
    return 0;
}