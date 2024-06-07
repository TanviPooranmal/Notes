/*Basic search in a 2D array in C*/
#include <stdio.h>

int main() {
    int rows, cols;
    
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int target;
    printf("Enter the element to search for: ");
    scanf("%d", &target);

    // Perform the search
    int found = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] == target) {
                printf("Element found at position (%d, %d)\n", i, j);
                found = 1;
                break; // If found, break from the inner loop
            }
        }
        if (found) {
            break; // If found, break from the outer loop
        }
    }

    if (!found) {
        printf("Element not found in the matrix\n");
    }

    return 0;
}
