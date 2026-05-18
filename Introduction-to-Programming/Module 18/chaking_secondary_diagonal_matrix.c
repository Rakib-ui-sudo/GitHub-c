#include <stdio.h>
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
    int is_diagonal = 1;
    if (row == col)
    {
        // chaking squre matrix
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                if (i + j==row-1)
                {
                    // we are now at diagonal.
                }
                else
                {
                    if (a[i][j] != 0)
                    {
                        is_diagonal = 2;
                        printf("This is not a secondary diagonal matrix");
                    }
                }
            }
        }
    }
    if (is_diagonal = 1)
    {
        printf("This is a secondary diagonal");
    }
    else
    {
        printf("This is not a secondary diagonal matrix");
    }

    return 0;
}