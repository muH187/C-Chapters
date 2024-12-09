#include<stdio.h>

int sum(int num1, int num2, int num3);

int main() {

    printf("The sum of three numbers are: %d\n", sum(3, 3, 3));
    printf("The sum of three numbers are: %d\n", sum(30, 23, 7));

    return 0;
}

int sum(int num1, int num2, int num3) {
    int result = num1 + num2 + num3;
    return result;
}