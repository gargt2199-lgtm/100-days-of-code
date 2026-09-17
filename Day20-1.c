//Write a program to find the product of odd digits of a number.
#include<stdio.h>
int main()
{
    int num, product = 1, remainder;
    int has_odd_digit = 0; // Flag to check if there are any odd digits

    printf("Enter an integer: ");
    scanf("%d", &num);

    while(num != 0)
    {
        remainder = num % 10; // Get the last digit
        if(remainder % 2 != 0) // Check if the digit is odd
        {
            product *= remainder; // Multiply it to the product
            has_odd_digit = 1; // Set the flag to true
        }
        num /= 10; // Remove the last digit from num
    }

    if(has_odd_digit)
    {
        printf("Product of odd digits is: %d\n", product);
    }
    else
    {
        printf("No odd digits found in the number.\n");
    }

    return 0;
}