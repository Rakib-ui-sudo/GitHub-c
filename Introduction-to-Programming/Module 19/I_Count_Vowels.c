#include <stdio.h>
int main()
{
    char s[205];
    fgets(s, sizeof(s)/*2005*/, stdin);
   // printf("%s", s);
    int str = strlen(s);
    int count_vowel = 0;
    for (int i = 0; i < str; i++)
    {
        if (s[i] == 'a'||s[i] == 'A')
        {
            count_vowel++;
        }
        else if (s[i] == 'e'||s[i] == 'E')
        {
            count_vowel++;
        }
        else if (s[i] == 'i'||s[i] == 'I')
        {
            count_vowel++;
        }
        else if (s[i] == 'o'||s[i] == 'O')
        {
            count_vowel++;
        }
        else if (s[i] == 'u'||s[i] == 'U')
        {
            count_vowel++;
        }
    }
    
    printf("%d",count_vowel);

    return 0;
}