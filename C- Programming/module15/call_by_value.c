#include <stdio.h>
void fun(int x)

{
    printf("fun er memory address : %p\n",&x);
    x=200;
    printf("fun x er value :%d\n",x);
}
int main()
{
    int x=10;
    printf("main er memory address : %p\n",&x);
    fun(x);
    printf("x er value :%d\n",x);
    return 0;
}