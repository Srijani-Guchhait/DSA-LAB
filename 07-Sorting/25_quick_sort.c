#include <stdio.h>

void swap(int array[], int a, int b) {
    int temp = array[a];
    array[a] = array[b];
    array[b] = temp;
}

int partition(int array[], int low, int high) {
    int pivot = array[high];
    int i = (low - 1);
    
    for (int j = low; j < high; j++) {
        if (array[j] <= pivot) {
            i++;
            swap(array, i, j);
            printf("Step: ");
            for (int k = low; k <= high; k++) {
                printf("%d ", array[k]);
            }
            printf("\n");
        }
    }
    swap(array, i + 1, high);
    printf("Step: ");
    for (int k = low; k <= high; k++) {
        printf("%d ", array[k]);
    }
    printf("\n");
    return (i + 1);
}

void quickSort(int array[], int low, int high) {
    if (low < high) {
        int pi = partition(array, low, high);
        quickSort(array, low, pi - 1);
        quickSort(array, pi + 1, high);
    }
}

int main() {
    int data[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(data) / sizeof(data[0]);
    
    printf("Unsorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", data[i]);
    }
    printf("\n");
    
    quickSort(data, 0, n - 1);
    
    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", data[i]);
    }
    printf("\n");
    return 0;
}

