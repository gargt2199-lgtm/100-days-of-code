//Read and print elements of a one-dimensional array.
#include <stdio.h>

int main() {
    // Declare a fixed-size array and variables for loop control and size
    int arr[100];
    int n, i;

    // 1. Ask the user for the number of elements
    printf("Enter the number of elements (Max 100): ");
    scanf("%d", &n);

    // 2. Read elements from the user into the array
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // 3. Display the stored elements of the array
    printf("\nThe elements in the array are:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}