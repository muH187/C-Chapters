#include<stdio.h>

int main() {

    char string[] = "programmer";
    int i = 0, count;

    char chr = string[i];

    while(chr != '\0') {
        chr = string[i];
        i++;
    }
    
    count = i - 1;
    printf("The length of the string is: %d\n", count);

    return 0;
}