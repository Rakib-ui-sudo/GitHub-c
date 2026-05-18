#include<stdio.h>
int main()
{
    int row,col;
    scanf("%d%d",&row,&col);
    int a[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j <col; j++)
        {
            scanf("%d",&a[i][j]);
        }
        
    }
    if (col==1) //row==col jodi akoi hoi ati  squre matrix;
    {
        printf("This is a colum matrix");
    }else{
        printf("This is not a colum matrix");
    }
    
     
    return 0;
}