#include<stdio.h>

void printAddress(int i, int *ptr);

int main() {

    int i = 50;
    int *ptr = &i;

    printf("The address of variable i is: %p\n", ptr);
    printAddress(i, ptr);

    return 0;
}

void printAddress(int i, int *ptr) {
    printf("The address of variable i is: %p\n", ptr);
}   