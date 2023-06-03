#include <stdio.h>
int main()
{
    int tk;
    scanf("%d", &tk);
    if (tk <= 100)
    {
        printf("you have to walk");
    }
    
    else if (tk <= 200)
        
    {
        printf("you can go by Private Car");
    }

    else if(tk<= 300)
    {
        printf("you can go by bus ");
    }
    else
    {
        printf("you can go by VIP car or plan ");
    }
    return 0;
}