#include<stdio.h>

int num1, num2, num3, num4;

int main() {

    printf("Enter your first number: ");
    scanf("%d", &num1);

    printf("Enter your second number: ");
    scanf("%d", &num2);

    printf("Enter your third number: ");
    scanf("%d", &num3);

    printf("Enter your fourth number: ");
    scanf("%d", &num4);

    
        if(num1 > num2 && num1 > num3 && num1 > num4) {
            printf("%d is the greatest number.", num1);
        } else if(num2 > num1 && num2 > num3 && num2 > num4) {
            printf("%d is the greatest number.", num2);
        } else if(num3 > num1 && num3 > num2 && num3 > num4) {
            printf("%d is the greatest number.", num3);
        } else if(num4 > num1 && num4 > num2 && num4 > num3) {
            printf("%d is the greatest number.", num4);
        } else if(num1 == num2 && num2 == num3 && num3 == num4) {
            printf("All numbers are all equal\n");
        } else {
            printf("Every number should be different not the same.\n");
        }

    return 0;
}