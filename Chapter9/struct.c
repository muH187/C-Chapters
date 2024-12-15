#include<stdio.h>
#include<string.h>

struct employee{
    int code;
    float salary;
    char name[10];
};

int main() {

    struct employee e1, e2;

    e1.code = 200;
    strcpy(e1.name, "Ali");
    e1.salary = 100.00;

    printf("Code = %d\nSalary = %.2f\nName = %s", e1.code, e1.salary, e1.name);

    return 0;
}