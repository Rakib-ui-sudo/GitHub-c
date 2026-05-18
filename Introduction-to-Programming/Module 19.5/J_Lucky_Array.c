#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int count = 0;
    int mn = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] < mn)
        {
            mn=a[i];
        }
        
    }
    for (int i = 0; i <n; i++)
    {
         if ((a[i]==mn))
        {
            count++;
        }
    }
    
    // printf("%d",count);
     if (count%2!=0)
     {
        printf("Lucky");
     }
     else
     {
        printf("Unlucky");
     }
     
    return 0;
}