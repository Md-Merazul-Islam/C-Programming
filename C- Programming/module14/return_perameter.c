#include <stdio.h>

#include <string.h>
int sum(int x,int y)
{
    int sum=x-y;
    return sum;
}

int main()
{
    printf("%d",sum(100,2000));
    return 0;
}