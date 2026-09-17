//Write a program to calculate library fine based on late days as follows: 
//First 5 days late: ₹2/day Next 5 days late: ₹4/day Next 20 days days late: ₹6/day More than 30 days: Membership Cancelled.
#include<stdio.h>
int main()
{
    int daysLate;
    float fine;

    printf("Enter the number of days the book is late: ");
    scanf("%d", &daysLate);

    if(daysLate <= 5)
    {
        fine = daysLate * 2;
    }
    else if(daysLate <= 10)
    {
        fine = 10 + (daysLate - 5) * 4;
    }
    else if(daysLate <= 30)
    {
        fine = 10 + 20 + (daysLate - 10) * 6;
    }
    else
    {
        printf("Membership Cancelled.\n");
        return 0;
    }

    printf("The library fine is: ₹%.2f\n", fine);

    return 0;
}