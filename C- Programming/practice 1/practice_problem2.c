#include <stdio.h>
int main()
{
    int a, b;

    scanf("%d %d ", &a, &b);
    int sum = a + b;
    int subs = a - b;
    int multi = a * 2;
    float devi = a*1.0 / b;

    printf("%d + %d = %d \n", a, b, sum);
    printf("%d - %d = %d \n", a, b, subs);
    printf("%d * %d = %d \n",a,b,multi);
    printf("%d / %d = %0.2f \n",a,b,devi);

    return 0;
}