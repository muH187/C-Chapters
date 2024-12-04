#include<stdio.h>

int subject1, subject2, subject3;

int main() {

    printf("Enter subject 1 marks: ");
    scanf("%d", &subject1);

    printf("Enter subject 2 marks: ");
    scanf("%d", &subject2);

    printf("Enter subject 3 marks: ");
    scanf("%d", &subject3);

    if(subject1 >= 33 && subject2 >= 33 && subject3 >= 33) {
        printf("Congratulations! You are passed.");
    } else {
        printf("You are failed!");
    }

    return 0;
}