#include <stdio.h>

int main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    const char *result = (number % 2 == 0) ? "Even" : "Odd";

    printf("\nThe number is %s.\n", result);

    return 0;
}