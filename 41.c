#include <stdio.h>

int main()
{
    int num, n, first, last, digits = 0, powTen = 1, middle, result;

    printf("Enter a number: ");
    scanf("%d", &num);

    n = num; // store original number

    // Step 1: Find the number of digits and powTen
    while (n >= 10) {
        n = n / 10;
        powTen *= 10;
        digits++;
    }
    first = n;           // first digit
    last = num % 10;     // last digit

    // Step 2: Extract middle digits
    middle = num % powTen;  // removes first digit
    middle = middle / 10;   // removes last digit

    // Step 3: Build the result
    result = last * powTen + middle * 10 + first;

    printf("Swapped number: %d\n", result);

    return 0;
}
