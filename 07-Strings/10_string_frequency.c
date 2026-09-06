#include <stdio.h>
#include <string.h>

int main()
{
    char text[200];
    int frequency[256] = {0};
    int i;

    printf("Enter a string: ");
    fgets(text, sizeof(text), stdin);

    text[strcspn(text, "\n")] = '\0';

    for (i = 0; text[i] != '\0'; i++)
    {
        frequency[(unsigned char)text[i]]++;
    }

    printf("\nCharacter frequency:\n");

    for (i = 0; i < 256; i++)
    {
        if (frequency[i] > 0)
        {
            printf("'%c' = %d\n", i, frequency[i]);
        }
    }

    return 0;
}