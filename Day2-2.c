//Write a program to calculate the area and circumference of a circle given its radius.
#include<stdio.h>
int main()
{
    int radius, area, circumference;
    const int PI = 3.14159;

    printf("Enter radius of the circle: ");
    scanf("%d", &radius);

    area = PI * radius * radius;
    circumference = 2 * PI * radius;

    printf("Area of the circle is: %.2d\n", area);
    printf("Circumference of the circle is: %.2d\n", circumference);

    return 0;
}