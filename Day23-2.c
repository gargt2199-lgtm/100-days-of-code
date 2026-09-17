//Write a program to print the following pattern:
//*****
//*****
//*****
//*****
//*****
#include<stdio.h>
int main()
{
    int i, j;
    for(i = 0; i < 5; i++) // Loop for rows
    {
        for(j = 0; j < 5; j++) // Loop for columns
        {
            printf("*"); // Print asterisk
        }
        printf("\n"); // Move to the next line after each row
    }
    return 0;
}