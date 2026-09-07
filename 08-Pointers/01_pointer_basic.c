#include <stdio.h>

int main()
{
    int number = 10;
    int *pointer;

    pointer = &number;

    printf("Value of number = %d\n", number);
    printf("Value using pointer = %d\n", *pointer);

    return 0;
}