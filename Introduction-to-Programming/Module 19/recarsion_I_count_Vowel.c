#include<stdio.h>
int vowel(char s[],int i)
{
    if (s[i]=='\0')
    {
       return 0;
    }
    int val = vowel(s,i+1);
    if (s[i]=='a'||s[i]=='A'||s[i]=='e'||s[i]=='E'||s[i]=='i'||s[i]=='I'||s[i]=='o'||s[i]=='O'||s[i]=='u'||s[i]=='U')
    {
        return val+1;
    }
    else
    {
        return val;
    }
}
int main()
{
    char s[202];
    fgets(s,202,stdin);
    int ans = vowel(s,0);
    printf("%d",ans);

    return 0;
}