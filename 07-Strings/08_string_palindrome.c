#include <stdio.h>
#include <string.h>

int main()
{
    char text[100];
    int start;
    int end;
    int isPalindrome = 1;

    printf("Enter a string: ");
    fgets(text, sizeof(text), stdin);

    text[strcspn(text, "\n")] = '\0';

    start = 0;
    end = strlen(text) - 1;

    while (start < end)
    {
        if (text[start] != text[end])
        {
            isPalindrome = 0;
            break;
        }

        start++;
        end--;
    }

    if (isPalindrome)
    {
        printf("The string is a palindrome.\n");
    }
    else
    {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}