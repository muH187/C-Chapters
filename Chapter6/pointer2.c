#include<stdio.h>

int main() {

    int a = 10;
    int *ptr = &a;

    printf("The value of a: %d\n", a);
    printf("The address of a: %p\n", &a);
    printf("The address of a: %p\n", ptr);
    printf("The value of a: %d\n", *ptr);
    printf("The address of ptr: %p\n", &ptr);

    return 0;
}