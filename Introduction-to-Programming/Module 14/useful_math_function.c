#include<stdio.h>
#include<math.h>
int main()
{
    int a = abs(-21);//....'abs' [-Wimplicit-function-declaration]
    printf("abs->%d\n",a);

    int b = ceil(4.2);
    printf("ceil->%d\n",b);

    int c = floor(4.0);
    printf("floor->%d\n",c);

    int d = round(3.4);
    printf("round->%d",d);
    
    return 0;
}