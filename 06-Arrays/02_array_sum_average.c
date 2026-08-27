#include <stdio.h>

int main()
{
    int numbers[5];
    int sum = 0;
    float average;

    printf("Enter 5 numbers:\n");

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &numbers[i]);
        sum += numbers[i];
    }

    average = (float)sum / 5;

    printf("\nSum = %d\n", sum);
    printf("Average = %.2f\n", average);

    return 0;
}
