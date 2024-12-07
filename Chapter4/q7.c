#include<stdio.h>
#include<math.h>

int main() {

    int primeNum, isPrime = 1;

    printf("Enter a number to check: ");
    scanf("%d", &primeNum);

    if(primeNum < 2) {
        printf("It's not a prime number.");
        return 0;
    }

    for(int i = 2; i <= sqrt(primeNum); i++) {
        if(primeNum % i == 0) {
            isPrime = 0;
            break;
        }
    }

    if(isPrime) {
        printf("It's a prime number.");
    } else {
        printf("It's not a prime number.");
    }

    return 0;
}