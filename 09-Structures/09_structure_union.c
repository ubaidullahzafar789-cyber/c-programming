#include <stdio.h>

union Data
{
    int number;
    float decimal;
    char character;
};

int main()
{
    union Data data;

    data.number = 25;

    printf("Integer value = %d\n", data.number);

    data.decimal = 15.5;

    printf("Float value = %.2f\n", data.decimal);

    data.character = 'A';

    printf("Character value = %c\n", data.character);

    return 0;
}