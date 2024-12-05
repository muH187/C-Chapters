#include<stdio.h>

int main() {

    char userChar;

    printf("Enter a character: ");
    scanf("%c", &userChar);

    if(userChar >= 'a' && userChar <= 'z'){
        printf("%c is lowercase character.", userChar);
    } else {
        printf("%c is not a lowercase character.", userChar);
    }

    return 0;
}