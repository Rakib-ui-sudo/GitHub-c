#include<stdio.h>
int my_len(char s[])
{
    int count = 0;
    for (int i = 0; s[i]!='\0'; i++)
    {
        count++;
    }
    
    return count;
} 
int main()
{
     char s[101];
     scanf("%s",s);
     int val = my_len(s);
     printf("%d",val);
    
    return 0;
}