#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *number;

    number = (int *)malloc(sizeof(int));

    if (number == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    *number = 100;

    printf("Before free: %d\n", *number);

    free(number);

    number = NULL;

    printf("Memory has been released.\n");
    printf("Pointer is now NULL.\n");

    return 0;
}