#include<stdio.h>
#include<stdlib.h>

int linear_search(int* arr, int* size, int x) {
    for (int i = 0; i < *size; i++) {
        if (x == *(arr + i)) {
            return i + 1; // Found at index i
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
    }
    else {
        int* array = (int*)malloc(arraySize * sizeof(int));
        
        if (array == NULL) {
            printf("Memory allocation failed\n");
            return 1; // Exit the program with an error code
        }

        printf("Enter the elements of the array\n\n");
        for (int i = 0; i < arraySize; i++) {
            printf("Enter the %d element of the array: ", i);
            scanf("%d", (array + i));
        }

        printf("Enter the element that you want to search in the array: ");
        int searchElement;
        scanf("%d", &searchElement);

        int index = linear_search(array, &arraySize, searchElement);
        if (index != -1) {
            printf("The value %d is found at index %d\n", searchElement, index);
        } else {
            printf("The value %d is not found in the array\n", searchElement);
        }

        free(array);
    }

    return 0;
}
