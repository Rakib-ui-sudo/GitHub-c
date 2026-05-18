#include<stdio.h>

void fun(int a,int i)
{
    if (i == a + 1)
    {
        return;
    }

    fun(a, i + 1);

    printf("%d", i);

    if(i != 1)   // শেষ সংখ্যার পরে space দিবে না
    {
        printf(" ");
    }
}

int main()
{
    int n;
    scanf("%d", &n);

    fun(n, 1);

    return 0;
}