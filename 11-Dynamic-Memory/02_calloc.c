#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *numbers;
    int i;

    numbers = (int *)calloc(5, sizeof(int));

    if (numbers == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Values initialized by calloc:\n");

    for (i = 0; i < 5; i++)
    {
        printf("%d\n", numbers[i]);
    }

    free(numbers);

    return 0;
}