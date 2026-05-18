#include<stdio.h>

void fun(int* p){
    *p=20;
    printf("Fun function ar p address:%p\n",&p);
}
int main()
{
    int x = 10;
    fun(&x);
    printf("%d\n",x);
    printf("Main function ar x address:%p\n",&x);

    
    return 0;
}