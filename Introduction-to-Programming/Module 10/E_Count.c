#include<stdio.h>
#include<string.h>
int main()
{
    char a[1000001];
    scanf("%s",&a);
    int length= strlen(a);
    int sum =0;
    for (int i = 0; i < length; i++)
    {
      //printf("%d\n",a[i]);
      sum += a[i] - '0' ;  //48 hocha 0a ar ascii valu.
      
      //sum += a[i] - 48;
    }
    printf("%d",sum);
     
    return 0;
}