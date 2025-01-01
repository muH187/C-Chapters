#include<stdio.h>

int main() {

    int rows;
    printf("Enter rows: ");
    scanf("%d", &rows);

    for(int i = 1; i <= rows; i++) {
        for(int j = 1; j <= 1; j++) {
            printf("1234");
        }
        printf("\n");
    }

    return 0;
}