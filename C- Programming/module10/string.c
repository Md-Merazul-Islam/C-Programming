#include <stdio.h>

int main()
{
    // char a[5];
    // for (int i=0;i<5;i++)
    // {
    //     scanf("%c",&a[i]);
    // }
    // for (int i=0; i<5;i++)
    // {
    //     printf("%c\n",a[i]);
    // } 



    // data size show------>
    // int a[5];
    // printf("%d\n",sizeof(a));//arry value
    // printf("%d\n",sizeof(int));
    // printf("%d\n",sizeof(long int));
    // printf("%d\n",sizeof(long long int));
    // printf("%d\n",sizeof(float));
    // printf("%d\n",sizeof(double));
    // printf("%d\n",sizeof(char));
    // printf("%d\n",sizeof(short));



    int k[5];

    printf("%d\n",sizeof(k));//arry value
    char a[5];
    int siz=sizeof(a)/sizeof(char);
    printf("%d",sizeof(a));
    return 0;
}