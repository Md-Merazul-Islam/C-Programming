#include <stdio.h>
void fun (int i)
{
    if (i==0) return;
    printf("%d\n",i);
    fun(i-1);
}

int main()
{
    int n;
    printf("Enter the value : ");
    scanf("%d",&n);
    fun(n);  
    return 0;
}