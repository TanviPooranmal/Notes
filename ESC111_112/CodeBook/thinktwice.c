#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int A[n], B[n];
    int countA = 0, countB = 0;

    // Input array A
    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
        countA += A[i];
    }

    // Input array B
    for (int i = 0; i < n; i++) {
        scanf("%d", &B[i]);
        countB += B[i];
    }

    // Calculate the absolute difference in 1s count
    int operations = abs(countA - countB);

    // Output the result
    printf("%d\n", operations);

    return 0;
}
