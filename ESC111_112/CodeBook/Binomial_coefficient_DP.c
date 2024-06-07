#include <stdio.h>

#define MAX_N 100 // Adjust this as needed

// Initialize a 2D array to store binomial coefficients
long long binomial[MAX_N][MAX_N];

// Function to calculate binomial coefficient (n choose k) using dynamic programming
long long calculateBinomial(int n, int k) {
    if (k == 0 || k == n) {
        return 1;
    }

    // Check if the binomial coefficient has already been computed
    if (binomial[n][k] != 0) {
        return binomial[n][k];
    }

    // Compute and store binomial coefficient
    binomial[n][k] = calculateBinomial(n - 1, k - 1) + calculateBinomial(n - 1, k);
    return binomial[n][k];
}

int main() {
    int n, k;
    printf("Enter n and k (n choose k): ");
    scanf("%d %d", &n, &k);

    if (n < 0 || k < 0 || k > n) {
        printf("Invalid input.\n");
    } else {
        // Initialize binomial array with zeros
        for (int i = 0; i < MAX_N; i++) {
            for (int j = 0; j < MAX_N; j++) {
                binomial[i][j] = 0;
            }
        }

        long long result = calculateBinomial(n, k);
        printf("%d choose %d = %lld\n", n, k, result);
    }

    return 0;
}
