#include<stdio.h>

void greet(int count) {
    if(count == 0) return;

    printf("Hello World\n");
    greet(count - 1);
}

int main() {

    greet(3);

    return 0;
}