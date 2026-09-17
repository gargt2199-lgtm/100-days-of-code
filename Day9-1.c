//Write a program to find the roots of a quadratic equation and categorize them.
#include<stdio.h>
#include<math.h>
int main()
{
    int a, b, c, discriminant, root1, root2, realPart, imaginaryPart;

    printf("Enter coefficients a, b and c: ");
    scanf("%d %d %d", &a, &b, &c);

    discriminant = b*b - 4*a*c;

    if(discriminant > 0)
    {
        root1 = (-b + sqrt(discriminant)) / (2*a);
        root2 = (-b - sqrt(discriminant)) / (2*a);
        printf("The roots are real and different.\n");
        printf("Root 1 = %.2d\n", root1);
        printf("Root 2 = %.2d\n", root2);
    }
    else if(discriminant == 0)
    {
        root1 = -b / (2*a);
        printf("The roots are real and same.\n");
        printf("Root 1 = Root 2 = %.2d\n", root1);
    }
    else
    {
        realPart = -b / (2*a);
        imaginaryPart = sqrt(-discriminant) / (2*a);
        printf("The roots are complex and different.\n");
        printf("Root 1 = %.2d + %.2di\n", realPart, imaginaryPart);
        printf("Root 2 = %.2d - %.2di\n", realPart, imaginaryPart);
    }

    return 0;
}