#include<stdio.h>
int main()
{
     int n;
     scanf("%d",&n);
     int a[n];
     for (int i = 0; i <n; i++)
     {
        scanf("%d",&a[i]);
     }

     int x,flag =1;
     scanf("%d",&x);
     
     for (int i = 0; i<n-1; i++)
     {

       for (int j =i+1; j <n; j++)
       {
         //printf("%d %d\n",a[i],a[j]);
         if (a[i]+a[j]==x)
         {
           printf("YES\n");
           printf("%d %d",a[i],a[j]);
           flag++;
           break;
         }
         
       }

       
     }

     if (flag==1)
       {
        printf("NO");

       }
    
     
    return 0;
}