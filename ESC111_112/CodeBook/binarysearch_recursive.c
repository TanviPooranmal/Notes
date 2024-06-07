#include <stdio.h>

int binarySearch(int arr[], int key, int left, int right) {
    if (left > right) {
        return -1; // Element not found
    }

    int mid = left + (right - left) / 2;

    if (arr[mid] == key) {
        return mid; // Element found at index 'mid'
    } else if (arr[mid] > key) {
        return binarySearch(arr, key, left, mid - 1); // Search the left half
    } else {
        return binarySearch(arr, key, mid + 1, right); // Search the right half
    }
}

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements of the sorted array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int key;
    printf("Enter the key to search for: ");
    scanf("%d", &key);

    int result = binarySearch(arr, key, 0, n - 1);

    if (result == -1) {
        printf("Element %d is not found in the array.\n", key);
    } else {
        printf("Element %d is found at index %d.\n", key, result);
    }

    return 0;
}
