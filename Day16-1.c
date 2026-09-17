//write a program to take a number as input and print its equivalent binary representation.
#include<stdio.h>
int main() {
    int num, i = 0;
    int binary[32]; // Array to store binary digits (up to 32 bits)

    // Take input from the user
    printf("Enter a decimal number: ");
    scanf("%d", &num);

    // Handle the edge case if the input is 0
    if (num == 0) {
        printf("Binary representation: 0\n");
        return 0;
    }

    // Loop to convert decimal to binary
    while (num > 0) {
        binary[i] = num % 2; // Store remainder (0 or 1)
        num = num / 2;       // Divide the number by 2
        i++;
    }

    // Print the binary array in reverse order
    printf("Binary representation: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");

    return 0;
}