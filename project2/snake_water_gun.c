#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    int userChoice;
    int userScore = 0;
    int compScore = 0;
    srand(time(0));


    do
    {

        int compChoice = (rand() % 3) + 1;

        printf("Enter 0. for Exit, 1. for Snake, 2. for Water, 3. for Gun: ");
        scanf("%d", &userChoice);

        if (userChoice > 3 || userChoice < 0)
        {
            printf("Invalid Choice! Choose between 1-3:\n");
            continue;
        }
        else if (userChoice == 0)
        {
            break;
        }

        printf("Computer Choice:\n");
        if(compChoice == 1) {
            printf("Snake\n");
        } else if(compChoice == 2) {
            printf("Water\n");
        } else {
            printf("Gun\n");
        }

        printf("Your Choice:\n");
        if(userChoice == 1) {
            printf("Snake\n");
        } else if(userChoice == 2) {
            printf("Water\n");
        } else {
            printf("Gun\n");
        }

        if (userChoice == compChoice)
        {
            printf("It's a tie!\n");
        }
        else if (userChoice == 1 && compChoice == 2 ||
                 userChoice == 2 && compChoice == 3 ||
                 userChoice == 3 && compChoice == 1)
        {
            printf("You Win!\n");
            userScore++;
        }
        else
        {
            printf("You Lose!\n");
            compScore++;
        }
        printf("Your Score: %d | Computer's Score: %d\n", userScore, compScore);
    } while (userChoice != 0);

    printf("The final score: Your's %d | Computer's %d", userScore, compScore);

    return 0;
}