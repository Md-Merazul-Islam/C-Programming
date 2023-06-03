// #include <stdio.h>

// int main() {
//    char letter;
//    printf("Enter your chracter :");
//    scanf("%c",&letter);
//    if (letter>='a' && letter<='z')
//    {
//    letter=letter-'a'+'A' ;// convert to uppercase
//    }
//    else if (letter>='A' && letter<='Z')
//     {
//     letter=letter-'A'+'a'; // convert to lowercase
//    }
//    printf("converted letter : %c",letter);
//     return 0;
// }

#include <stdio.h>

int main()
{
    char a;
    scanf("%c", &a);
    if (a >= 'a' && a <= 'z')
    {
        int ans = a - 32;
        printf("%c ", ans);
    }
    else
    {
        int ans = a + 32;
        printf("%c", ans);
    }
    return 0;
}
