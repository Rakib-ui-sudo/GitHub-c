#include<stdio.h>
int main()
{
    int row=5,col=5;
    int a[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d",&a[i][j]);
        }
        
    }
    int r,c;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (a[i][j]==1)
            {
                r=i+1;
                c=j+1;
            }  
        }
    }
    int ans = abs(r-3)+abs(c-3);
    printf("%d",ans);

    return 0;
}