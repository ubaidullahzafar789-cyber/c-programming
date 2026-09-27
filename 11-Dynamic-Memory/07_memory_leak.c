#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *numbers;

    numbers = (int *)malloc(5 * sizeof(int));

    if (numbers == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    numbers[0] = 10;
    numbers[1] = 20;
    numbers[2] = 30;
    numbers[3] = 40;
    numbers[4] = 50;

    printf("Numbers:\n");

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", numbers[i]);
    }

    printf("\n");

    /*
       Memory is allocated but not released.
       This creates a memory leak.
    */

    return 0;
}