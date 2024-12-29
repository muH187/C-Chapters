#include<stdio.h>

void printNum(int x, int n) {
    if(x > n) return;
    printf("%d\n", x);
    printNum(x+1, n);
}

int main() {

    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printNum(1, n);

    return 0;
}