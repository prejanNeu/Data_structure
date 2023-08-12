#include <stdio.h>
#include <stdlib.h>

// Binary search function
int binary_search(int* arr, int* size, int x) {
    int low = 0, high = *size - 1;

    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] > x) {
            high = mid - 1;
        } else if (arr[mid] < x) {
            low = mid + 1;
        } else if (arr[mid] == x) {
            return mid; // Return the index of the found element
        }
    }
    return -1; // Element not found
}

int main() {
    int arraySize;
    printf("Enter the size of the array: ");
    scanf("%d", &arraySize);

    if (arraySize <= 0) {
        printf("Invalid input\n");
    } else {
        int* array = (int*)malloc(arraySize * sizeof(int));

        if (array == NULL) {
            printf("Memory allocation failed\n");
            return 1; // Exit the program with an error code
        }

        printf("Enter the elements of the array:\n");
        for (int i = 0; i < arraySize; i++) {
            printf("Enter the value for element %d: ", i);
            scanf("%d", &array[i]);
        }

        printf("Enter the element that you want to search in the array: ");
        int searchElement;
        scanf("%d", &searchElement);

        int index = binary_search(array, &arraySize, searchElement);

        if (index != -1) {
            printf("The value %d is found at index %d\n", searchElement, index);
        } else {
            printf("The value %d is not found in the array\n", searchElement);
        }

        free(array);
    }
    return 0;
}
