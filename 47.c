#include <stdio.h>

int main() {
    int i, j;

    for (i = 1; i <= 5; i++) {          // Outer loop → rows
        for (j = 1; j <= i; j++) {      // Inner loop → stars in each row
            printf("*");
        }
        printf("\n");                   // Move to next line
    }

    return 0;
}
