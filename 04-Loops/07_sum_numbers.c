#include <stdio.h>

int main()
{
    int n;
    int sum = 0;

    printf("Enter a positive number: ");
    scanf("%d", &n);

    if (n < 1)
    {
        printf("Please enter a positive number.\n");
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            sum += i;
        }

        printf("Sum of numbers from 1 to %d = %d\n", n, sum);
    }

    return 0;
}
