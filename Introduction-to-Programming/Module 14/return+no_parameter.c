#include<stdio.h>

int sum(){
    int a,b;
    scanf("%d%d",&a,&b);
    int ans = a+b;
    return ans;
}

int main() //ai funsition a main funsition thakea input daoua ji nah.
{
    int ans = sum();
    printf("%d",ans); 
    return 0;
}