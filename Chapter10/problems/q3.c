#include<stdio.h>
#include<stdlib.h>

int main() {

    int n = 4;
    int *ptr;
    ptr = (int*) calloc(n, sizeof(int));

    ptr[0] = 23;
    ptr[1] = 13;
    ptr[2] = 63;
    ptr[3] = 72;

    for(int i = 0; i < 4; i++) {
        printf("%d\n", ptr[i]);
    }

    return 0;
}