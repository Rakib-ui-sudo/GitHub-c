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
    int flag = 0;
    int flag2 = 0;
    if (row == col)
    {
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                if (i==j&&i+j==row-1)
                {
                   if (a[i][j]==1)
                   {
                     flag=1;
                   }
                   
                }
                else if (i!=j&&i+j!=row-1)
                {
                   if (a[i][j]!=0)
                   {
                      flag2=1;
                   }  
                }
                
            }
            
        }
        if (flag==1&&flag2==0)
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