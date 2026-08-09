#include <stdio.h>

int main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    printf("\n----- Increment and Decrement Operators -----\n");

    printf("Original value : %d\n", number);

    number++;
    printf("After ++       : %d\n", number);

    number--;
    printf("After --       : %d\n", number);

    ++number;
    printf("After prefix ++: %d\n", number);

    --number;
    printf("After prefix --: %d\n", number);

    return 0;
}