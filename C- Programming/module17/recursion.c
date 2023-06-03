#include <stdio.h>

void fun()
{
    printf("Fu\n");
    fun();
}
int main()
{
    fun();
       
    return 0;
}