#include <stdio.h>

int main()
{
    int numbers[5];

    printf("Enter 5 numbers:\n");

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &numbers[i]);
    }

    printf("\nOriginal array:\n");

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", numbers[i]);
    }

    printf("\n\nReversed array:\n");

    for (int i = 4; i >= 0; i--)
    {
        printf("%d ", numbers[i]);
    }

    printf("\n");

    return 0;
}