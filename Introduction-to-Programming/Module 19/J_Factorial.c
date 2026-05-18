#include<stdio.h>
unsigned long long y =1;
void fac(int n)
{
    if (n==1)
    {
        return;
    }

    y *= n;
   fac(n-1);
}
int main()
{
    int n;
    scanf("%d",&n);
    if (n!=0)
    {
        fac(n);
    }
    printf("%llu",y);

    return 0;
}