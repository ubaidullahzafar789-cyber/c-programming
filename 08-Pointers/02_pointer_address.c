#include <stdio.h>

int main()
{
    int number = 25;
    int *pointer = &number;

    printf("Value of number = %d\n", number);
    printf("Address of number = %p\n", (void *)&number);
    printf("Address stored in pointer = %p\n", (void *)pointer);
    printf("Value using pointer = %d\n", *pointer);

    return 0;
}