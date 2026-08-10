#include <stdio.h>

int main()
{
    int result;

    result = 10 + 5 * 2;

    printf("10 + 5 * 2 = %d\n", result);

    result = (10 + 5) * 2;

    printf("(10 + 5) * 2 = %d\n", result);

    result = 20 / 4 + 3 * 2;

    printf("20 / 4 + 3 * 2 = %d\n", result);

    result = 10 - 2 + 5;

    printf("10 - 2 + 5 = %d\n", result);

    return 0;
}