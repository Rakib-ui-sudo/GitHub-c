#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
         char s[101];
         scanf("%s",&s);
         int count=0;
         for (int i = 0; s[i]!='\0'; i++)
         {
            count++;
         }
        if (count>10)
        {
            printf("%c%d%c\n",s[0],count-2,s[count-1]);
        }
        else
        {
            printf("%s\n",s);
        }
              
          
    }
    
   
    return 0;
}