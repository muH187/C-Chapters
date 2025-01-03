#include<stdio.h>

int main() {

    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    int a = 1;
    for(int i = 1; i <=n; i++) {
        
        for(int j = 1; j <= i; j++) {
            int d = a + 64;
            char ch = (char)d;
            if(i % n == 0) {
                printf("%d ", j);
            } else {
                printf("%c ", ch);
            }
            a++;
        }
        printf("\n");
    }

    return 0;
}