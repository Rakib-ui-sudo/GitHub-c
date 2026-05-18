#include<stdio.h>
int main()
{
    int x = 10;
    int y = x++;
    int z = ++y;
    printf("%d\t",z++); 
    printf("%d\t",z);
    return 0;
}