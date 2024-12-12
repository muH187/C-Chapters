#include<stdio.h>

int main() {

    int a = 20;
    int *ptr = &a;

    printf("The address of a: %p\n", ptr);
    printf("The value of a: %d\n", *ptr);

    return 0;
}