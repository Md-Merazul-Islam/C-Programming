#include <stdio.h>

#include <string.h>

#include <math.h>

#include <stdlib.h>

// int main()
// {
//      int x=5;
//      int *ptr;
//      ptr =&x;
//      printf("value of x : %d\n",x);
//      printf("address of x : %u\n",&x);
//     printf("%d\n",ptr);
//     printf("%d\n",*ptr);
//     printf("pointer variable er address : %d\n",&ptr);

//     return 0;
// }

// ------------------->

// int main()
// {
//      int x=5,y=7,z=9;
//      int * pointer;
//      pointer =&x;

//      printf("x er memory address : %d\n",pointer);
//      printf("x er value : %d\n",*pointer);
//      pointer =&y;

//     // y er man baer kora hocche
//     pointer =&y;
//     printf("Y er memory address : %d\n",pointer);
//     printf("Y er value : %d\n",*pointer);

//     // z er man ber korbo :

//     pointer =&z;
//     printf("z er memory address : %d\n",pointer);
//     printf("z er value : %d\n",*pointer);//*(* astic nam )

//     return 0;
// }

//  ----- pointer er maddome sum ber koro?

int main()
{
    int x = 10, y = 20, sum;
    int *pointer1, *pointer2;

    pointer1 = &x; // eikhane pointer1 e  man asin korechi x er memory address
    pointer2 = &y; // yer memory address pointer2 te assign korechi

    sum = *pointer1 + *pointer2; // eikhane pointer1 and pointer 2 er value যোগ  kora hoyeche .
    printf("%d", sum);
    return 0;
}