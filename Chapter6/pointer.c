#include<stdio.h>

int main() {

    int a = 100;

    int *ptrA = &a;

    printf("The value of a is: %d\n", a);
    printf("The address of variable a is: %p\n", ptrA);
    printf("The address of pointer to a is: %p\n", &ptrA);
    printf("%d\n", *ptrA);

    return 0;
}