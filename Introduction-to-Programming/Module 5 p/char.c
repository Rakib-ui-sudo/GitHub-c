#include<stdio.h>
int main()
{
     char a ;
     scanf("%c",&a);
     if (a>='a' && a<='z') //capital hola smALL HOBA ...small hola capital hoba.
     {
        a = a-32;
        printf("%c",a);
     }
     else{
        a = a+32;
        printf("%c",a);
     }
     
    return 0;
}