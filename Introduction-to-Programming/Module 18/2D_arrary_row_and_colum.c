#include<stdio.h>
int main()
{
     int row,col;//5,3
     scanf("%d %d",&row,&col);
     int x[row][col];
     for (int i = 0; i <row; i++)
     {
        for (int j = 0; j <col; j++)
        {
            scanf("%d",&x[i][j]);
        }
        
     }
     //-----------------------------------------
     int r;
     scanf("%d",&r);
      for (int i = 0; i <col; i++)
      {
        printf("%d ",x[r][i]);
      }
      //-----------------------------------------
     int c;
     scanf("%d",&c);
      for (int i = 0; i <row; i++)
      {
        printf("%d",x[i][c]);
      }
     
    return 0;
}