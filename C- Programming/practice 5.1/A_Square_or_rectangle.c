// #include <stdio.h>

// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int w, h;

//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d %d", &w, &h);

//         if (w == h)
//         {
//             printf("Square\n");
//         }
//         else
//         {
//             printf("Rectangle\n");
//         }
//     }
//     return 0;
// }

#include <stdio.h>
void fun(int n,int i)
{
    
    int w,h;
    scanf("%d %d",&w,&h);

    if (i==n) return;
    if (w==h)
    {
        printf("Square\n");
    }
    else
    {
        printf("Rectangle\n");
    }
    fun(n,i+1);
}
int main()
{
    int n;
    scanf("%d",&n);
    int i=0;
    fun(n,i);
        
    return 0;
}