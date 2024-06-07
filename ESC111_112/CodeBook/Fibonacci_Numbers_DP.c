#include <stdio.h>

#define MAX_N 100 // Adjust this as needed

// Initialize an array to store Fibonacci numbers with -1 (indicating not computed yet)
long long memo[MAX_N];

// Function to calculate Fibonacci numbers using memoization
long long fibonacci(int n) {
    if (n <= 1) {
        return n;
    }

    // Check if Fibonacci number has already been computed
    if (memo[n] != -1) {
        return memo[n];
    }

    // Compute and store Fibonacci number
    memo[n] = fibonacci(n - 1) + fibonacci(n - 2);
    return memo[n];
}

int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Initialize memoization array with -1
    for (int i = 0; i < MAX_N; i++) {
        memo[i] = -1;
    }

    if (n < 0) {
        printf("Fibonacci sequence is not defined for negative numbers.\n");
    } else {
        long long result = fibonacci(n);
        printf("Fibonacci number at position %d is %lld\n", n, result);
    }

    return 0;
}
