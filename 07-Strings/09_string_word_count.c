#include <stdio.h>
#include <string.h>

int main()
{
    char text[200];
    int i;
    int words = 0;
    int inWord = 0;

    printf("Enter a sentence: ");
    fgets(text, sizeof(text), stdin);

    text[strcspn(text, "\n")] = '\0';

    for (i = 0; text[i] != '\0'; i++)
    {
        if (text[i] != ' ' && text[i] != '\t')
        {
            if (inWord == 0)
            {
                words++;
                inWord = 1;
            }
        }
        else
        {
            inWord = 0;
        }
    }

    printf("Number of words = %d\n", words);

    return 0;
}