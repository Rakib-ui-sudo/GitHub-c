#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int b = 2;
    int rem = a % b;
    if (rem == 0)
    {
        printf("This is Even number:%d\n",a);
    }
    else{
        printf("This is Odd number:%d\n",a);
    }
    return 0;
}