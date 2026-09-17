//Write a program to check if a number is a strong number using loops without strings and arrays.
#include<stdio.h>

int main()
{
    int num, sum = 0, digit;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Calculate the sum of factorials of digits
    int temp = num;
    while(temp > 0)
    {
        digit = temp % 10;
        int factorial = 1;
        for(int i = 1; i <= digit; i++)
        {
            factorial *= i;
        }
        sum += factorial;
        temp /= 10;
    }

    // Check if the number is a strong number
    if(sum == num && num != 0)
    {
        printf("%d is a strong number.\n", num);
    }
    else
    {
        printf("%d is not a strong number.\n", num);
    }

    return 0;
}