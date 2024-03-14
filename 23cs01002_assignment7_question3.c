#include <stdio.h>
#include <string.h>

void reverseString(char str[], int start, int end) {
    char temp;
    if (start >= end)
        return;
    temp = str[start];
    str[start] = str[end];
    str[end] = temp;
    reverseString(str, start + 1, end - 1);
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Removing newline character from input
    if (str[strlen(str) - 1] == '\n')
        str[strlen(str) - 1] = '\0';

    reverseString(str, 0, strlen(str) - 1);

    printf("Reversed string: %s", str);

    return 0;
}