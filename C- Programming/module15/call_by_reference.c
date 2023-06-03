#include <stdio.h>
void fun(int *p)
{
    *p = 20052;
    printf("p er value :%d\n", *p);
}
int main()
{
    int x = 2004;

    fun(&x);
    printf("x er value :%d\n", x);
    return 0;
}