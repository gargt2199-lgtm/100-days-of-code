//Write a program to reverse a given number.
#include<stdio.h>
int main()
{
    int num, reversed = 0, remainder;

    printf("Enter an integer: ");
    scanf("%d", &num);

    while(num != 0)
    {
        remainder = num % 10; // Get the last digit
        reversed = reversed * 10 + remainder; // Append it to the reversed number
        num /= 10; // Remove the last digit from num
    }

    printf("Reversed number is: %d\n", reversed);

    return 0;
}