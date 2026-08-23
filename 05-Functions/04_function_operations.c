#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}

int subtract(int a, int b)
{
    return a - b;
}

int multiply(int a, int b)
{
    return a * b;
}

int main()
{
    int num1, num2;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("\n----- Results -----\n");
    printf("Addition       = %d\n", add(num1, num2));
    printf("Subtraction    = %d\n", subtract(num1, num2));
    printf("Multiplication = %d\n", multiply(num1, num2));

    return 0;
}
