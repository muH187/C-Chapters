#include<stdio.h>

int main() {

    int arr[10] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11};

    int size = sizeof(arr) / sizeof(arr[0]);

    for(int i = 0; i < size; i++) {
        int multiply = 5 * arr[i];
        printf("5 x %d = %d\n", arr[i], multiply);
    }

    return 0;
}