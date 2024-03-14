#include <stdio.h>

int main() {
    char str[100], ch;
    int i, frequency = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter a character: ");
    scanf("%c", &ch);

    for(i = 0; str[i] != '\0'; ++i) {
        if(ch == str[i])
            ++frequency;
    }

    printf("Frequency of %c is: %d", ch, frequency);

    return 0;
}