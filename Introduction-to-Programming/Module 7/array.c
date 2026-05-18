#include<stdio.h>
int main()
{
    int a[5];
    a[2] = 99;
    a[3] = 20;
    a[4] = 30;
    a[1] = 40;
    a[0] = 50;
   
    // scanf("%d",&a[0]);   
     printf("%d\n",a[2]) ;

    return 0;
}