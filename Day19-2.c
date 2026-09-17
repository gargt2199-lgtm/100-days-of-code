//Write a program to find the sum of digits of a number.
#include<stdio.h>
int main()
{
    int num, sum = 0, remainder;

    printf("Enter an integer: ");
    scanf("%d", &num);

    while(num != 0)
    {
        remainder = num % 10; // Get the last digit
        sum += remainder; // Add it to the sum
        num /= 10; // Remove the last digit from num
    }

    printf("Sum of digits is: %d\n", sum);

    return 0;
}