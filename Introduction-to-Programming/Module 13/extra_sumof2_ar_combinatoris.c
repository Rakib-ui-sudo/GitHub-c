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

    int X;
    scanf("%d", &X);

    int freq[100001] = {0}; // ধরে নিচ্ছি value <= 100000
    //5
    //2 7 5 10 3
    //9 question

    int count = 0;

    for (int i = 0; i < n; i++)
    {
        int need = X - a[i];

        // আগে থেকে need থাকলে pair পাওয়া গেছে
        if (need >= 0 && freq[need] > 0)
        {
            count += freq[need];
        }

        freq[a[i]]++;
    }

    if (count > 0)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}