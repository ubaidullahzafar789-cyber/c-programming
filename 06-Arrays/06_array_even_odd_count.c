#include <stdio.h>

int main()
{
    int numbers[5];
    int evenCount = 0;
    int oddCount = 0;

    printf("Enter 5 numbers:\n");

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &numbers[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        if (numbers[i] % 2 == 0)
        {
            evenCount++;
        }
        else
        {
            oddCount++;
        }
    }

    printf("\nEven numbers = %d\n", evenCount);
    printf("Odd numbers = %d\n", oddCount);

    return 0;
}