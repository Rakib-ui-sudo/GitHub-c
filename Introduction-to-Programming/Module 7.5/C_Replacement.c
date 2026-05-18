#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    // int sum=0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);

        if (a[i]>0)
        {
            printf("1 ");
            continue;
        }
        

        if (a[i]<0)
        {  
        //    sum = a[i]*-1;
        //    printf("%d ",sum);
            printf("2 ");
            continue;
        }
        
       printf("%d ",a[i]);
    }
    
    return 0;
}