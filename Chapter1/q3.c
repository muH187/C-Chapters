#include<stdio.h>

// Convert celsius to fahrenheit:

int celsius;
double fahrenheit;

int main() {

    printf("Enter Celsius to convert into Fahrenheit: ");
    scanf("%d", &celsius);

    fahrenheit = (celsius * 9/5) + 32;

    printf("Fahrenheit is: %.1lf", fahrenheit);

    return 0;
}