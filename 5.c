#i#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    printf("temp in celcius is:");
    scanf("%f", &celsius);
    fahrenheit = (celsius * 9 / 5) + 32;
    printf("%.2f Celsius = %.2f Fahrenheit\n", celsius, fahrenheit);

    return 0;
}

