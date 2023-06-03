#include <stdio.h>

#include <string.h>

#include <math.h>

#include <stdlib.h>

// int main()
// {
//     char ar[20]="Hello";
//     int sz= sizeof(ar)/sizeof(char);
//     printf("%d",sz);  
    
//     return 0;
// } 
void fun (char ar[])
{
    printf("%d",strlen(ar));
}
int main()
{
    char ar[20]="hello";
    fun(ar);
    return 0;
}