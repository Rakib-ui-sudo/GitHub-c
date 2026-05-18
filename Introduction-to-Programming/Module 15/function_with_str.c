#include<stdio.h>

void fun(int s[]){

        printf("%s\n",s);
         printf("%d\n",strlen(s));
    
}

int main()
{
   
    int s[10];
        scanf("%s",s);
    fun(s);
   
    return 0;
}