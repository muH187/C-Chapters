#include<stdio.h>

struct employee {
    char name[10];
    float salary;
    int id;
};

int main() {

    struct employee facebook[100];

    facebook[0].id = 100;
    facebook[1].id = 101;



    return 0;
}