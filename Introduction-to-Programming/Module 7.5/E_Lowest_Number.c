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
     int small = a[0];
     int pos = 1;

    for (int i = 1; i < n; i++)
    {
       if (a[i]<small)
       {
         small = a[i];
         pos = i + 1 ;
        
       }
        
    }
    printf("%d %d\n",small,pos);
     
    return 0;
}