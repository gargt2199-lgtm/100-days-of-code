//Write a program to print the following pattern:
//*****
// ****
//  ***
//   **
//    *
#include<stdio.h>
int main()
{
    int i, j, k;
    for(i = 0; i < 5; i++) // Loop for rows
    {
        for(j = 0; j < i; j++) // Loop for spaces
        {
            printf(" "); // Print space
        }
        for(k = 0; k < 5 - i; k++) // Loop for asterisks
        {
            printf("*"); // Print asterisk
        }
        printf("\n"); // Move to the next line after each row
    }
    return 0;
}