#include<stdio.h>

int income;
int tax;

int main() {

    printf("Income List         Tax\n");
    printf("2.5L - 50L          5%%\n");
    printf("50L - 1C            20%%\n");
    printf("Above 1C            30%%\n");

    printf("Enter your income: ");
    scanf("%d", &income);

    if(income >= 250000 && income <= 5000000) {
        tax = income * 5 / 100;
        printf("%d is be deducted from your income as tax.\n", tax);
        income = income - tax;
        printf("%d will be deposited in your bank account.\n", income);
    } else if(income > 5000000 && income <= 10000000) {
        tax = income * 20 / 100;
        printf("%d is be deducted from your income as tax.\n", tax);
        income = income - tax;
        printf("%d will be deposited in your bank account.\n", income);
    } else if(income > 10000000) {
        tax = income * 30 / 100;
        printf("%d is be deducted from your income as tax.\n", tax);
        income = income - tax;
        printf("%d will be deposited in your bank account.\n", income);
    } else if(income < 250000) {
        printf("There is no income tax below 250,000\n");
        printf("%d will be deposited in your bank account.\n", income);
    }

    return 0;
}