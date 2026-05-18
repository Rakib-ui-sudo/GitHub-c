#include<stdio.h>
#include<string.h>

char small_to_capital(char c){
    char val =c;
    char x ;
    if (val>='A'&&val<='Z')
    {
       x =val+32;
    }
    return x;
}

int main()
{
     char a ='b';
     scanf("%c",&a);
     char ans = small_to_capital(a);
     printf("%c",ans);
    
    return 0;
}