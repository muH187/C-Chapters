#include<stdio.h>

void checkLeapYear(int year);

int main() {

    checkLeapYear(2016);
    checkLeapYear(2017);
    checkLeapYear(2022);
    checkLeapYear(2024);

    return 0;
}

void checkLeapYear(int year) {
    if(year % 4 == 0) {
        printf("%d is a leap year.\n", year);
    } else {
        printf("%d is not a leap year.\n", year);
    }
}