#include<stdio.h>
int main()
{
     int n;
     scanf("%d",&n);
     int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }

     int m;
     scanf("%d",&m);
     int b[m];
    for (int i = 0; i < m; i++)
    {
        scanf("%d",&b[i]);
    }

    int c[n+m];
    for (int i = 0; i < n; i++)
    {
        c[i] = a[i];   ///copy first array
    }
     for (int i = 0; i < m; i++)
    {
        c[i+n] = b[i];     ///copy second array
    }
     for (int i = 0; i < n+m; i++)
    {
        printf("%d\n",c[i]);   //print total array
    }
    
    return 0;
}