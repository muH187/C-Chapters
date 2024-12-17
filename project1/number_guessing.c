#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int const MIN = 1;
int const MAX = 100;
int count = 0;
int guessed;

int main() {

    srand(time(0));

    int randNum = (rand() % MAX) + MIN;

    do{
        printf("Guess a number: ");
        scanf("%d", &guessed);

        if(guessed > 100 || guessed <= 0) {
            printf("Please guess from 1 to 100.\n");
            continue;
        }

        if(guessed > randNum) {
            printf("Too HIGH!\n");
            count++;
        } else if(guessed < randNum) {
            printf("Too LOW!\n");
            count++;
        } else {
            printf("Congrates! You have guessed correctly in %d guesses.\n", count);
            count++;
        }
    }while(guessed != randNum);

    return 0;
}