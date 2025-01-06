#include<stdio.h>

int main() {

    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        int b = i - 1;
        for(int k = 1; k <= n - i; k++) {
            printf(" ");
        }
        int a = 1;
        for(int j = 1; j <= i; j++) {
            printf("%d", a);
            a++;
        }
        for(int q = 1; q <= i - 1; q++) {
            printf("%d", b);
            b--;
        }
        printf("\n");
    }

    return 0;
}