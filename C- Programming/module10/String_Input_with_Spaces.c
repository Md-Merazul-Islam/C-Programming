// #include <stdio.h>
// #include<string.h>

// int main()
// {
//     char a[18];
//     gets(a);
//     printf("%s",a);
//     return 0;
// }

// #include <stdio.h>
// #include<string.h>
// int main()
// {
//     char a[25];
//     fgets(a,25,stdin);

//     int siz=sizeof(a)/sizeof(char);
//     printf("%d\n",siz);
//     printf("%s",a);
//     // char a[25];
//     // gets(a);

//     // int siz=sizeof(a)/sizeof(char);
//     // printf("%d\n",siz);
//     // printf("%s",a);

//     return 0;
// }

#include <stdio.h>

int main()
{
    char a[30];
    fgets(a,30,stdin);
    printf("%s",a);
    return 0;
}