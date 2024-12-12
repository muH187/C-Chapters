#include<stdio.h>

void sumAndAvg(int num1, int num2);

int sum, avg;

int main() {

    sumAndAvg(5, 15);

    return 0;
}

void sumAndAvg(int num1, int num2) {
    sum = num1 + num2;
    avg = sum / 2;
    printf("The sum is %d and the average is %d\n", sum, avg);
}