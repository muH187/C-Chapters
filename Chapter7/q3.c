#include<stdio.h>

void reverseArray(int array[], int size);

int main() {

    int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(array) / sizeof(array[0]);

    printf("The original array:\n");
    for(int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }

    printf("\n");

    printf("The reverse array:\n");
    reverseArray(array, size);

    for(int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}

void reverseArray(int array[], int size) {
    int start = 0, end = size - 1;

    while(start < end) {
        int temp = array[start];
        array[start] = array[end];
        array[end] = temp;

        start++;
        end--;
    }
}