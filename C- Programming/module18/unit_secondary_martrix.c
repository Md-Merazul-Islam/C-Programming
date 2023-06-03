#include <stdio.h>

int main()
{
    int row,col;
    scanf("%d %d ",&row,&col);
    int a[row][col];
    for (int i=0;i<row;i++)
    {
        for (int j=0;j<col;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }   
    int flag=1; // jodi row=col
    if (row != col)
    {
        flag=0; 
    }
    
  
    for (int i=0;i<row;i++)
    {
        for (int j=0;j<col;j++)
        {
            if (i+j==row-1)
            {
                if (a[i][j]!=a[0][0])
                {
                    flag=0;
                }
                // continue;
            }
            else if (a[i][j]!=0)
            {
                flag =0;
            }
        }
    }   
    if (flag==1)
    {
        printf(" Secondery Unit  Matrix ");
    }
    else
    {
        printf("No Secondery Unit  Matrix ");
    }
        
    return 0;
}