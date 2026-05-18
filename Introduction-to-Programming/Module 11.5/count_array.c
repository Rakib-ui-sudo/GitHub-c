#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i <n; i++)
    {
        scanf("%d",&a[i]);
    }
    int zero = 0, One=0, two=0;
    for (int i = 0; i < n; i++)
    {
        if (a[i]==0)
        {
            zero++;
        }
        else if (a[i]==1)
        {
            One++;
        }
        else if (a[i]==2)
        {
            two++;
        }
        
    }
    printf("Zero = %d\n One = %d\n Two = %d\n",zero,One,two);
    
     
    return 0;
}