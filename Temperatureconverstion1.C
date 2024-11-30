#include <stdio.h>
float celsiusToFahrenheit(float celsius) {
    return (celsius * 9.0 / 5.0) + 32;
}

float fahrenheitToCelsius(float fahrenheit) {
    return (fahrenheit - 32) * 5.0 / 9.0;
}

int main() {
    int choice;
    float temperature, convertedTemp;
    printf("Temperature Conversion Program\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);
if (choice == 1) {
        printf("Enter temperature in Celsius: ");
        scanf("%f", &temperature);
        convertedTemp = celsiusToFahrenheit(temperature);
        printf("%.2f Celsius = %.2f Fahrenheit\n", temperature, convertedTemp);
    } else if (choice == 2) {
        printf("Enter temperature in Fahrenheit: ");
        scanf("%f", &temperature);
        convertedTemp = fahrenheitToCelsius(temperature);
        printf("%.2f Fahrenheit = %.2f Celsius\n", temperature, convertedTemp);
    } else {
        printf("Invalid choice! Please enter 1 or 2.\n");
    }

    return 0;
}
