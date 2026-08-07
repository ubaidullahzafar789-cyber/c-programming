#include <stdio.h>

int main()
{
    int num1, num2;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("\n----- Arithmetic Operators -----\n");
    printf("Addition       : %d\n", num1 + num2);
    printf("Subtraction    : %d\n", num1 - num2);
    printf("Multiplication : %d\n", num1 * num2);

    if (num2 != 0)
    {
        printf("Division       : %.2f\n", (float)num1 / num2);
        printf("Modulus        : %d\n", num1 % num2);
    }
    else
    {
        printf("Division and Modulus cannot be performed because divisor is 0.\n");
    }

    return 0;
}