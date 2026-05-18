#include<stdio.h>
int main()
{
    int a,b,c;
    char x,y;
    scanf("%d %c %d %c %d",&a,&x,&b,&y,&c);
    int ans = 0;
    if (x=='+')
    {
        ans = a+b;
    }
    else if (x=='-')
    {
        ans = a-b;
    }
     else if (x=='*')
    {
        ans = a*b;
    }
    
    if (ans==c)
    {
        printf("Yes");
    }
    else{
        printf("%d",ans);
    }
     
    return 0;
}