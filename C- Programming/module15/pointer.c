#include <stdio.h>

#include <string.h>

#include <math.h>

#include <stdlib.h>

// int main()
// {
//     int x=20;
//     int *pointer=&x;
//     printf("x er address : %p\n",&x);
//     printf("pointer er value = x ermemory address : %p\n",pointer);   
//     printf("pointer er memory addres : %p\n",&pointer);
//     printf("pointer er memory address jayga khaiche : %d",sizeof(pointer));
//     return 0;
// }


// int main()
// {
//     int x=2000;
//     int *pointer=&x;
//     x= 93847;
    
//     printf("x er value : %d\n",x);
//     printf("x er value by ptr : %d\n",*pointer);

// ------------- float type data


int main()
{
    double x=20.656;
    double *pointer=&x;
    double *pointer2= pointer;
    *pointer= 95.4221; // এইখানে (*pointer = x) মানে যদি pointer পরিবর্তন করো তাইলে x ও পরিবর্তন হবে ।
    
   printf("x er value: %0.2lf\n",x);
   printf("x er vale ptr : %0.2lf\n",*pointer);
   printf("pointer2 er value :%d",sizeof(pointer2));
//    printf("pointer tmi koto toko jayga dokhol korcho : %d",sizeof(pointer));

    return 0;
}