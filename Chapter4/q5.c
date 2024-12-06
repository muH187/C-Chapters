#include<stdio.h>

int main() {

    int number = 1;
    int sum = 0;

    do{
        sum += number;
        number++;
    }while(number <= 10);

    printf("%d", sum);

    return 0;
}