#include<stdio.h>
#include<string.h>
int main()
{
     char a[11],b[11];
     scanf("%s %s",&a,&b);
     
     int lenth = strlen(a),lenth2 = strlen(b);
     printf("%d %d\n",lenth,lenth2);

     printf("%s%s\n",a,b);
     
     char tmp = a[0];
     a[0]= b[0];
     b[0]= tmp;
     printf("%s %s",a,b);
     

    return 0;
}