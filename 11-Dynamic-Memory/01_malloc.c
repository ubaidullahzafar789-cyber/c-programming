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

    *number = 50;

    printf("Value = %d\n", *number);

    free(number);

    return 0;
}