#include<stdio.h>
#include<string.h>
int is_palindrome(char s[])
{
    int flag = 1;
    int str = strlen(s);
    for (int i = 0,j = str-1 ; i <j; i++,j--)
    {
        if (s[i]!=s[j])
        {
           flag = 2;
           break;
        }
        
    }
    return flag;
}
int main()
{
    char s[1005];
    scanf("%s",&s);
    int val = is_palindrome(s);
    if (val==1)
    {
        printf("Palindrome");
    }
    else
    {
       printf("Not Palindrome");
    }
    
     
    return 0;
}