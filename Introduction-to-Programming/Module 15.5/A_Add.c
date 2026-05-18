#include<stdio.h>

void fun(int a,int b){
    int sum = a+b;
    printf("%d ",sum);
}
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    fun(x,y); 
    return 0;
}