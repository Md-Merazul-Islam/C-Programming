// #include <stdio.h>

// int main()
// {
//     int t;
//     scanf("%d",&t);
//     for (int size=1;size<=t;size++)
//     {
//         int n;
//         scanf("%d",&n);
//         int a[n];
//         for (int i=0;i<n;i++)
//         {
//             scanf("%d",&a[i]);
//         }
//         int s;
//         scanf("%d",&s);
//         int flag =0,pos=0;
//         for (int i=0;i<n;i++)
//         {
//             if (a[i]==s)
//             {
//                 flag =1;
//                 pos=i+1;
//                 break;
//             }
//         }
//     if (flag ==1)
//     {
//         printf("Case %d: %d\n", size, pos);
//     }
//     else
//     {
//         printf("Case %d: Not Found\n",size);
//     }
//     } 
//     return 0;
// }




#include <stdio.h>

int main()
{
    int test_case; //how many test cse do you want ?
    scanf("%d",&test_case);
    for (int test = 1;test<=test_case;test++)
    {
        int n;
        scanf("%d",&n);
        int a[n];
        for (int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        int s;
        scanf("%d",&s);

        int flag =0,possition=0;
        for (int i=0;i<n;i++)
        {
            if (a[i]==s)
            {
                flag=1;
                possition =i+1;
                break;
            }


        }
    if (flag ==1)
    {
        printf("Case %d: %d\n",test,possition);
    }
    else

    {
        printf("Case %d: Not Found\n",test);
    }
    }
    return 0;
}
