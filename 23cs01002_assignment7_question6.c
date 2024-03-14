#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool isSubstring(char str[], char sub[]) {
    int strLen = strlen(str);
    int subLen = strlen(sub);
    
    for (int i = 0; i <= strLen - subLen; ++i) {
        int j;
        for (j = 0; j < subLen; ++j) {
            if (str[i + j] != sub[j]) {
                break;
            }
        }
        if (j == subLen) {
            return true;
        }
    }
    return false;
}

int main() {
    char str[100], sub[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    if (str[strlen(str) - 1] == '\n')
        str[strlen(str) - 1] = '\0';

    printf("Enter a substring: ");
    fgets(sub, sizeof(sub), stdin);
    
    if (sub[strlen(sub) - 1] == '\n')
        sub[strlen(sub) - 1] = '\0';

    if (isSubstring(str, sub)) {
        printf("The substring is present in the string.");
    } else {
        printf("The substring is not present in the string.");
    }

    return 0;
}