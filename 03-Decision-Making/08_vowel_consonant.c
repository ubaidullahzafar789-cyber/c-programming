#include <stdio.h>

int main()
{
    char ch;

    printf("Enter an alphabet: ");
    scanf(" %c", &ch);

    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
    {
        if (ch == 'a' || ch == 'e' || ch == 'i' ||
            ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' ||
            ch == 'O' || ch == 'U')
        {
            printf("%c is a Vowel.\n", ch);
        }
        else
        {
            printf("%c is a Consonant.\n", ch);
        }
    }
    else
    {
        printf("Invalid input. Please enter an alphabet.\n");
    }

    return 0;
}