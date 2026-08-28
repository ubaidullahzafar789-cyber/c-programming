#include <stdio.h>

int main()
{
    int numbers[5];
    int maximum, minimum;

    printf("Enter 5 numbers:\n");

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &numbers[i]);
    }

    maximum = numbers[0];
    minimum = numbers[0];

    for (int i = 1; i < 5; i++)
    {
        if (numbers[i] > maximum)
        {
            maximum = numbers[i];
        }

        if (numbers[i] < minimum)
        {
            minimum = numbers[i];
        }
    }

    printf("\nLargest = %d\n", maximum);
    printf("Smallest = %d\n", minimum);

    return 0;
}