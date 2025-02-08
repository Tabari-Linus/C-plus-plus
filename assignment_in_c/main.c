#include <stdio.h>
#include <stdlib.h>
// Main function
int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int num_elements = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: \n");
    for (int i = 0; i < num_elements; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Bubble sort algorithm
    int i, j, temp;
    for (i = 0; i < num_elements - 1; i++) {

        for (j = 0; j < num_elements - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j+1] if element in arr[j] is greater than [j+1]
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("Sorted array: \n");
    for (int i = 0; i < num_elements; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
