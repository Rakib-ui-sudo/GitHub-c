#include <stdio.h>
int main()
{
    int row, col;
    scanf("%d%d", &row, &col);
    int a[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    int prim_dia = 0,secon_dia = 0;
    int flag2 = 0;
    if (row == col)
    {
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
               
                 if (i==j)
                {
                    if (a[i][j]!=1)//prime_diagonal value.
                   {
                     prim_dia=1;
                   }
                }
                else if (i+j==row-1)//second_diagonal value.
                {
                    if (a[i][j]!=1)
                   {
                     secon_dia=1;
                   }
                }
                
                else if (i!=j&&i+j!=row-1)//prim_second ar bahirar valu.
                {
                   if (a[i][j]!=0)
                   {
                      flag2=1;
                   }  
                }
                
            }

        }
        if ( prim_dia==0 && secon_dia==0 &&flag2==0)
        {
            printf("YES");
        }
        else{printf("NO\n");}
        
    }
    else
    {
        printf("NO");
    }
     
    return 0;
}