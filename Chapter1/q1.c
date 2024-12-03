#include<stdio.h>

// Write a C program to calculate area of a rectangle:

int area, length, width;

int main() {

    printf("Enter the length of the area: ");
    scanf("%d", &length);

    printf("Enter the widht of the area: ");
    scanf("%d", &width);

    area = length * width;

    printf("The area of the rectangle is: %d", area);

    return 0;
}
