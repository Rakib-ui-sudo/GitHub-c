#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);//5
    int a[n];           //10 20 30 40 50
    for (int i = 0; i <n; i++)
    {
        scanf("%d",&a[i]);
    }
    int idx;
    scanf("%d",&idx);   //2
    for (int i = idx; i <n-1; i++)
    {
        a[i] = a[i+1];
    }
    n--;
    for (int i = 0; i <n; i++)
    {
        printf("%d ",a[i]);  //ans 10 20 40 50
    }
    
    

    return 0;
}