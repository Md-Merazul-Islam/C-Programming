#include <stdio.h>
#include<string.h>

int main()
{
    char str[1001];
    fgets(str,sizeof(str),stdin);
    int vowel=0;
    for (int i=0;str[i] != '\0';i++)
    {
        if (str[i]>='A' && str[i]<='Z')
        {
            str[i]+=32;
        }
        if (str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
        {
            vowel++;
        }
    }
    printf("%d",vowel);
    return 0;
}