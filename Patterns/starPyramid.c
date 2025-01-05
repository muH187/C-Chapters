#include<stdio.h>

int main() {

    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    int nts = 1;

    for(int i = 1; i <= n; i++) {
        for(int k = 1; k <= n - i; k++) {
            printf(" ");
        }
        for(int j = 1; j <= nts; j++) {
            printf("*");
        }
        nts = nts + 2;
        printf("\n");
    }

    return 0;
}