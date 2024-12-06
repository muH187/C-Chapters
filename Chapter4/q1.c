#include<stdio.h>

int main() {

    int number;
    int table;

    printf("Enter a number to generate a table: ");
    scanf("%d", &number);

    for(int i = 1; i <= 10; i++) {
        table = number * i;
        printf("%d x %d = %d\n", number, i, table);
    }

    return 0;
}