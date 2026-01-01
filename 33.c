#include <stdio.h>
#include <math.h>

int main() {
    int n, org, rem, rs = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    org = n;
    while (n > 0) {
        rem = n % 10;
        rs = rs + (rem * rem * rem);
        n = n / 10;
    }
    if (rs == org) {
        printf("Armstrong\n");
    } else {
        printf("Not Armstrong\n");
    }

    return 0;
