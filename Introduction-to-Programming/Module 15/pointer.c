#include<stdio.h>
int main()
{
    int n = 10; 
    printf("%d\n",n);
    printf("%p\n",&n); //refarence.

    int* ptr;
    ptr=&n; //refarence.
    *ptr =100;  //dereference.
    printf("%p\n",ptr);
    printf("%d\n",*ptr);

    return 0;
}