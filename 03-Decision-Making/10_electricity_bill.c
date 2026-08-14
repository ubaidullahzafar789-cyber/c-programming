#include <stdio.h>

int main()
{
    float units;
    float bill;

    printf("Enter electricity units consumed: ");
    scanf("%f", &units);

    if (units < 0)
    {
        printf("Invalid units.\n");
    }
    else if (units <= 100)
    {
        bill = units * 5;
        printf("Electricity Bill: %.2f\n", bill);
    }
    else if (units <= 200)
    {
        bill = (100 * 5) + ((units - 100) * 7);
        printf("Electricity Bill: %.2f\n", bill);
    }
    else
    {
        bill = (100 * 5) + (100 * 7) + ((units - 200) * 10);
        printf("Electricity Bill: %.2f\n", bill);
    }

    return 0;
}
