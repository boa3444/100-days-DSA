#include <stdio.h>

int main() {
    int i, j;
    int n = 5; // Number of rows

    for(i = 0; i < n; i++) {
        // Print leading spaces
        for(j = 0; j < i; j++) {
            printf(" ");
        }

        // Print stars
        for(j = i; j < n; j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
