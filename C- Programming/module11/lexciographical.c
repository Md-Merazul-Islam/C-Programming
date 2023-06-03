// #include <stdio.h>

// #include <string.h>

// int main()
// {
//     char a[100],b[100];
//     scanf("%s %s ",a,b);
//     int i=0;
//     while (1)
//     {
//         if (a[i]=='\0' && b[i]=='\0')
//         {
//             printf("same\n");
//             break;
//         }
//         else if (a[i]=='\0')
//         {
//             printf("A choto ");
//             break;
//         }
//         else if (b[i]=='\0')
//         {
//             printf ("B choto");
//             break;
//         }
//         if( a[i]==b[i])
//         {
//             i++;
//         }
//         else if(a[i]<b[i])
//         {
//             printf("A choto");
//             break;
//         }
//         else{
//             printf("B choto\n");
//             break;
//         }
//     }

//     return 0;
// }

// useing buolding faction -------------------------

// #include <stdio.h>

// #include <string.h>

// int main()
// {
//     char a[100],b[100];
//     scanf("%s %s ",a,b);
//     int result =strcmp(a,b);
//     if (result<0)
//     {
//         printf("A is small");
//     }
//     else if (result>0)
//     {
//         printf("B is small");
//     }
//     else
//     {
//         printf("small");
//     }
//     return 0;
// }

// -------------------------------------------
#include <stdio.h>

#include <string.h>

int main()
{
    char a[100], b[100];
    scanf("%s %s ", a, b);
    int i=0;
    while (1)
    {

        if (a[i] == '\0' && b[i] == '\0')
        {
            printf("Same ");
            break;
        }
        else if (a[i] == '\0')
        {
            printf("a choto");
            break;
        }
        else if (b[i] == '\0')
        {
            printf("b choto");
            break;
        }
        if (a[i] == b[i])
        {
            i++;
        }
        else if (a[i]>b[i]){
            printf("a choto");
            break;
        }
        else{
            printf("b choto");
            break;
        }
    }
    return 0;
}