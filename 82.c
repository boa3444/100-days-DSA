#include <stdio.h>

int main() {
    char str[100];
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);   // safer input

    printf("\nCharacters in the string:\n");
    for(i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n') break;    // remove newline
        printf("%c\n", str[i]);
    }

    return 0;
}
