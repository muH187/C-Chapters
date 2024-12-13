#include<stdio.h>

void countPosInt(int array[], int size);

int main() {

    int array[10] = {1, 2, 3, -4, 5, 6, -7, 8, -9, 10};
    int size = sizeof(array) / sizeof(array[0]);

    countPosInt(array, size);
    
    return 0;
}

void countPosInt(int array[], int size) {
    int count = 0;
    
    for(int i = 0; i < size; i++) {
        if(array[i] > 0) {
            count++;
        }
    }

    printf("There are %d positive integers in this array.", count);
}