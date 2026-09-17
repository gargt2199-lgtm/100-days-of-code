//Write a program to calculate the factorial of a number.
#include<stdio.h>
int main()
{
    int n, i;
    long long factorial = 1; // Use long long to handle larger factorials

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if(n < 0)
    {
        printf("Factorial is not defined for negative numbers.\n");
    }
    else
    {
        for(i = 1; i <= n; i++)
        {
            factorial *= i;
        }
        printf("Factorial of %d is: %lld\n", n, factorial);
    }

    return 0;
}