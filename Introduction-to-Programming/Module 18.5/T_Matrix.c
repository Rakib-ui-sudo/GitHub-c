#include<stdio.h>
int main()
{
     int row;
     scanf("%d",&row);
     int col = row;
     int a[row][col];
     for (int i = 0; i <row; i++)
     {
        for (int j = 0; j < col; j++)
        {
            scanf("%d",&a[i][j]);
        }
        
     }
     int sum1= 0,sum2 = 0;
      
     if (row==col)
     {
        for (int i = 0; i <row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                if (i==j)
                {
                  //  printf("%d ",a[i][j]);
                    sum1 += a[i][j];
                }
                
            }
            
        }
        
     }
     if (row==col)
     {
        for (int i = 0; i <row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                if (i+j==row-1)
                {
                   // printf("%d ",a[i][j]);
                    sum2 += a[i][j];
                }
                
            }
            
        }
        
     }
    //   int abs1,abs2 ;
    //  if (sum1<0 && sum2<0)
    //  {
    //      int a,b;
    //      a= sum1*-1;
    //      b= sum2*-1;
    //      int ab = a+b;
    //      printf("%d",ab);
    //  }
    //  else if (sum1>=0 && sum2>=0)
    //  {
    //     int sum = sum1+sum2;
    //     printf("%d",sum);
    //  }
    //  else if (sum1<0 && sum2>=0)
    //  {
    //     int abs = sum1*-1;
    //     int sum = abs+sum2;
    //     printf("%d",sum);
    //  }
    //  else if (sum1>=0 && sum2<0)
    //  {
    //     int abs = sum2*-1;
    //     int sum = abs+sum1;
    //     printf("%d",sum);
    //  }
       int ans = sum1 - sum2;

    if(ans < 0)
    {
        ans = ans * -1;
    }

    printf("%d", ans);
     
    return 0;
}