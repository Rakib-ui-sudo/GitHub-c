#include<stdio.h>
int main()
{
    long long int a,b;
    scanf("%lld %lld",&a,&b);
    long long int k;
    scanf("%lld",&k);
    if (a%k==0 && b%k==0)
    {
        printf("Both");
    }
    else if (a%k==0)
    {
       printf("Memo");
    }
     else if (b%k==0)
    {
       printf("Momo");
    }
     else if (a%k!=0 && b%k!=0)
    {
       printf("No One");
    }
    
     
    return 0;
}