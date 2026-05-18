#include<stdio.h>
int main()
{
    int a[5]={10,20,30,40,50};
    printf("Array ar 0 indx-->%p\n",&a[0]);
    printf("Array ar a address-->%p\n",&a);
    *a=100;
    *(a+3)=80;
    printf("%d\n\n",*a);
    for (int i = 0; i < 5; i++)
    {
        printf("%d ",a[i]);
    }
    
    
    return 0;
}