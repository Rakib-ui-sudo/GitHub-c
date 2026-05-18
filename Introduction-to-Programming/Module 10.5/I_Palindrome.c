#include<stdio.h>
#include<string.h>
int main()
{
     char s[10002];
     scanf("%s",&s);
     int flag = 1;
     int count = strlen(s);
     for (int i = 0,j =count-1; i<j; i++,j--)
     {
        if (s[i]!=s[j])
        {
            printf("NO");
            flag = 2;
            break;
        }
        
     }
     if (flag ==1)
     {
        printf("YES");
     }
     
    return 0;
}