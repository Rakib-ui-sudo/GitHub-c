#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    
    }
     int b;
    scanf("%d",&b);

     for (int i = 0; i < n; i++)
    {
        if (a[i]==b)
        {
            printf("%d\n",i);
            return 0;
        }
        // else{
        //     printf("-1\n");
        // }
        
        
    }
     printf("-1\n");
  
     
    return 0;
}