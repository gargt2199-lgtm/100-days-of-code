//Count even and odd numbers in an array.
#include <stdio.h>

int main() {
    int size;
    int even_count = 0;
    int odd_count = 0;

    // Ask user for the size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    int arr[size];

    // Input array elements from the user
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Loop through the array to check each element
    for (int i = 0; i < size; i++) {
        // If the remainder is 0 when divided by 2, it's even
        if (arr[i] % 2 == 0) {
            even_count++;
        } 
        // Otherwise, it's odd
        else {
            odd_count++;
        }
    }

    // Display the final counts
    printf("\nTotal Even numbers: %d", even_count);
    printf("\nTotal Odd numbers: %d\n", odd_count);

    return 0;
}