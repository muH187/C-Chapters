#include<stdio.h>

int fibonacci(int element);

int main() {

    int element;
    printf("Enter a position to generate fibonacci: ");
    scanf("%d", &element);

    if(element < 0) {
        printf("Invalid inpute. Please put 1 or above 1 to generate fibonacci.");
    } else {
        printf("The fibonacci number of position at %d is: %d", element, fibonacci(element));
    }

   

    return 0;
}

int fibonacci(int element) {
    if(element == 0) {
        return 0;
    } else if(element == 1) {
        return 1;
    } else {
        return fibonacci(element - 1) + fibonacci(element - 2);
    }
}