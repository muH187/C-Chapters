#include<stdio.h>

void convertCelsius(double celsius);

int main() {

    double celsius;
    printf("Enter temperature in celsius to convert into fahrenheit: ");
    scanf("%lf", &celsius);

    convertCelsius(celsius);

    return 0;
}

void convertCelsius(double celsius) {
    double fahrenheit = (celsius * 9/5) + 32;
    printf("The temperature in fahrenheite is: %.2lf", fahrenheit);
}