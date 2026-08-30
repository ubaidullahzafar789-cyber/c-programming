#include <stdio.h>

int main()
{
    int original[5];
    int copy[5];

    printf("Enter 5 numbers:\n");

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &original[i]);
    }

    // Copy elements
    for (int i = 0; i < 5; i++)
    {
        copy[i] = original[i];
    }

    printf("\nOriginal array:\n");

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", original[i]);
    }

    printf("\n\nCopied array:\n");

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", copy[i]);
    }

    printf("\n");

    return 0;
}