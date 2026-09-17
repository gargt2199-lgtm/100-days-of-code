//Find the digit that occurs the most times in an integer number.
#include <stdio.h>

int main() {
    long long n;
    int freq[10] = {0};
    int digit, maxDigit = 0, i;

    printf("Enter an integer: ");
    scanf("%lld", &n);

    // Handle negative numbers
    if (n < 0)
        n = -n;

    // Special case for 0
    if (n == 0)
        freq[0] = 1;

    // Count frequency of each digit
    while (n > 0) {
        digit = n % 10;
        freq[digit]++;
        n = n / 10;
    }

    // Find the digit with maximum frequency
    for (i = 1; i < 10; i++) {
        if (freq[i] > freq[maxDigit]) {
            maxDigit = i;
        }
    }

    printf("Most frequent digit = %d\n", maxDigit);
    printf("Number of occurrences = %d\n", freq[maxDigit]);

    return 0;
}