#include <stdio.h>

int main()
{
    int a,b;
    // printf("Enter the value 0-100 :");
    scanf("%d %d",&a,&b);
    if (a>=0 && b<=100)
    {
        if (a>b)
        {
            printf("Yes");
        }
        else
        {
            printf("No");
        }

    }
    return 0;
}

#include <stdio.h>

int main()
{
    int A,B;
    printf("Enter your value : ");
    scanf("%d %d",&A,&B);
    if (A%B==0 || B%A ==0)
    {
        printf("multiple");
    }
    else
    {
        printf("no multiple");
    }

    return 0;
}

#include <stdio.h>

int main()
{
    char letter;
    printf("enter your letter :");
    scanf("%c",&letter);
    int result;
    if (letter>='A' && letter<='Z') // boro hater
    {
        result=letter+32;
        printf("%c",result);
    }
    else
    {
        result=letter-32;
        printf("%c",result);
    }

    return 0;
}

#include <stdio.h>
#include <math.h>
int main()
{
    int digit;
    printf("How many digit do you want to take :");
    scanf("%d", &digit);
    int digitfnl = digit - 1;
    int mod = pow(10, digitfnl);
    int num;
    printf("Peasle Enter your value following your digit :");
    scanf("%d", &num);
    int n = num / mod;
    if (n % 2 == 0)
    {
        printf("EVEN");
    }
    else
    {
        printf("ODD");
    }
    return 0;
}

#include <stdio.h>

int main()
{
    char n;
    scanf("%c",&n);
    if (n>='0' && n<='9')
    {
        printf("Digit\n");
    }
    else{
        printf("Alpha \n");
        if(n>='a' && n<='z')
        {
            printf("smallletter");
        }
        else
        {
            printf("Capital letter");
        }
    }
    return 0;
}

#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d %d %d ", &a, &b, &c);
    /// smalll------------------->
    if (a <= b && a <= c)
    {
        printf("%d ", a);
    }
    else if (b <= a && b <= c)
    {
        printf("%d ", b);
    }
    else
    {
        printf("%d ", c);
    }
    // Big value ----------------->
    if (a >= b && a >= c)
    {
        printf("%d", a);
    }
    else if (b >= a && b >= c)
    {
        printf("%d", b);
    }
    else
    {
        printf("%d", c);
    }

    return 0;
}

#include <stdio.h>

int main()
{
    int a,b,c,d;
    scanf("%d %d %d %d ",&a,&b,&c,&d);
     //choto ----------------------_______________--------->
    if (a<=b && a<=c && a<=d)
    {
        printf("%d ",a);
    }

    else if (b<=a && b<=c && b<=d)
    {
        printf("%d ",b);
    }
    else if (c<=a && c<=b && c<=d)
    {
        printf("%d ",c);
    }
    else
    {
        printf("%d ",d);
    }

    // boro ________________________________-------------->
    if (a>=b && a>=c && a>=d)
    {
        printf("%d ",a);
    }

    else if (b>=a && b>=c && b>=d)
    {
        printf("%d ",b);
    }
    else if (c>=a && c>=b && c>=d)
    {
        printf("%d ",c);
    }
    else
    {
        printf("%d ",d);
    }

    return 0;
}

#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    if (n>0 && n%2==0)
    {
        printf("the number is even");

    }
    else if (n==0)
    {
        printf("the number is not allow ");
    }
    else
    {
        printf("the number is odd");
    }
    char letter;
    scanf("%c",&letter);
    if ('a'==letter || 'e'==letter || 'i'==letter || 'o'==letter || 'u'==letter )
    {
        printf("You input letter is vowel ");
    }
    else
    {
        printf("your letter is consonatant ");
    }

    return 0;
}

#include <stdio.h>

int main(){
    int x=2, y=3,z=3,k=1;
    int result = 3*x/y-z+k;
    printf("The result is :%d",result);
    return 0;
}

#include <stdio.h>

int main()
{
    int n;
    scanf("%n",&n);
    for (int i=1;i<=n;i++)
    {
        if( n%i==0)
        {
            printf("%d \n",i);
        }

    }
    return 0;

#include <stdio.h>

int main()
{
    char ch='z';
    while (ch>='a')

    {
        printf("%c\n",ch);
        ch--;
    }

    return 0;
}

#include <stdio.h>

int main()
{
       for (int i=122;i>=97;i--)
       {
        printf("%c ",i);
       }

    return 0;
}

#include <stdio.h>

int main()
{
       int ch='z';
        do{
            printf("%c\n",ch);
            ch--;
        }
        while (ch>='a');

    return 0;
}

// you will be given a possitive integer N and N numbers after that you  need to tell sum of divisible by 2 numbers and the sum of divisible by 3  numbers separated by a space.

#include <stdio.h>

int main()
{
    int n ,div2=0,div3=0;
    scanf ("%d",&n);
    for (int i=0;i<n;i++){
        int a;
        scanf("%d",&a);
        if (a%2==0)
        {
            div2+=a;
        }
        else if (a%3==0)
        {
            div3+=a;
        }
    }
    printf("%d %d\n",div2,div3);

    return 0;
}

#include <stdio.h>
int main()
{
    printf("Recently I heard that you’ve achieved \n95% marks in your exam.\nThis is brilliant!\nI wish you'll shine in your life!\tGood\nluck with all the barriers(/\\) in your life");
    return 0;
}
#include <stdio.h>

#include <string.h>

int main()
{
    int a,b;
    scanf("%d %d ",&a,&b);
    printf("%d + %d = %d\n",a,b,(a+b));
    printf("%d - %d = %d\n",a,b,(a-b));
    printf("%d * %d = %d\n",a,b,(a*b));
    printf("%d / %d = %0.2f \n",a,b,(a*1.0/b));
    return 0;
}
#include <stdio.h>

#include <string.h>

int main()
{
    int num; // Suppose take a variable
    scanf("%d",&num);//input your value
    if (num%2==0)
    {
        printf("even\n");

    }
    else
    {
        printf("odd");
    }
    return 0;
}

#include <stdio.h>

#include <string.h>

int main()
{
    int n;
    scanf("%d",&n);
    if (n==0)
    {
        printf("zero\n");
    }
    else if(n>0)
    {
        printf("postive\n");
    }
    else
    {
        printf("negetive");
    }
    return 0;
}
#include <stdio.h>

#include <string.h>

int main()
{
    int tk;
    scanf("%d",&tk);
    if (tk>=10000 )
    {
        printf("Gucci Bag\n");
        if (tk > 20000)
        {
            printf("Gucci Belt");
        }
    }

    else if ( tk>=5000)
    {
        printf("Levies bag");
    }
    else{
        printf("Something");
    }

    return 0;
}

#include <stdio.h>

#include <string.h>

int main()
{
    printf("I Love Practice\n");
    return 0;
}

#include <stdio.h>

#include <string.h>

int main()
{
    int a,b;
    scanf("%d %d ",&a,&b);
    int sum;
    sum=a+b;
    printf("%d",sum);

    return 0;
}

#include <stdio.h>

#include <string.h>

int main()
{
    int n;
    scanf("%d",&n);
    for (int i=0;i<n;i++)
    {
        printf("I Love Practice\n");
    }
    return 0;
}

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int a;
    long long int b;
    float c;
    char d;
    scanf("%d %lld %f %c",&a,&b,&c,&d);
    printf("%d\n",a);
    printf("%lld\n",b);
    printf("%0.2f\n",c);
    printf("%c\n",d);
    return 0;
}

#include <stdio.h>

#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        if (i % 5 == 0)
        {
            printf("%d Yes\n", i);
        }
        else
        {

            printf("%d No\n", i);
        }
    }
    return 0;
}

#include <stdio.h>

#include <string.h>

int main()
{
    printf("Hello, world! I am learning C programming language. ^_^\nProgramming is fun and challenging. /\\/\\/\\\nI want to give my !00%% dedeication to learn!\tI will succeed one day.");
    return 0;
}

#include <stdio.h>

#include <string.h>

int main()
{
    long long int a,b,mult;
    scanf("%lld %lld",&a,&b);

    mult=a*b;
    printf("%lld",a*b);
    return 0;
}

#include <stdio.h>

#include <string.h>

int main()
{
    int n;
    scanf("%d",&n);
    if (n%3==0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}

#include <stdio.h>

#include <string.h>

int main()
{
    int n,cnt=0;
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        if (i % 3 == 0 && i % 7 == 0)
        {
        
        printf("%d\n",i);
        }
    }

    return 0;
}

#include <stdio.h>

#include <string.h>

int main()
{
    int tk;
    scanf("%d",&tk);
    // you and alisha go to market ,now buying time ;
    if (1000<tk)
    {
        printf("I will buy Punjabi\n");
        if (1500<=tk)
        {
            printf("I will buy new shoes\n");
            printf("Alisa will buy new shoes\n");

        }

    }
    else 
    {
        printf("Bad luck!");
    }
    return 0;
}

#include <stdio.h>

#include <string.h>

int main()
{
    char n;
    scanf("%c",&n);
    if (n>='a' && n<'z')    
    {
        printf("%c",n+1);
    }
    if (n=='z')
    {
        printf("a");
    }
    return 0;
}
#include <stdio.h>

#include <string.h>

int main()
{
    int a,b,c,d;
    scanf("%d %d %d %d ",&a,&b,&c,&d);
    if (a+b-c==d) 
    {
        printf("YES");
    } 
    else if(a-b+c==d) 
    {
        printf("YES");
    } 
   else  if (a+b*c==d) 
    {
        printf("YES");
    } 
    else if (a-b*c==d)  
    {
        printf("YES");
    } 
    else if (a*b+c==d) 
    {
        printf("YES");
    } 
    else if (a*b-c==d)
    {
        printf("YES");
    } 

    else
    {
        printf("NO");
    }
    return 0;
}


#include <stdio.h>

#include <string.h>

int main()
{
    int n,divt;
    scanf("%d",&n);
    for (int i=1;i<=n;i++)
    {
       if(n%i==0)
       {
        printf("%d\n",i);
       }
    }   
    return 0;
}

#include <stdio.h>
 
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= 12; i++)
    {
        printf("%d * %d = %d\n", n, i, n * i);
    }
    return 0;
}

#include <stdio.h>

#include <string.h>

int main()
{
    int n;
    scanf("%d",&n);
    for (int i=1;i<=n;i++)
    {
        
        if (i%2==0 )
        {
            printf("%d\n",i);
            
        }
        
    }    
    return 0;
}

#include <stdio.h>

#include <string.h>

int main()
{
    int a,b,value;
    scanf("%d %d ",&a,&b);
    value=a-b;
    if (value>=0)
    {
        printf("%d",value);
    }
    else
    {
        printf("0");
    }

    return 0;
}

#include <stdio.h>

#include <string.h>

int main()
{
    int n,a,b;
    scanf("%d",&n);
    a=n%10;
    b=n/10;
    if((a%b==0) || (b%a==0))
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}

----------------- pattern--->
1 
1 2 
1 2 3 
1 2 3 4 
1 2 3 4 5 
#include <stdio.h>

#include <string.h>

#include <math.h>

#include <stdlib.h>

int main()
{
    int n ,row,col;
    scanf("%d ",&n);
    for (row=1;row<=n;row++)
    {
        for (col=1;col<=row;col++)
        {
            printf("%d ",row); //eikhane col hole collume print korbe  
        }
       
        printf("\n");
    }    
    return 0;
}


---------------bainary pattern

#include <stdio.h>

#include <string.h>

#include <math.h>

#include <stdlib.h>

int main()
{
    int n ,row,col;
    scanf("%d ",&n);
    for (row=1;row<=n;row++)
    { 
        for (col=1;col<=row;col++)
        {
            printf("%d ",row%2); //eikhane col hole collume print korbe  
        }
       
        printf("\n");
    }    
    return 0;
}
------------------- a,b,c--->

#include <stdio.h>

#include <string.h>

#include <math.h>

#include <stdlib.h>

int main()
{
    int n ,row,col;
    scanf("%d ",&n);
    for (row=1;row<=n;row++)
    { 
        for (col=1;col<=row;col++)
        {
            printf("* "); //eikhane col hole collume print korbe  
        }
       
        printf("\n");
    }    
    return 0;
}



------------------>>>reverse ?

#include <stdio.h>

// #include <string.h>

#include <math.h>

#include <stdlib.h>

int main()
{
    int n,row,col;
    scanf("%d",&n);
    for (row=n;row>=1;row--)
    {
        for (col=1;col<=row;col++)
        {
            printf("%d ",row);
        }
        printf("\n");
    } 
    return 0;
}

//nije nije try kora --------->


#include <stdio.h>

#include <string.h>

#include <math.h>

#include <stdlib.h>

int main()
{
    int n,row,col;
    scanf("%d",&n);
    for (row=n;row>=1;row--)
    {
        for (col=1;col<=row;col++)
        {
            printf("%c",col+96);
        
        }
        printf("\n");
    }   

    return 0;
}


// --------------->
/*

*
**
***
****
***
**
*

*/

#include <stdio.h>

#include <string.h>

#include <math.h>

#include <stdlib.h>

int main()
{
    int n,row,col;
    scanf("%d",&n);
    for (row=1;row<=n;row++)
    {
        for (col=1;col<=row;col++)
        {
            printf("%c",col+64);
        }
        printf("\n");
    }    
    for (row=n-1;row>=1;row--)
    {
        for (col=1;col<=row;col++)
        {
            printf("%c",col+64);
        }
        printf("\n");
    }    
    return 0;
// }


// ------------------------->
/*
    *
   **
  ***
 ****
*****

*/
#include <stdio.h>

#include <string.h>

#include <math.h>

#include <stdlib.h>

int main()
{
    int n,row,col;
    scanf("%d",&n);
    for (row=1;row<=n;row++)
    {
        // space er loop 
        for (col=1;col<=n-row;col++)
        {
            printf(" ");
        }
        for (col=1;col<=row;col++)
        {
            printf("*");
        }
        printf("\n");

    }    
    return 0;
}

#include <stdio.h>

#include <string.h>

#include <math.h>

#include <stdlib.h>

int main()
{
    int n,row,col;
    scanf("%d",&n);
    for (row=1;row<=n;row++)
    {
        for (col=1;col<=n-row;col++)// sapce print 
        {
            printf(" ");
        }
        for (col=1;col<=row;col++) // charatter print
        {
            printf("*");
        }
        printf("\n");
    }
    {

    }
    return 0;
}

#include <stdio.h>

#include <string.h>

#include <math.h>

#include <stdlib.h>

int main()
{
    int n,row,col;
    scanf("%d",&n);
    for (row=1;row<=n;row++)
    {
        for (col=1;col<=n-row;col++)
        {
            printf(" "); // sapce print 
        }
        for (col=1;col<=row;col++)
        {
            printf("*");
        }
        printf("\n");
    }   
    return 0;
}


// // ------------------>
/*
*****
 ****
  ***
   **
    *
*/
#include <stdio.h>

#include <string.h>

#include <math.h>

#include <stdlib.h>

int main()
{
     int n,row,col;
     scanf("%d",&n);
     for (row=n;row>=1;row--)
     {
        for (col=1;col<=n-row;col++)
        {
            printf(" ");
        }
        for (col=1;col<=row;col++)
        {
            printf("*");
        }
        printf("\n");
     }   
    
    return 0;
}


// -------------->
#include <stdio.h>

#include <string.h>

#include <math.h>

#include <stdlib.h>

int main()
{
    int n,row,col;
    scanf("%d",&n);
    for (row=1;row<=n;row++)
    {
        for(col=1;col<=n-row;col++)
        {
            printf(" ");
        }
        for (col=1;col<=row;col++)
        {
            printf("*");
        }
        printf("\n");
    }  
    return 0;
}

--------?>/


#include <stdio.h>

#include <string.h>

#include <math.h>

#include <stdlib.h>

int main()
{
    char n;
    scanf("%c",&n);
    if (n>='a' && n<= 'z')
    {
        printf("%c",n+32);
    }
    if (n>='A' && n<='B')
    {
        printf("%c",n-32);
    }

    return 0;
}

#include <stdio.h>

int main()
{
    char letter;
    scanf("%c",&letter);
    if (letter=='z')
    {
        printf("a");
    }
    else
    {
        int result = letter+1;
        printf("%c",result);
    }


    return 0;


}


#include <stdio.h>

int main()
{
    int x = 5, y = 2, sum;

    int *ptr1 = &x, *ptr2 = &y;
    sum = *ptr1 + *ptr2;
    printf("%d\n", sum);

    return 0;
}

#include <stdio.h>

int main()
{
    int a=10;
    int *p;
    p=&a;

    printf("%d\n",a);
    printf("%d\n",*p);
    int age=53;
    int *ptr=&age;
    printf("%d\n",age);
    printf("%d\n",&age);
    printf("%d\n",*ptr);

    return 0;
}

#include <stdio.h>

int main()
{
    int arr[3]={50,150,200};
    int *ptr;
    ptr = &arr;
    for (int i=1;i<=3;i++)
    {
        printf("value of ptr - %d\n",*ptr);
        printf("memory adrs of ptr - %d\n",ptr);
    ptr++;
    }

    return 0;
}

#include <stdio.h>

int main()
{
    char id[10] ;
    printf("Enter the labour ID: ");
    scanf("%s",&id);
    int wrt;
    printf("Enter the labour worktime: ");
    scanf("%d",&wrt);
    int amount ;
    printf("Enter the labour selary amount :");
    scanf("%d",&amount);

    int average_salary;
    average_salary = amount * wrt;
    printf("Finaly you will got : ");
    printf("%d",average_salary);

     

    return 0;
}

/*Write a program that accepts two integers from the user and calculates their sum, difference, product, quotient, and remainder.*/

#include <stdio.h>

int main()
{
    int prd1, prd2;
    scanf("%d %d ", &prd1, &prd2);
    int sum;
    sum = prd1 + prd2;
    printf("sum = %d\n", sum);

    int dif;
    dif = prd1 - prd2;

    if (prd1 < prd2)
    {
        printf("difference = %d\n", dif * -1);
    }
    else
    {
        printf("difference = %d\n", dif);
    }

     int prd;
     prd = prd1 * prd2;
     printf("product = %d\n",prd);

//     int qua;
// //     qua =prd1/prd2;
// //     printf("quotient = %d\n",qua);

// //     int red;
// //     red=prd1%prd2;
// //     printf("remainder = %d",red);
// //     return 0;
// // }

/*Write a program that reads in a string from the user and counts the number of vowels in the string.*/

#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    fgets(str,sizeof(str),stdin);
    int vowel=0;
    
    for (int i=0;str[i] != '\0'; i++)
    {
        if (str[i] >='A' && str[i]<='Z')
        {
            str[i]= str[i]+32;
        }
        if (str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
        {
            vowel++;
        }
    }
    printf("%d",vowel);
    return 0;
}


#include <stdio.h>

int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int a[n][m];
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for (int i=0;i<n;i++)
    {
        for (int j=n-1;j>=0;j--)
        {
            printf("%d ",a[i][j]);
        }
    printf("\n");
    }
    return 0;
}

#include <stdio.h>

int main()
{
    int row,col;
    scanf("%d %d",&row,&col);
    int a[row][col],b[row][col],c[row][col];
    for (int i=0;i<row ;i++)
    {
        for (int j=0;j<col;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for (int i=0;i<row ;i++)
    {
        for (int j=0;j<col;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for (int i=0;i<row ;i++)
    {
        for (int j=0;j<col;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    for (int i=0;i<row ;i++)
    {
        for (int j=0;j<col;j++)
        {
           printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}