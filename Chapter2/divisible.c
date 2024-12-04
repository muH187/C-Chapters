#include<stdio.h>

int num;

int main() {

    printf("Enter your number: ");
    scanf("%d", &num);

    if(num % 97 == 0) {
        printf("It's divisible by 97.");
    } else {
        printf("It's not divisible by 97.");
    }

    return 0;
}