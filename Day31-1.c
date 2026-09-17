//Search for an element in an array using linear search.
#include <stdio.h>

int main() 
{
    int arr[] = {12, 45, 22, 98, 10, 67, 30};
    int size = sizeof(arr) / sizeof(arr[0]); // Dynamically calculate array size
    int target;
    printf("Enter the number you want to search for: ");
    if (scanf("%d", &target) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    // Call the linear search function
    int resultIndex = linearSearch(arr, size, target);

    // Display the result
    if (resultIndex != -1) {
        printf("Element %d found at index %d.\n", target, resultIndex);
    } else {
        printf("Element %d is not present in the array.\n", target);
    }

    return 0;
}