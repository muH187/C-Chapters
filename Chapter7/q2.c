#include<stdio.h>

int main() {

    int multiply, result, counter = 5;

    while(counter) {
        printf("Enter a number to mulitply by 5: ");
        scanf("%d", &multiply);

        result = 5 * multiply;

        printf("The answer is 5 x %d = %d\n", multiply, result);

        counter--;
    }
    

    return 0;
}