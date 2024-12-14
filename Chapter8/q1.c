#include<stdio.h>

int main() {

    char name[] = "Ali";
    int i = 0, count;

    char c = name[i];

    while(c != '\0') {
        c = name[i];
        i++;
    }
    count = i - 1;
    printf("%d", count);

    return 0;
}