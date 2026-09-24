#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *numbers;
    int size;
    int i;
    int sum = 0;

    printf("Enter array size: ");
    scanf("%d", &size);

    numbers = (int *)malloc(size * sizeof(int));

    if (numbers == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter %d numbers:\n", size);

    for (i = 0; i < size; i++)
    {
        scanf("%d", &numbers[i]);
        sum += numbers[i];
    }

    printf("\nArray elements:\n");

    for (i = 0; i < size; i++)
    {
        printf("%d ", numbers[i]);
    }

    printf("\nSum = %d\n", sum);

    free(numbers);

    return 0;
}