#include<stdio.h>

int counter = 0;

void greet(int counter) {
    counter++;
    if(counter < 10) {
        printf("Good Morning\n");
        greet(counter);
    }
    
}

int main() {

    greet(counter);

    return 0;
}