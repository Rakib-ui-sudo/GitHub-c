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

    //========================================== for loop diyea
    for (int i = 0,j = n-1; i < j; i++,j--)
    {
         int tmp = a[i];
        a[i] = a[j];
        a[j] = tmp;
    }
    
    //====================================
    // int i = 0;     //while loop diyea
    // int j = n-1;
    // while (i<j)
    // {
    //     int tmp = a[i];
    //     a[i] = a[j];
    //     a[j] = tmp;

    //     i =i+1;
    //     j =j-1;
    // }

    //-------------------------------------
    for (int i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    
    
     
    return 0;
}