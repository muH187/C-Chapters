#include<stdio.h>
#include<stdlib.h>

int main() {

    int n = 6;
    int *ptr;

    ptr = (int*) malloc(n * sizeof(int));

    ptr[0] = 3;
    ptr[1] = 10;
    ptr[2] = 30;

    printf("%d\n", ptr[0]);
    printf("%d\n", ptr[1]);
    printf("%d\n", ptr[2]);

    return 0;
}