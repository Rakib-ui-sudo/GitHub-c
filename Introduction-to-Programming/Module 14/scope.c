#include<stdio.h>

int x = 10;//global variable.
int sum(){
    //int x= 20;
    printf("sum--->%d\n",x);
}

int main()
{
   
    printf("main-->%d\n",x);
     sum();
    return 0;
}