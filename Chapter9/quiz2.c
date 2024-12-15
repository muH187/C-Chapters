#include<stdio.h>
#include<string.h>

struct employee {
    char name[10];
    float salary;
    int id;
};

void show(struct employee e);

int main() {

    struct employee emp;

    strcpy(emp.name, "Ali");
    emp.salary = 1000;
    emp.id = 102;

    show(emp);

    return 0;
}

void show(struct employee e) {
    printf("The name is: %s\n", e.name);
    printf("The salary is: %.2f\n", e.salary);
    printf("The id is: %d\n", e.id);
}