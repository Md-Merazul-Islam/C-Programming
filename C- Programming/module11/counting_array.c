// #include <stdio.h>

// #include <string.h>

// int main()
// {
//     int n;
//     scanf("%d", &n);
//     char str[n];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d ", &str[i]);
//     }
//     int one=0,two=0,four=0,five=0,six=0,seven=0;
//     for (int i = 0; i < n; i++)
//     {
//         // printf("%d ", str[i]);
//         if (str[i]==0)
//         {
//             one++;
//         }
//         if ( str[i]==2)
//         {
//             two++;
//         }
//         if (str[i]==4)
//         {
//             four++;
//         }
//         if (str[i]==5)
//         {
//             five++;
//         }
//         if (str[i]==6)
//         {
//             six++;
//         }
//         if(str[i]==7)
//         {
//             seven++;
//         }
//     }
//      printf("0 = %d\n",one);
//      printf("2 = %d\n",two);
//      printf("4 = %d\n",four);
//      printf("5 = %d\n",five);
//      printf("6 = %d\n",six);
//      printf("7 = %d\n",seven);

//     return 0;
// }


// #include <stdio.h>

// #include <string.h>

// int main()
// {
//     int n,i;
//     scanf("%d", &n);
//     char str[n];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d ", &str[i]);
//     }
//     int cnt[8]={0};
//     for (int i = 0; i < n; i++)
//     {
//         // printf("%d ", str[i]);
//         if (str[i]==1)
//         {
//            cnt[1]++;
//         }
//         if ( str[i]==2)
//         {
//             cnt[2]++;
//         }
//         if ( str[i]==3)
//         {
//             cnt[3]++;
//         }
//     }
//      printf("1 = %d\n",cnt[1]);
//      printf("2 = %d\n",cnt[2]);
//      printf("3 = %d\n",cnt[3]);
    
    
//     return 0;
// }

// ---------------------------------------->
#include <stdio.h>

#include <string.h>f

int main()
{
    int n,i;
    scanf("%d", &n);
    char str[100];
    for (int i = 0; i < n; i++)
    {
        scanf("%d ", &str[i]);
    }
    int cnt[100]={0};
    for (int i = 0; i < n; i++)
    {
       int value=str[i];
       cnt[value]++;
    }
    for (int i=0;i<100;i++)
    {

     printf("%d  = %d\n",i,cnt[i]);
    }

    
    
    return 0;
}
