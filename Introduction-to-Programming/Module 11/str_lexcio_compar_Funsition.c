#include<stdio.h>
int main()
{
    char a[105],b[105];
    scanf("%s%s",&a,&b); 
    
    int comp = strcmp(a,b);
    if (comp<0)
    {
        printf("A is smaller\n");
    }
    else if (comp>0)
    {
        printf("B is smaller\n");
    }
    else if (comp==0)
    {
        printf("Equall \n");
    }
    
    printf("%d",comp);
    return 0;
}