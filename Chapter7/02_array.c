#include<stdio.h>

int main() {

    int marks[3] = {59, 79, 42};
    int *ptr = marks;

    for(int i = 0; i < 3; i++) {
        printf("The value of index %d is %d\n", i, *ptr);
        ptr++;
    }

    return 0;
}