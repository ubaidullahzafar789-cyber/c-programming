#include <stdio.h>

int main()
{
    int number = 10;
    int *pointer = &number;

    printf("Before change = %d\n", number);

    *pointer = 50;

    printf("After change = %d\n", number);

    return 0;
}