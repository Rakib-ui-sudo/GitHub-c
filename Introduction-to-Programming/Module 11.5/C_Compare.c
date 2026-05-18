#include<stdio.h>
#include<string.h>
int main()
{
    char a[25],b[25];
    scanf("%s%s",&a,&b);
    int cmp = strcmp(a,b);
    if (cmp>0)
    {
         printf("%s",b);         
    }
    else if (cmp<0)
    {
       printf("%s",a);
    }
    else if (cmp==0)
    {
        printf("%s",a);
    }
    
     
    return 0;
}