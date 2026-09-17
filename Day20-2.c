//Write a program to find the 1’s complement of a binary number and print it.
#include<stdio.h>
int main()
{
    int binary, ones_complement = 0, place = 1, remainder;

    printf("Enter a binary number: ");
    scanf("%d", &binary);

    while(binary != 0)
    {
        remainder = binary % 10; // Get the last digit
        if(remainder == 0)
            remainder = 1; // Flip 0 to 1
        else
            remainder = 0; // Flip 1 to 0

        ones_complement += remainder * place; // Build the one's complement
        place *= 10; // Move to the next place value
        binary /= 10; // Remove the last digit from binary
    }

    printf("1's complement is: %d\n", ones_complement);

    return 0;
}