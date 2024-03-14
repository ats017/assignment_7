#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

bool isPalindrome(char str[], int start, int end) {
    while (start < end) {
        if (tolower(str[start]) != tolower(str[end])) {
            return false;
        }
        start++;
        end--;
    }
    return true;
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    if (str[strlen(str) - 1] == '\n')
        str[strlen(str) - 1] = '\0';

    int length = strlen(str);

    if (isPalindrome(str, 0, length - 1)) {
        printf("The string is a palindrome");
    } else {
        printf("The string is not a palindrome");
    }

    return 0;
}