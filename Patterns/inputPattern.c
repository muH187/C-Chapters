#include<stdio.h>

int main() {

    int rows;
    printf("Enter no of rows: ");
    scanf("%d", &rows);

    int coloumns;
    printf("Enter no of coloumns: ");
    scanf("%d", &coloumns);

    for(int i = 1; i <= rows; i++) {
        for(int j = 1; j <= coloumns; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}