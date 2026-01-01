#include <stdio.h>

int main() {
    int i, j;

    for (i = 1; i <= 5; i++) {          // Outer loop → rows
        for (j = 1; j <= 5; j++) {      // Inner loop → columns
            printf("*");
        }
        printf("\n");                   // Move to next line after each row
    }

    return 0;
}
