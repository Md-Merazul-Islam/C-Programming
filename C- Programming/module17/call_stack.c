// #include <stdio.h>
// void world()
// {
//     printf("3-world function start \n");
//     printf("4-world Function stop\n");
// }
// void hello()
// {
//     printf("2-Helllo function start \n");
//     world();
//     printf("5-hello end\n");
// }
// int main()
// {
//     printf("1-start main function\n");
//     hello();
//     printf("6-main function end\n");

//     return 0;
// }
// #include <stdio.h>
// void fun1()
// {
//     printf("print-3\n");
//     printf("print-4\n");
// }
// void fun2()
// {
//     printf("print-2\n");
//     fun1();
//     printf("print-5\n");
// }
// int main()
// {
//     printf("print -1\n");
//     fun2();
//     printf("print- 6\n");

//     return 0;
// }

#include <stdio.h>
void m()
{
    printf("3\n");
    printf("4\n");
}
void n()
{
    printf("2\n");
    m();
    printf("5\n");

}
int main()
{
    printf("1\n");
    n();
    printf("6\n");


    return 0;
}