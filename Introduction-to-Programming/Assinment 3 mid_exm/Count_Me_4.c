#include<stdio.h>
#include<string.h>
int main()
{
     char s[1000];
     scanf("%s",s);
     int len_s = strlen(s);
     int count [256]={0}; //ASCII
     for (int i = 0; i < len_s; i++)
     {
        int val = s[i];
        count[val]++;
     }
     for (int i = 1; i <256; i++)
     {
        if (count[i]>0)
        {
            printf("%c - %d\n",i,count[i]);
        }
        
     }
     
     

    return 0;
}