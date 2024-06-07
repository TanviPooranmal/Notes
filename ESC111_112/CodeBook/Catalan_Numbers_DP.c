#include <stdio.h>

#define MAX_N 100 // Adjust this as needed

// Initialize an array to store Catalan numbers
unsigned long long catalan[MAX_N];

// Function to calculate Catalan numbers using dynamic programming
unsigned long long calculateCatalan(int n) {
    if (n <= 1) {
        return 1;
    }

    // Check if the Catalan number has already been computed
    if (catalan[n] != 0) {
        return catalan[n];
    }

    // Compute and store Catalan number
    unsigned long long result = 0;
    for (int i = 0; i < n; i++) {
        result += calculateCatalan(i) * calculateCatalan(n - i - 1);
    }
    catalan[n] = result;
    return result;
}

int main() {
    int n;
    printf("Enter n to calculate the nth Catalan number: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Invalid input.\n");
    } else {
        // Initialize Catalan array with zeros
        for (int i = 0; i < MAX_N; i++) {
            catalan[i] = 0;
        }

        unsigned long long result = calculateCatalan(n);
        printf("Catalan number C(%d) = %llu\n", n, result);
    }

    return 0;
}
