#include <stdio.h>
int count_odd(int n, int a[])
{

    int odd = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 != 0)
        {
            odd++;
        }
    }
    return odd;
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
     int val = count_odd(n,a);
     printf("%d",val);

    return 0;
}