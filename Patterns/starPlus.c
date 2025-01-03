#include<stdio.h>

int main() {

    while(1) {
        int n;
        printf("Enter n: ");
        scanf("%d", &n);

        if(n % 2 == 0) {
            printf("The n should be odd!\n");
            continue;
        }

        for(int i = 1; i <= n; i++) {
            for(int j = 1; j <= n; j++) {
                int formula = (n/2) + 1;
                if(i == formula || j == formula) {
                    printf("*");
                } else {
                    printf(" ");
            }
        }
            printf("\n");
        }
        break;
    }
    
    return 0;
}