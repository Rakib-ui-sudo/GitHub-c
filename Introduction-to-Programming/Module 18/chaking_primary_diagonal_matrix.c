#include <stdio.h>
#include <stdbool.h>
int main()
{
    int row, col;
    scanf("%d%d", &row, &col);
    int a[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    bool is_diagonal = true;
    if (row == col)
    {
        // chaking squre matrix
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                if (i == j)
                {
                    // we are now at diagonal.
                }
                else
                {
                    if (a[i][j] != 0)
                    {
                        is_diagonal = false;
                        printf("This is not a primary diagonal matrix--\n");
                    }
                }
            }
        }
        if (is_diagonal == true)
        {
            printf("This is a primary diagonal\n");
        }
    }

    else
    {
        printf("This is not a primary diagonal matrix\n");
    }

    return 0;
}