#include <stdio.h>

float add(float a, float b)
{
    return a + b;
}

float subtract(float a, float b)
{
    return a - b;
}

float multiply(float a, float b)
{
    return a * b;
}

float divide(float a, float b)
{
    return a / b;
}

int main()
{
    float num1, num2, result;
    int choice;

    printf("===== Simple Calculator =====\n");

    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter second number: ");
    scanf("%f", &num2);

    printf("\n1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1:
            result = add(num1, num2);
            printf("Result = %.2f\n", result);
            break;

        case 2:
            result = subtract(num1, num2);
            printf("Result = %.2f\n", result);
            break;

        case 3:
            result = multiply(num1, num2);
            printf("Result = %.2f\n", result);
            break;

        case 4:
            if (num2 == 0)
            {
                printf("Error: Cannot divide by zero.\n");
            }
            else
            {
                result = divide(num1, num2);
                printf("Result = %.2f\n", result);
            }
            break;

        default:
            printf("Invalid choice.\n");
    }

    return 0;
}
