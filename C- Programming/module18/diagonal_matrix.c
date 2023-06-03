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
    int flag=1; // jodi  row r column soman hoy 
    if (row != col) // jodi row r column soman ba squrt na hoy 
    {
        flag =0; // eikhane flag = 0 mane (_ na _)
    } 
    for (int i=0;i<row;i++)
    {
        for (int j=0;j<col;j++)
        {
            if (i==j)
            {
                continue;
            }
            if (a[i][j] != 0) // kono ekta jodi (0) na hoy.
            {
                flag=0; 
            }
        }
    }    
    if ( flag==1)
    {
        printf("Primary diagonal");
    }
    else
    {
        printf("No Primary diagonal");

    }
    return 0;
}