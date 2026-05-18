#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int len = 0;
    if (n%2!=0)
    {
        len=(n+11)/2;
    }
    
    // printf("%d",len);
    int str = 1;
    int space = len;
    for (int i = 1; i <= len; i++)
    {
        for (int j = 1; j <space; j++)
        {
            printf(" ");
        }
        
        for (int j = 1; j <=str; j++)
        {
            printf("*");
        }
        printf("\n");
        str+=2;
        space--;
    }
    for (int i = 1; i <=5; i++)
    {
        for (int j = 1; j <=5; j++)
        {
            printf(" ");
        }
        
        for (int j = 1; j<=n; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
     
    return 0;
}