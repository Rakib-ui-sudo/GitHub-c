#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int first = n % 10;
    int last = n / 10;
    int mid = last % 10;
    int end = last/10;
    if (first==7||first==4||mid==7||mid==4||end==7||end==4)
    {
        printf("YES");
    }
    if (n/4==4 &&n/7==4&&n/7==4&&n/7==7)
    {
         printf("YES");
    }
    else
    {
        printf("NO");
    }
    
     //fixt hoini...
    return 0;
}