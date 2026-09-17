//Write a program to print the following pattern:
//5
//45
//345
//2345
//12345
#include<stdio.h>
int main()
{
    int i, j;
    for(i = 5; i >= 1; i--) // Loop for rows
    {
        for(j = i; j <= 5; j++) // Loop for columns
        {
            printf("%d", j); // Print the current number
        }
        printf("\n"); // Move to the next line after each row
    }
    return 0;
}