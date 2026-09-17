//Write a program to print the sum of the first n odd numbers.
#include<stdio.h>
int main()
{
    int n, i, sum = 0;

    printf("Enter the number of odd terms to sum: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        sum += (2 * i - 1); // Formula for the ith odd number
    }

    printf("Sum of the first %d odd numbers is: %d\n", n, sum);

    return 0;
}