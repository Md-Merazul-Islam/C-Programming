#include <stdio.h>

#include <string.h>

#include <math.h>

#include <stdlib.h>
int x=5000;
void fun (void)
{
    int s=100;
    //  printf("%d\n",x);
    printf("kothay fun tmr address: %p\n",&x);
}

int main()
{
    int s=200;
    printf("kothay main tmr address: %p\n",&x);
    // printf("%d\n",x);
    fun();
      
    return 0;
}