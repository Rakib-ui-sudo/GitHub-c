#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int opr = 1000000;
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        while (a[i] % 2 == 0)
        {
            count++;
            a[i] = a[i] / 2;
        }
        if (count < opr)
        {
            opr = count;
        }
    }

    printf("%d", opr);

    return 0;
}