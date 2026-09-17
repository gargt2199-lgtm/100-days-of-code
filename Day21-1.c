//Write a program to swap the first and last digit of a number using loops without strings and arrays.
#include<stdio.h>
int main()
{
    int num, first_digit, last_digit, num_of_digits = 0, temp_num, swapped_num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    temp_num = num;
    last_digit = temp_num % 10; // Get the last digit

    // Count the number of digits and get the first digit
    while(temp_num != 0)
    {
        first_digit = temp_num % 10; // Get the current last digit (which will be the first digit at the end)
        temp_num /= 10; // Remove the last digit
        num_of_digits++;
    }

    // Calculate the swapped number
    swapped_num = last_digit * pow(10, num_of_digits - 1) + (num % (int)pow(10, num_of_digits - 1)) - first_digit + first_digit;

    printf("Number after swapping first and last digit: %d\n", swapped_num);

    return 0;
}