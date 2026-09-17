//write a program to calculate simple and compound interest for given principal, rate, and time.
#include<stdio.h>
int main()
{
    int principal, rate, time, simple_interest, compound_interest;

    printf("Enter principal amount: ");
    scanf("%d", &principal);

    printf("Enter annual interest rate (in percentage): ");
    scanf("%d", &rate);

    printf("Enter time (in years): ");
    scanf("%d", &time);

    // Calculate simple interest
    simple_interest = (principal * rate * time) / 100;

    // Calculate compound interest
    compound_interest = principal * (pow((1 + rate / 100), time)) - principal;

    printf("Simple Interest: %.2d\n", simple_interest);
    printf("Compound Interest: %.2d\n", compound_interest);

    return 0;
}