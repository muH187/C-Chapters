#include<stdio.h>
#include<math.h>

int main() {

    int primeNum, isPrime = 1, counter = 2;

    printf("Enter a number to check: ");
    scanf("%d", &primeNum);

    if(primeNum <= 1) {
        printf("It's not a prime number.\n");
        return 0;
    }

    while(counter <= sqrt(primeNum)) {
        if(primeNum % counter == 0) {
            isPrime = 0;
            break;
        }
        counter++;
    }

    if(isPrime) {
        printf("It's a prime number.\n");
    } else {
        printf("It's not a prime number.\n");
    }

    return 0;
}