#include <stdio.h>

int main()
{
    float x,p,or_p;
    scanf("%f %f ",&x,&p);
    or_p= 100*p/(100-x);
    printf("%0.2f",or_p);
    return 0;
}