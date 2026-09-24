#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *numbers;
    int i;

    numbers = (int *)malloc(3 * sizeof(int));

    if (numbers == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    numbers[0] = 10;
    numbers[1] = 20;
    numbers[2] = 30;

    printf("Before realloc:\n");

    for (i = 0; i < 3; i++)
    {
        printf("%d\n", numbers[i]);
    }

    numbers = (int *)realloc(numbers, 5 * sizeof(int));

    if (numbers == NULL)
    {
        printf("Memory reallocation failed.\n");
        return 1;
    }

    numbers[3] = 40;
    numbers[4] = 50;

    printf("\nAfter realloc:\n");

    for (i = 0; i < 5; i++)
    {
        printf("%d\n", numbers[i]);
    }

    free(numbers);

    return 0;
}