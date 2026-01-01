#include <stdio.h>

int main() {
    int n, rev = 0, rm;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n != 0) {
        rm = n % 10;
        rev = rev * 10 + rm;
        n = n / 10;
    }

    printf("Reversed number = %d\n", rev);

    return 0;
}
