#include<stdio.h>
int main()
{
    char a[101];
    scanf("%s",&a);
    int count =0;
    for (int i = 0; a[i]!='\0'; i++)
    {
       count+=1;
    }
    printf("%d",count);

    //--short neyom
    // int size = strlen(a);
    // printf("%d",size);
    
     
    return 0;
}