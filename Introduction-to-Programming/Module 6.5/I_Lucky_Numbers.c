#include<stdio.h>
int main()
{
    int a;
    scanf("%d ",&a);
    if ((a%10)%(a/10)==0)
    {
       printf("YES");
    }
    else if ((a/10)%(a%10)==0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    
    
    return 0;
}