#include<stdio.h>

int count_before_one(int a[],int n)
{
    int count = 0;
    for (int i = 0; i <n; i++)
    {
        int one;
        if ( a[i]>1 || a[i]<=0 )
        {
            count ++;
            
        }
        if (a[i]==1)
        {
            break;
        }
    }
    
    return count;
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i <n; i++)
    {
        scanf("%d",&a[i]);
    }
     int val = count_before_one(a,n);
     printf("%d",val);
    return 0;
}