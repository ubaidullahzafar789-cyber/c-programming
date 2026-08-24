#include <stdio.h>

void addNumbers(int a, int b)
{
    int sum = a + b;
    printf("Sum = %d\n", sum);
}

int main()
{
    addNumbers(10, 20);
    addNumbers(50, 30);

    return 0;
}