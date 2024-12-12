#include<stdio.h>

void modifyingValue(int *ptr);

int main() {

    int num = 50;
    printf("Before modifying the num: %d\n", num);

    modifyingValue(&num);

    printf("After modifying the num: %d\n", num);

    return 0;
}

void modifyingValue(int *ptr) {
    *ptr = 100;
}