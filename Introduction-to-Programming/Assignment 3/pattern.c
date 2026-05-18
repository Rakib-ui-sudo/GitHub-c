#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int star = 1;
    int speace = n - 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= speace; j++)
        {
            printf(" ");
        }

        for (int j = 1; j <= star; j++)
        {
            if (i % 2 == 0)
            {
                printf("-");
            }
            else
            {
                printf("#");
            }
        }
        printf("\n");
        star += 2;
        speace--;
    }
    //====================================
    int star2 = 2 * n - 3;
    int speace2 = n / n;
    for (int K = 1; K <= n - 1; K++)
    {
        for (int j = 1; j <= speace2; j++)
        {
            printf(" ");
        }

        for (int j = 1; j <= star2; j++)
        {
            if (n % 2 != 0)
            {
                if (K % 2 == 0)
                {
                    printf("#");
                }
                else
                {
                    printf("-");
                }
            }
            else
            {
                if (K % 2 == 0)
                {
                    printf("-");
                }
                else
                {
                    printf("#");
                }
            }
        }
        printf("\n");
        star2 -= 2;
        speace2++;
    }

    return 0;
}