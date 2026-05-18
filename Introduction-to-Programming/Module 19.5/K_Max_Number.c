#include<stdio.h>

int max(int a[],int n,int i,int mx)
{
    if (i==n)
    {
       return mx;
    }
    
    if (a[i]>mx)
    {
       mx=a[i];
    }
    
   return max(a,n,i+1,mx);
}

int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i <n; i++)
    {
        scanf("%d",&a[i]);
    }
    int y = a[0];
    int ans = max(a,n,0,y);
    printf("%d",ans);
    return 0;
}