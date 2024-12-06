#include<stdio.h>

int main() {

    int number = 10;
    int table;
    
    for(int i = 10; i > 0; i--) {
        table = number * i;
        printf("%d x %d = %d\n", number, i, table);
    }

    return 0;
}