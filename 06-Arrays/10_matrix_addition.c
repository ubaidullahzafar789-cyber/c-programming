#include <stdio.h>

int main()
{
    int matrix1[2][2];
    int matrix2[2][2];
    int sum[2][2];

    printf("Enter 4 numbers for the first matrix:\n");

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter 4 numbers for the second matrix:\n");

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Add the two matrices
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    printf("\nSum of matrices:\n");

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", sum[i][j]);
        }

        printf("\n");
    }

    return 0;
}