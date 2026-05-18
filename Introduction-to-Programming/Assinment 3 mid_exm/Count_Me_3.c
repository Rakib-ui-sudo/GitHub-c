#include<stdio.h>
#include<string.h>
int main()
{
     int T;
     scanf("%d",&T);
     while (T--)
     {
        char s[1000];
        scanf("%s",s);
        int len_s = strlen(s);
        int capi = 0, smal = 0, dig = 0;

        for (int i = 0; i < len_s; i++)
        {
           if (s[i]>='a'&& s[i]<='z')
           {
             smal++;
           }
           else if (s[i]>='A'&& s[i]<='Z')
           {
             capi++;
           }
           else if (s[i]>='0'&& s[i]<='9')
           {
              dig++;
           }
            
        }
        printf("%d %d %d\n",capi,smal,dig);
     }
     

    return 0;
}