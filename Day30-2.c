//Count positive, negative, and zero elements in an array.
#include <stdio.h>

int main() {
    
    int arr[] = {12, -5, 0, 8, -1, 0, 23, -9, 0, 15};
    
    int size = sizeof(arr) / sizeof(arr[0]);
    
    // Initialize counters
    int positive_count = 0;
    int negative_count = 0;
    int zero_count = 0;
    
    // Loop through each element in the array
    for (int i = 0; i < size; i++) {
        if (arr[i] > 0) {
            positive_count++; // Increment if element is greater than 0
        } else if (arr[i] < 0) {
            negative_count++; // Increment if element is less than 0
        } else {
            zero_count++;     // Increment if element equals 0
            }
    }
    
    // Print the final counts
    printf("Array Analysis:\n");
    printf("-----------------\n");
    printf("Positive numbers : %d\n", positive_count);
    printf("Negative numbers : %d\n", negative_count);
    printf("Zero elements    : %d\n", zero_count);
    
    return 0;
}