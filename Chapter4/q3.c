#include<stdio.h>

int main() {

    int number = 1;
    int sum = 0;

    while(number <= 10) {
        sum += number;
        number++;
    }
    
    printf("%d", sum);      
    
    return 0;
}