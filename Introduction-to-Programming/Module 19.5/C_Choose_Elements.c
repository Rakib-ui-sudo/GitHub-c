#include <stdio.h>
int main()
{
    int n, in;
    scanf("%d%d", &n, &in);

    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    long long int cnt = 0;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] < a[j])
            {
                int tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
    for (int i = 0; i < in; i++)
    {
        if (a[i] > 0)
        {
            cnt += a[i];
        }
    }

    printf("%lld\n", cnt);
    return 0;
}