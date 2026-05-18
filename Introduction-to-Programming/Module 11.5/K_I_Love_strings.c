#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d",&n);
    while (n--) //0 hola loop bondho hoba
    {

     char a[52],b[52];
     scanf("%s %s",&a,&b);
     int len_a = strlen(a);
     int len_b = strlen(b);

     int i;
     for ( i = 0; i <len_a && i<len_b; i++)
     {
        printf("%c%c",a[i],b[i]);
     }
    
     if (i<len_a)
     {
        for ( ; i <len_a; i++)
        {
            printf("%c",a[i]);
        }
     }
     else if (i<len_b)
     {
         for ( ; i <len_b; i++)
        {
            printf("%c",b[i]);
        }
     }
      
     printf("\n");
    }
    

    return 0;
}