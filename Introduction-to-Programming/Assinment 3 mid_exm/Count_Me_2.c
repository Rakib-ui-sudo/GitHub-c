#include<stdio.h>
#include<string.h>
int main()
{
     char s[1000];//s[1000002];
     scanf("%s",s);
     int len_s = strlen(s);
     int cou = 0;
     for (int i = 0; i < len_s; i++)
     {
        if (s[i]=='a')
        {
            continue;
        }
        else if (s[i]=='e')
        {
            continue;
        }
        else if (s[i]=='i')
        {
            continue;
        }
        else if (s[i]=='o')
        {
            continue;
        }
        else if (s[i]=='u')
        {
            continue;
        }
        else
        {
            cou++;
        }  
        
     }
     printf("%d",cou);

    return 0;
}