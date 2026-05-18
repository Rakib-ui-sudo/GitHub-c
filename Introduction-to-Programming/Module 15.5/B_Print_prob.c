#include<stdio.h>

void fun(int a){
    int n = a;
    for (int i = 1; i <=n; i++)
    {
        printf("%d ",i);
    }
   
}
int main()
{
    int x;
    scanf("%d",&x);
    fun(x); 
    return 0;
}