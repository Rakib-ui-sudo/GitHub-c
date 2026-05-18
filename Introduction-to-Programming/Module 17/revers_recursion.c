#include<stdio.h>
void fun(int i)
{
    if (i==0)
    {
        return;
    }
    printf("%d\n",i);
    fun(i-1);
    
}
int main()
{
    int n;
    scanf("%d",&n);//n=5
     fun(n);
    return 0;
}