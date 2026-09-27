#include <stdio.h>
#include <stdlib.h>

int main()
{
    int **matrix;
    int rows;
    int columns;
    int i;
    int j;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &columns);

    matrix = (int **)malloc(rows * sizeof(int *));

    if (matrix == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    for (i = 0; i < rows; i++)
    {
        matrix[i] = (int *)malloc(columns * sizeof(int));

        if (matrix[i] == NULL)
        {
            printf("Memory allocation failed.\n");
            return 1;
        }
    }

    printf("Enter matrix elements:\n");

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nMatrix:\n");

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            printf("%d ", matrix[i][j]);
        }

        printf("\n");
    }

    for (i = 0; i < rows; i++)
    {
        free(matrix[i]);
    }

    free(matrix);

    return 0;
}