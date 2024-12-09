#include<stdio.h>

void toCalForce(int mass, double GRAVITY);

int main() {

    int mass;
    const double GRAVITY = 9.8;

    printf("Enter the mass of the body: ");
    scanf("%d", &mass);

    toCalForce(mass, GRAVITY);

    return 0;
}

void toCalForce(int mass, double GRAVITY) {
    double force;
    force = mass * GRAVITY;
    printf("The force is: %.2lf", force);
}