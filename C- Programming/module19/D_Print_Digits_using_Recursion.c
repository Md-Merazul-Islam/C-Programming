// #include <stdio.h>
// void fun (int n)

// {
//     if (n==0) return;
//     int x=n%10;
//     fun(n/10);
//     printf("%d ",x);
// }
// int main()
// {
//     int test;
//     scanf("%d",&test);
//     for (int t=0;t<test;t++)
//     {
//         int n;
//         scanf("%d",&n);
//         fun(n);
//         if (n==0)
//         {
//             printf("0");
//         }
//         printf("\n");

//     }

//     return 0;
// }


#include <stdio.h>
void fun(int n)
{
    if (n==0) return;
    int x=n%10;
    fun(n/10);
    printf("%d ",x);
}
int main()
{
    int ts;
    scanf("%d",&ts);
    for( int i=0;i<ts;i++)
    {
        int n;
        scanf("%d",&n);
        fun(n);
        if (n==0)
        {
            printf("0");
        }
        printf("\n");
    }
    return 0;
}