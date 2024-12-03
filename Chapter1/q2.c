#include<stdio.h>

// Calculate the area of the circle and modify the same program to calculate the volume of a cylinder given its radius and height.

int radius, height;
double area, volume;

int main() {

    const double PIE = 3.14159;

    printf("Enter the radius of the circle: ");
    scanf("%d", &radius);

    area = PIE * radius * radius;

    printf("The area of the circle is: %.2lf\n", area);

    printf("Enter height of the cyclinder: ");
    scanf("%d", &height);

    volume = area * height;

    printf("The volume of the cylinder is: %.2lf", volume);

    return 0;
}