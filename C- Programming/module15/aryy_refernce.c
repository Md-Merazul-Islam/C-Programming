// #include <stdio.h>

// #include <string.h>

// #include <math.h>

// #include <stdlib.h>
// void fun (char *ar )
// {
//     ar[0]='g';
// }
// int main()
// {
//     char ar[]={"hello"};
//     fun(ar);
//     printf("%s",ar);    
//     return 0;
// }

#include <stdio.h>
    int main()
    {
        int ary[4] = {1, 2, 3, 4};
        int *p;
        p = ary + 3;
        *p = 5;
        printf("%d\n", ary[3]);
    }
