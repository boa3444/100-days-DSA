#include <stdio.h>
#include <string.h>

int main(void) {
    char s[1024];

    printf("Enter a string: ");
    if (!fgets(s, sizeof s, stdin)) return 0;

    /* remove trailing newline from fgets */
    size_t n = strlen(s);
    if (n > 0 && s[n-1] == '\n') {
        s[--n] = '\0';
    }

    printf("All substrings:\n");
    /* start index i, length len */
    for (size_t i = 0; i < n; ++i) {
        for (size_t len = 1; i + len <= n; ++len) {
            /* print substring of length 'len' starting at s+i */
            printf("%.*s\n", (int)len, s + i);
        }
    }

    return 0;
}
