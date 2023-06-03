#include <stdio.h>
#include<string.h>
int main()
{
    char a1[100];
    char a2[100];
    scanf("%s",a1);
    scanf("%s",a2);
    int count1=strlen(a1);
    int count2=strlen(a2);
    printf("%d %d\n",count1,count2);
    printf("%s %s",a1,a2);
    return 0;
}