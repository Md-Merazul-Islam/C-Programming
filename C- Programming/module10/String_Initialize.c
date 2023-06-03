#include <stdio.h>

int main()
{
    // char a[5]={'M','e','r','a','z'};
    // char a[5]="Meraz"; ///--fast supperposwe
    //     for (int i =0; i<5;i++)
    //     {
    //         printf("%c\n",a[i]);
    //     }
    //     return 0;
    
    // char a[6] = "Meraz"; ///(\0 -- null ba shes)
    // int siz=sizeof(a)/sizeof(char);
    // printf("%d\n",siz);
    // printf("%s\n", a);
    char a[]={"Meraz"};
    printf("%s\n",a);
    int siz=sizeof(a)/sizeof(char);
    printf("%d\n",siz);



    return 0;
}