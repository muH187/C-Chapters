#include<stdio.h>

int factorial(int n) {
    if(n == 1 || n == 0) return 1;
    int fact = n * factorial(n - 1);
    return fact;
}

int main() {

    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    printf("%d", factorial(n));

    return 0;
}