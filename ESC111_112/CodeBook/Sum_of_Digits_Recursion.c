#include <stdio.h>

// Function to calculate the sum of digits of a positive integer using recursion
int sumOfDigits(int n) {
    // Base case: If n is a single digit, return n
    if (n < 10) {
        return n;
    } else {
        // Calculate the sum of digits for the remaining part of the number
        int lastDigit = n % 10;
        int remainingDigits = n / 10;
        int sum = sumOfDigits(remainingDigits);

        // Add the last digit to the sum of remaining digits
        return sum + lastDigit;
    }
}

int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Invalid input. Please enter a positive integer.\n");
    } else {
        int result = sumOfDigits(n);
        printf("Sum of digits of %d is %d\n", n, result);
    }

    return 0;
}
