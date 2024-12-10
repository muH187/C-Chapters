#include<stdio.h>

int sum(int number);

int main() {

    int number, result;
    printf("Enter a number to sum: ");
    scanf("%d", &number);
    
    result = sum(number);

    printf("The sum of the first %d numbers is: %d", number, result);

    return 0;
}

int sum(int number) {
    if(number == 0) {
        return 0;
    }   
    return number + sum(number - 1);
}