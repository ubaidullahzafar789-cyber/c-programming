#include <stdio.h>

int main() {
    char str[] = "Hello";

    char *ptr = str;

    printf("String: %s\n", str);
    printf("Using pointer: %s\n", ptr);

    printf("Characters using pointer:\n");

    while (*ptr != '\0') {
        printf("%c ", *ptr);
        ptr++;
    }

    return 0;
}