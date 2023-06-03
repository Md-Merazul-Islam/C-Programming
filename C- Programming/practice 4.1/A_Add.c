// #include <stdio.h>

// int main()
// {
//     int x = 5, y = 2, sum;

//     int *ptr1 = &x, *ptr2 = &y;
//     sum = *ptr1 + *ptr2;
//     printf("%d\n", sum);
    
    
//     return 0;
// }


// #include <stdio.h>
// int sum(int a,int b)
// {
//     return a+b;
    
// }

// int main()
// {
//     int x,y,res;
//     scanf("%d %d",&x,&y);
//     printf("%d\n",sum(x,y));
    

//     return 0;
// }

#include <stdio.h>
int min(int x,int y)
{
    return (x-y);
}

int main()
{
    int x,y;
    scanf("%d %d ",&x,&y);
    int result=min(x,y);
    printf("%d",result);
    return 0;
}