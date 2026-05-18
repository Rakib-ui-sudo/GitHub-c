#include<stdio.h>
void fun(int a,int i)
{
    if (i==a+1)
    {
        return;
    }
     printf("%d\n",i);
    fun(a,i+1);
}
int main()
{
     int n;
     scanf("%d",&n);
     fun(n,1);
    return 0;
}