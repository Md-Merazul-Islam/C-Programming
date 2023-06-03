#include <stdio.h>

#include <string.h>

#include <math.h>

// #include <stdlib.h>
// void fun(int ar[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {

//         printf("%d ", ar[i]);
//     }
// }

// int main()
// {
//     int ar[5] = {1, 2, 3, 4, 5};
//     fun(ar, 5);
//     return 0;
// }


void fun (double *ar,int n)
{
    for (int i=0;i<n;i++)
    {
        printf("%0.2lf ",ar[i]);
    }
}
int main()
{
    double ar[5]={1.5,2.5,3.5,4.5,5.5};

    fun(ar,5);
    return 0;
}