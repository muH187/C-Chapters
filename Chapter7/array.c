#include<stdio.h>

int main() {

    int array[3] = {1, 3, 4};
    
    for(int i = 0; i < 3; i++) {
        printf("The address of index %d is %u\n", i, &array[i]);
    }

    return 0;
}