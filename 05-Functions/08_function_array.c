#include <stdio.h>

int calculateSum(int numbers[], int size)
{
    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum += numbers[i];
    }

    return sum;
}

int main()
{
    int numbers[5];

    printf("Enter 5 numbers:\n");

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &numbers[i]);
    }

    int sum = calculateSum(numbers, 5);

    printf("Sum = %d\n", sum);

    return 0;
}
