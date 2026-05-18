#include<stdio.h>
int fun(int a)
{
    int ans;
    if (a>0)
    {
        ans=a;
    }
    else{
        ans = -1*a;
    }
    return ans;
}
int main()
{
     int a;
     scanf("%d",&a);
     int val = fun(a);
     printf("%d",val);
    return 0;
}