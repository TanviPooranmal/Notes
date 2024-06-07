/*Count the number of occurence*/
#include <stdio.h>

#include <stdio.h>

int main() {
    int numRows, numCols, target;
    
    // Input the dimensions of the 2D array
    printf("Enter the number of rows: ");
    scanf("%d", &numRows);
    printf("Enter the number of columns: ");
    scanf("%d", &numCols);

    // Input the target element to search for
    printf("Enter the element to search for: ");
    scanf("%d", &target);

    // Declare and input the 2D array
    int matrix[numRows][numCols];
    printf("Enter the elements of the %d x %d matrix:\n", numRows, numCols);
    for (int i = 0; i < numRows; i++) {
        for (int j = 0; j < numCols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Initialize a counter to keep track of the number of occurrences
    int count = 0;

    // Search for the target element and count occurrences
    for (int i = 0; i < numRows; i++) {
        for (int j = 0; j < numCols; j++) {
            if (matrix[i][j] == target) {
                count++;
            }
        }
    }

    // Display the result
    if (count > 0) {
        printf("The element %d was found %d times in the matrix.\n", target, count);
    } else {
        printf("The element %d was not found in the matrix.\n", target);
    }

    return 0;
}

