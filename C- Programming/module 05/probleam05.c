#include <stdio.h>
int main() {
    char x;
    printf("Enter a character: ");
    scanf("%c", &x);
    if ( x >='0' && x<='9')
    {
        printf("IS DIGIT \n");
    }
    else
    {
        printf("ALPHA \n");
        if (x>='a' && x<='z')
        {
            printf("IS SMALL \n");
        }
        else
        {
            printf("IS CAPITAL");
        }
    }

    return 0;
}