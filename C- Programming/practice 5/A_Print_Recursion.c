#include <stdio.h>
void fun (int i)
{
    if (i==0) return;
    printf("I love Recursion\n",i);
    fun(i-1);
}
int main()
{
    int n;
    scanf("%d",&n);
    fun(n);    
    return 0;
}