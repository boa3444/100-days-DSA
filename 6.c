#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter two numbers:\n");
    printf("a = ");
    scanf("%d", &a);
    printf("b = ");
    scanf("%d", &b);
    printf("Before swapping: a = %d, b = %d\n");
    c = a;
    a = b;
    b = c;
    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}


