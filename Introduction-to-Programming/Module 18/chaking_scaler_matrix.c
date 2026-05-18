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
    bool is_scaler = true;
    bool replay = true;
    bool not_scaler = true;
    int same = a[0][0];

    if (row == col)
    {
        // chaking squre matrix
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                if (i == j)
                {
                    if (a[i][j]!=same)
                    {
                        /* code *///printf("%d",a[i][j]);
                        replay=false;//This is not a scaler matrix.

                        is_scaler=false;//This is a scaler matrix.
                    }
                    
                }
                else
                {
                    if (a[i][j] != 0)
                    {
                        is_scaler=false;
                        not_scaler = false;
                        printf("2 This is not scaler matrix-\n");
                    }
                }
            }
        }

        if (is_scaler == true)
        {
            printf("This is a scaler matrix\n");
        }
         if (replay == false && not_scaler==true)
        {
            printf("3 This is not a scaler matrix\n");
        }
       
    }

    else
    {
        printf("1 This is not scaler matrix..\n");
    }

    return 0;
}