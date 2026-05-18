#include<stdio.h>

int char_to_ascii(char c){
    int val = c;
    return val;
}
int main()
{
     char a;
     scanf("%c",&a);
     int ans = char_to_ascii(a);
     printf("%d",ans);
    return 0;
}