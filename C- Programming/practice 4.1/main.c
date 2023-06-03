// #include <stdio.h>

// int main()
// {
//     int x = 5, y = 2, sum;

//     int *ptr1 = &x, *ptr2 = &y;
//     sum = *ptr1 + *ptr2;
//     printf("%d\n", sum);
    
//     // sum(x,y);
//     return 0;
// }


#include <stdio.h>
int sum(int a,int b,int c)
{
    printf("%d\n",a+b+c);
}
int main()
{
    int x,y,z;
    scanf("%d %d %d ",&x,&y,&z);
    sum(x,y,z);
    return 0;
}