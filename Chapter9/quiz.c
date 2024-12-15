#include<stdio.h>

struct employee {
    char name[10];
    float salary;
    int id;
};

int main() {

    struct employee e1, e2, e3;

    for(int i = 1; i < 4; i++) {

        printf("\nEnter the details of the employee %d:\n", i);

        printf("Enter the name of the employee: ");
        scanf("%s", &e1.name);

        printf("Enter the salary of the employee: ");
        scanf("%f", &e1.salary);

        printf("Enter the id of the employee: ");
        scanf("%d", &e1.id);

        printf("Name = %s\nSalary = %.2f\nid = %d", e1.name, e1.salary, e1.id);
    }
    

    return 0;
}