// #include <stdio.h>
// int main()
// {
//     int tk;
//     scanf("%d",&tk);
//     if(tk==100)
//     {
//         printf("I will go to class");
//     }
//     else{
//         printf("I will not go to class");
//     }

//     return 0;
// }


// #include <stdio.h>
// int main()
// {
//     int tk;
//     scanf("%d",&tk);
//     if(tk>=100)
//     {
//         printf("I will go to class");
//     }
//     else{
//         printf("I will not go to class");
//     }

//     return 0;
// }

#include<stdio.h>
int main()
{
    int time;
    scanf("%d",&time);
    if(time <= 8)
    {
        printf("he can enter the class ");  // here time is vaild olny (01-24) .

    }
    else
    {
        printf("he can't enter the class");
    }
    return 0;

}
