#include<stdio.h>

int main() {

    int rows;
    printf("Enter rows: ");
    scanf("%d", &rows);

    int col = 6;
    printf("Enter cols: ");
    scanf("%d", &col);

    for(int i = 1; i <= rows; i++) {
        for(int j = 1; j <= col; j++) {
            if(i == 1 || j == 1) {
                printf("*");
            } else if(i == 4 || j == 6) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}