#include <stdio.h>

int main() {
    printf("Enter the temperature in Celsius\n");

    // Get temperature in Celsius
    int c;
    scanf("%d", &c);
    float f = (9.0 / 5) * c + 32;

    // Temperature in Fahrenheit will be calculated
    printf("The temperature in Fahrenheit is %.2f", f);

    return 0;
}
